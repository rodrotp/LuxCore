#include <string>
namespace slg { namespace ocl {
std::string KernelSource_materialdefs_funcs_metal2 = 
"#line 2 \"materialdefs_funcs_metal2.cl\"\n"
"\n"
"/***************************************************************************\n"
" * Copyright 1998-2013 by authors (see AUTHORS.txt)                        *\n"
" *                                                                         *\n"
" *   This file is part of LuxRender.                                       *\n"
" *                                                                         *\n"
" * Licensed under the Apache License, Version 2.0 (the \"License\");         *\n"
" * you may not use this file except in compliance with the License.        *\n"
" * You may obtain a copy of the License at                                 *\n"
" *                                                                         *\n"
" *     http://www.apache.org/licenses/LICENSE-2.0                          *\n"
" *                                                                         *\n"
" * Unless required by applicable law or agreed to in writing, software     *\n"
" * distributed under the License is distributed on an \"AS IS\" BASIS,       *\n"
" * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.*\n"
" * See the License for the specific language governing permissions and     *\n"
" * limitations under the License.                                          *\n"
" ***************************************************************************/\n"
"\n"
"//------------------------------------------------------------------------------\n"
"// Metal2 material\n"
"//\n"
"// LuxRender Metal2 material porting.\n"
"//------------------------------------------------------------------------------\n"
"\n"
"#if defined (PARAM_ENABLE_MAT_METAL2)\n"
"\n"
"float3 Metal2Material_Evaluate(__global Material *material,\n"
"		__global HitPoint *hitPoint, const float3 lightDir, const float3 eyeDir,\n"
"		BSDFEvent *event, float *directPdfW\n"
"		TEXTURES_PARAM_DECL) {\n"
"	const float u = clamp(Texture_GetFloatValue(&texs[material->metal2.nuTexIndex], hitPoint\n"
"		TEXTURES_PARAM), 6e-3f, 1.f);\n"
"#if defined(PARAM_ENABLE_MAT_METAL2_ANISOTROPIC)\n"
"	const float v = clamp(Texture_GetFloatValue(&texs[material->metal2.nvTexIndex], hitPoint\n"
"		TEXTURES_PARAM), 6e-3f, 1.f);\n"
"	const float u2 = u * u;\n"
"	const float v2 = v * v;\n"
"	const float anisotropy = (u2 < v2) ? (1.f - u2 / v2) : (v2 / u2 - 1.f);\n"
"	const float roughness = u * v;\n"
"#else\n"
"	const float anisotropy = 0.f;\n"
"	const float roughness = u * u;\n"
"#endif\n"
"\n"
"	const float3 wh = normalize(lightDir + eyeDir);\n"
"	const float cosWH = dot(lightDir, wh);\n"
"\n"
"	if (directPdfW)\n"
"		*directPdfW = SchlickDistribution_Pdf(roughness, wh, anisotropy) / (4.f * cosWH);\n"
"\n"
"	const float3 nVal = Texture_GetSpectrumValue(&texs[material->metal2.nTexIndex], hitPoint\n"
"			TEXTURES_PARAM);\n"
"	const float3 kVal = Texture_GetSpectrumValue(&texs[material->metal2.kTexIndex], hitPoint\n"
"			TEXTURES_PARAM);\n"
"\n"
"	const float3 F = FresnelGeneral_Evaluate(nVal, kVal, cosWH);\n"
"\n"
"	const float G = SchlickDistribution_G(roughness, lightDir, eyeDir);\n"
"\n"
"	*event = GLOSSY | REFLECT;\n"
"	return SchlickDistribution_D(roughness, wh, anisotropy) * G / (4.f * fabs(eyeDir.z)) * F;\n"
"}\n"
"\n"
"float3 Metal2Material_Sample(__global Material *material,\n"
"		__global HitPoint *hitPoint, const float3 fixedDir, float3 *sampledDir,\n"
"		const float u0, const float u1,\n"
"		float *pdfW, float *cosSampledDir, BSDFEvent *event,\n"
"		const BSDFEvent requestedEvent\n"
"		TEXTURES_PARAM_DECL) {\n"
"	if (!(requestedEvent & (GLOSSY | REFLECT)) ||\n"
"			(fabs(fixedDir.z) < DEFAULT_COS_EPSILON_STATIC))\n"
"		return BLACK;\n"
"\n"
"	const float u = clamp(Texture_GetFloatValue(&texs[material->metal2.nuTexIndex], hitPoint\n"
"		TEXTURES_PARAM), 6e-3f, 1.f);\n"
"#if defined(PARAM_ENABLE_MAT_METAL2_ANISOTROPIC)\n"
"	const float v = clamp(Texture_GetFloatValue(&texs[material->metal2.nvTexIndex], hitPoint\n"
"		TEXTURES_PARAM), 6e-3f, 1.f);\n"
"	const float u2 = u * u;\n"
"	const float v2 = v * v;\n"
"	const float anisotropy = (u2 < v2) ? (1.f - u2 / v2) : (v2 / u2 - 1.f);\n"
"	const float roughness = u * v;\n"
"#else\n"
"	const float anisotropy = 0.f;\n"
"	const float roughness = u * u;\n"
"#endif\n"
"\n"
"	float3 wh;\n"
"	float d, specPdf;\n"
"	SchlickDistribution_SampleH(roughness, anisotropy, u0, u1, &wh, &d, &specPdf);\n"
"	const float cosWH = dot(fixedDir, wh);\n"
"	*sampledDir = 2.f * cosWH * wh - fixedDir;\n"
"\n"
"	const float coso = fabs(fixedDir.z);\n"
"	const float cosi = fabs((*sampledDir).z);\n"
"	*cosSampledDir = cosi;\n"
"	if ((*cosSampledDir < DEFAULT_COS_EPSILON_STATIC) || (fixedDir.z * (*sampledDir).z < 0.f))\n"
"		return BLACK;\n"
"\n"
"	*pdfW = specPdf / (4.f * fabs(cosWH));\n"
"	if (*pdfW <= 0.f)\n"
"		return BLACK;\n"
"\n"
"	const float G = SchlickDistribution_G(roughness, fixedDir, *sampledDir);\n"
"	\n"
"	const float3 nVal = Texture_GetSpectrumValue(&texs[material->metal2.nTexIndex], hitPoint\n"
"			TEXTURES_PARAM);\n"
"	const float3 kVal = Texture_GetSpectrumValue(&texs[material->metal2.kTexIndex], hitPoint\n"
"			TEXTURES_PARAM);\n"
"	const float3 F = FresnelGeneral_Evaluate(nVal, kVal, cosWH);\n"
"\n"
"	float factor = (d / *pdfW) * G * fabs(cosWH);\n"
"	//if (!fromLight)\n"
"		factor /= 4.f * coso;\n"
"	//else\n"
"	//	factor /= cosi;\n"
"\n"
"	*event = GLOSSY | REFLECT;\n"
"\n"
"	return factor * F;\n"
"}\n"
"\n"
"#endif\n"
; } }

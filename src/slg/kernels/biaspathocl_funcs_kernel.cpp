#include <string>
namespace slg { namespace ocl {
std::string KernelSource_biaspathocl_funcs = 
"#line 2 \"biaspatchocl_funcs.cl\"\n"
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
"void SR_RadianceClamp(__global SampleResult *sampleResult) {\n"
"	// Initialize only Spectrum fields\n"
"\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_0)\n"
"	sampleResult->radiancePerPixelNormalized[0].c[0] = clamp(sampleResult->radiancePerPixelNormalized[0].c[0], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"	sampleResult->radiancePerPixelNormalized[0].c[1] = clamp(sampleResult->radiancePerPixelNormalized[0].c[1], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"	sampleResult->radiancePerPixelNormalized[0].c[2] = clamp(sampleResult->radiancePerPixelNormalized[0].c[2], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_1)\n"
"	sampleResult->radiancePerPixelNormalized[1].c[0] = clamp(sampleResult->radiancePerPixelNormalized[1].c[0], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"	sampleResult->radiancePerPixelNormalized[1].c[1] = clamp(sampleResult->radiancePerPixelNormalized[1].c[1], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"	sampleResult->radiancePerPixelNormalized[1].c[2] = clamp(sampleResult->radiancePerPixelNormalized[1].c[2], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_2)\n"
"	sampleResult->radiancePerPixelNormalized[2].c[0] = clamp(sampleResult->radiancePerPixelNormalized[2].c[0], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"	sampleResult->radiancePerPixelNormalized[2].c[1] = clamp(sampleResult->radiancePerPixelNormalized[2].c[1], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"	sampleResult->radiancePerPixelNormalized[2].c[2] = clamp(sampleResult->radiancePerPixelNormalized[2].c[2], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_3)\n"
"	sampleResult->radiancePerPixelNormalized[3].c[0] = clamp(sampleResult->radiancePerPixelNormalized[3].c[0], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"	sampleResult->radiancePerPixelNormalized[3].c[1] = clamp(sampleResult->radiancePerPixelNormalized[3].c[1], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"	sampleResult->radiancePerPixelNormalized[3].c[2] = clamp(sampleResult->radiancePerPixelNormalized[3].c[2], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_4)\n"
"	sampleResult->radiancePerPixelNormalized[4].c[0] = clamp(sampleResult->radiancePerPixelNormalized[4].c[0], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"	sampleResult->radiancePerPixelNormalized[4].c[1] = clamp(sampleResult->radiancePerPixelNormalized[4].c[1], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"	sampleResult->radiancePerPixelNormalized[4].c[2] = clamp(sampleResult->radiancePerPixelNormalized[4].c[2], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_5)\n"
"	sampleResult->radiancePerPixelNormalized[5].c[0] = clamp(sampleResult->radiancePerPixelNormalized[5].c[0], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"	sampleResult->radiancePerPixelNormalized[5].c[1] = clamp(sampleResult->radiancePerPixelNormalized[5].c[1], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"	sampleResult->radiancePerPixelNormalized[5].c[2] = clamp(sampleResult->radiancePerPixelNormalized[5].c[2], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_6)\n"
"	sampleResult->radiancePerPixelNormalized[6].c[0] = clamp(sampleResult->radiancePerPixelNormalized[6].c[0], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"	sampleResult->radiancePerPixelNormalized[6].c[1] = clamp(sampleResult->radiancePerPixelNormalized[6].c[1], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"	sampleResult->radiancePerPixelNormalized[6].c[2] = clamp(sampleResult->radiancePerPixelNormalized[6].c[2], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_7)\n"
"	sampleResult->radiancePerPixelNormalized[7].c[0] = clamp(sampleResult->radiancePerPixelNormalized[7].c[0], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"	sampleResult->radiancePerPixelNormalized[7].c[1] = clamp(sampleResult->radiancePerPixelNormalized[7].c[1], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"	sampleResult->radiancePerPixelNormalized[7].c[2] = clamp(sampleResult->radiancePerPixelNormalized[7].c[2], 0.f, PARAM_RADIANCE_CLAMP_MAXVALUE);\n"
"#endif\n"
"}\n"
"\n"
"void SR_Accumulate(__global SampleResult *src, SampleResult *dst) {\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_0)\n"
"	dst->radiancePerPixelNormalized[0].c[0] += src->radiancePerPixelNormalized[0].c[0];\n"
"	dst->radiancePerPixelNormalized[0].c[1] += src->radiancePerPixelNormalized[0].c[1];\n"
"	dst->radiancePerPixelNormalized[0].c[2] += src->radiancePerPixelNormalized[0].c[2];\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_1)\n"
"	dst->radiancePerPixelNormalized[1].c[0] += src->radiancePerPixelNormalized[1].c[0];\n"
"	dst->radiancePerPixelNormalized[1].c[1] += src->radiancePerPixelNormalized[1].c[1];\n"
"	dst->radiancePerPixelNormalized[1].c[2] += src->radiancePerPixelNormalized[1].c[2];\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_2)\n"
"	dst->radiancePerPixelNormalized[2].c[0] += src->radiancePerPixelNormalized[2].c[0];\n"
"	dst->radiancePerPixelNormalized[2].c[1] += src->radiancePerPixelNormalized[2].c[1];\n"
"	dst->radiancePerPixelNormalized[2].c[2] += src->radiancePerPixelNormalized[2].c[2];\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_3)\n"
"	dst->radiancePerPixelNormalized[3].c[0] += src->radiancePerPixelNormalized[3].c[0];\n"
"	dst->radiancePerPixelNormalized[3].c[1] += src->radiancePerPixelNormalized[3].c[1];\n"
"	dst->radiancePerPixelNormalized[3].c[2] += src->radiancePerPixelNormalized[3].c[2];\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_4)\n"
"	dst->radiancePerPixelNormalized[4].c[0] += src->radiancePerPixelNormalized[4].c[0];\n"
"	dst->radiancePerPixelNormalized[4].c[1] += src->radiancePerPixelNormalized[4].c[1];\n"
"	dst->radiancePerPixelNormalized[4].c[2] += src->radiancePerPixelNormalized[4].c[2];\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_5)\n"
"	dst->radiancePerPixelNormalized[5].c[0] += src->radiancePerPixelNormalized[5].c[0];\n"
"	dst->radiancePerPixelNormalized[5].c[1] += src->radiancePerPixelNormalized[5].c[1];\n"
"	dst->radiancePerPixelNormalized[5].c[2] += src->radiancePerPixelNormalized[5].c[2];\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_6)\n"
"	dst->radiancePerPixelNormalized[6].c[0] += src->radiancePerPixelNormalized[6].c[0];\n"
"	dst->radiancePerPixelNormalized[6].c[1] += src->radiancePerPixelNormalized[6].c[1];\n"
"	dst->radiancePerPixelNormalized[6].c[2] += src->radiancePerPixelNormalized[6].c[2];\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_7)\n"
"	dst->radiancePerPixelNormalized[7].c[0] += src->radiancePerPixelNormalized[7].c[0];\n"
"	dst->radiancePerPixelNormalized[7].c[1] += src->radiancePerPixelNormalized[7].c[1];\n"
"	dst->radiancePerPixelNormalized[7].c[2] += src->radiancePerPixelNormalized[7].c[2];\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_ALPHA)\n"
"	dst->alpha += dst->alpha + src->alpha;\n"
"#endif\n"
"\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_DIRECT_DIFFUSE)\n"
"	dst->directDiffuse.c[0] += src->directDiffuse.c[0];\n"
"	dst->directDiffuse.c[1] += src->directDiffuse.c[1];\n"
"	dst->directDiffuse.c[2] += src->directDiffuse.c[2];\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_DIRECT_GLOSSY)\n"
"	dst->directGlossy.c[0] += src->directGlossy.c[0];\n"
"	dst->directGlossy.c[1] += src->directGlossy.c[1];\n"
"	dst->directGlossy.c[2] += src->directGlossy.c[2];\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_EMISSION)\n"
"	dst->emission.c[0] += src->emission.c[0];\n"
"	dst->emission.c[1] += src->emission.c[1];\n"
"	dst->emission.c[2] += src->emission.c[2];\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_INDIRECT_DIFFUSE)\n"
"	dst->indirectDiffuse.c[0] += src->indirectDiffuse.c[0];\n"
"	dst->indirectDiffuse.c[1] += src->indirectDiffuse.c[1];\n"
"	dst->indirectDiffuse.c[2] += src->indirectDiffuse.c[2];\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_INDIRECT_GLOSSY)\n"
"	dst->indirectGlossy.c[0] += src->indirectGlossy.c[0];\n"
"	dst->indirectGlossy.c[1] += src->indirectGlossy.c[1];\n"
"	dst->indirectGlossy.c[2] += src->indirectGlossy.c[2];\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_INDIRECT_SPECULAR)\n"
"	dst->indirectSpecular.c[0] += src->indirectSpecular.c[0];\n"
"	dst->indirectSpecular.c[1] += src->indirectSpecular.c[1];\n"
"	dst->indirectSpecular.c[2] += src->indirectSpecular.c[2];\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_DIRECT_SHADOW_MASK)\n"
"	dst->directShadowMask += src->directShadowMask;\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_INDIRECT_SHADOW_MASK)\n"
"	dst->indirectShadowMask += src->indirectShadowMask;\n"
"#endif\n"
"\n"
"	bool depthWrite = true;\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_DEPTH)\n"
"	const float srcDepthValue = src->depth;\n"
"	if (srcDepthValue <= dst->depth)\n"
"		dst->depth = srcDepthValue;\n"
"	else\n"
"		depthWrite = false;\n"
"#endif\n"
"	if (depthWrite) {\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_POSITION)\n"
"		dst->position = src->position;\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_GEOMETRY_NORMAL)\n"
"		dst->geometryNormal = src->geometryNormal;\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_SHADING_NORMAL)\n"
"		dst->shadingNormal = src->shadingNormal;\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_MATERIAL_ID)\n"
"		// Note: MATERIAL_ID_MASK and BY_MATERIAL_ID are calculated starting from materialID field\n"
"		dst->materialID = src->materialID;\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_UV)\n"
"		dst->uv = src->uv;\n"
"#endif\n"
"	}\n"
"\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_RAYCOUNT)\n"
"	dst->rayCount += src->rayCount;\n"
"#endif\n"
"}\n"
"\n"
"void SR_Normalize(SampleResult *dst, const float k) {\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_0)\n"
"	dst->radiancePerPixelNormalized[0].c[0] *= k;\n"
"	dst->radiancePerPixelNormalized[0].c[1] *= k;\n"
"	dst->radiancePerPixelNormalized[0].c[2] *= k;\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_1)\n"
"	dst->radiancePerPixelNormalized[1].c[0] *= k;\n"
"	dst->radiancePerPixelNormalized[1].c[1] *= k;\n"
"	dst->radiancePerPixelNormalized[1].c[2] *= k;\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_2)\n"
"	dst->radiancePerPixelNormalized[2].c[0] *= k;\n"
"	dst->radiancePerPixelNormalized[2].c[1] *= k;\n"
"	dst->radiancePerPixelNormalized[2].c[2] *= k;\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_3)\n"
"	dst->radiancePerPixelNormalized[3].c[0] *= k;\n"
"	dst->radiancePerPixelNormalized[3].c[1] *= k;\n"
"	dst->radiancePerPixelNormalized[3].c[2] *= k;\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_4)\n"
"	dst->radiancePerPixelNormalized[4].c[0] *= k;\n"
"	dst->radiancePerPixelNormalized[4].c[1] *= k;\n"
"	dst->radiancePerPixelNormalized[4].c[2] *= k;\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_5)\n"
"	dst->radiancePerPixelNormalized[5].c[0] *= k;\n"
"	dst->radiancePerPixelNormalized[5].c[1] *= k;\n"
"	dst->radiancePerPixelNormalized[5].c[2] *= k;\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_6)\n"
"	dst->radiancePerPixelNormalized[6].c[0] *= k;\n"
"	dst->radiancePerPixelNormalized[6].c[1] *= k;\n"
"	dst->radiancePerPixelNormalized[6].c[2] *= k;\n"
"#endif\n"
"#if defined(PARAM_FILM_RADIANCE_GROUP_7)\n"
"	dst->radiancePerPixelNormalized[7].c[0] *= k;\n"
"	dst->radiancePerPixelNormalized[7].c[1] *= k;\n"
"	dst->radiancePerPixelNormalized[7].c[2] *= k;\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_ALPHA)\n"
"	dst->alpha *= k;\n"
"#endif\n"
"\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_DIRECT_DIFFUSE)\n"
"	dst->directDiffuse.c[0] *= k;\n"
"	dst->directDiffuse.c[1] *= k;\n"
"	dst->directDiffuse.c[2] *= k;\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_DIRECT_GLOSSY)\n"
"	dst->directGlossy.c[0] *= k;\n"
"	dst->directGlossy.c[1] *= k;\n"
"	dst->directGlossy.c[2] *= k;\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_EMISSION)\n"
"	dst->emission.c[0] *= k;\n"
"	dst->emission.c[1] *= k;\n"
"	dst->emission.c[2] *= k;\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_INDIRECT_DIFFUSE)\n"
"	dst->indirectDiffuse.c[0] *= k;\n"
"	dst->indirectDiffuse.c[1] *= k;\n"
"	dst->indirectDiffuse.c[2] *= k;\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_INDIRECT_GLOSSY)\n"
"	dst->indirectGlossy.c[0] *= k;\n"
"	dst->indirectGlossy.c[1] *= k;\n"
"	dst->indirectGlossy.c[2] *= k;\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_INDIRECT_SPECULAR)\n"
"	dst->indirectSpecular.c[0] *= k;\n"
"	dst->indirectSpecular.c[1] *= k;\n"
"	dst->indirectSpecular.c[2] *= k;\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_DIRECT_SHADOW_MASK)\n"
"	dst->directShadowMask *= k;\n"
"#endif\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_INDIRECT_SHADOW_MASK)\n"
"	dst->indirectShadowMask *= k;\n"
"#endif\n"
"}\n"
"\n"
"void SampleGrid(Seed *seed, const uint size,\n"
"		const uint ix, const uint iy, float *u0, float *u1) {\n"
"	*u0 = Rnd_FloatValue(seed);\n"
"	*u1 = Rnd_FloatValue(seed);\n"
"\n"
"	if (size > 1) {\n"
"		const float idim = 1.f / size;\n"
"		*u0 = (ix + *u0) * idim;\n"
"		*u1 = (iy + *u1) * idim;\n"
"	}\n"
"}\n"
"\n"
"typedef struct {\n"
"	uint depth, diffuseDepth, glossyDepth, specularDepth;\n"
"} PathDepthInfo;\n"
"\n"
"void PathDepthInfo_Init(PathDepthInfo *depthInfo, const uint val) {\n"
"	depthInfo->depth = val;\n"
"	depthInfo->diffuseDepth = val;\n"
"	depthInfo->glossyDepth = val;\n"
"	depthInfo->specularDepth = val;\n"
"}\n"
"\n"
"void PathDepthInfo_IncDepths(PathDepthInfo *depthInfo, const BSDFEvent event) {\n"
"	++(depthInfo->depth);\n"
"	if (event & DIFFUSE)\n"
"		++(depthInfo->diffuseDepth);\n"
"	if (event & GLOSSY)\n"
"		++(depthInfo->glossyDepth);\n"
"	if (event & SPECULAR)\n"
"		++(depthInfo->specularDepth);\n"
"}\n"
"\n"
"bool PathDepthInfo_CheckDepths(PathDepthInfo *depthInfo) {\n"
"	return ((depthInfo->depth <= PARAM_DEPTH_MAX) &&\n"
"			(depthInfo->diffuseDepth <= PARAM_DEPTH_DIFFUSE_MAX) &&\n"
"			(depthInfo->glossyDepth <= PARAM_DEPTH_GLOSSY_MAX) &&\n"
"			(depthInfo->specularDepth <= PARAM_DEPTH_SPECULAR_MAX));\n"
"}\n"
"\n"
"//------------------------------------------------------------------------------\n"
"\n"
"void GenerateCameraRay(\n"
"		Seed *seed,\n"
"		__global GPUTask *task,\n"
"		__global SampleResult *sampleResult,\n"
"		__global Camera *camera,\n"
"		__global float *pixelFilterDistribution,\n"
"		const uint sampleX, const uint sampleY, const int sampleIndex,\n"
"		const uint tileStartX, const uint tileStartY, \n"
"		const uint engineFilmWidth, const uint engineFilmHeight,\n"
"		Ray *ray) {\n"
"	//if (get_global_id(0) == 0)\n"
"	//	printf(\"tileSampleIndex: %d (%d, %d)\\n\", sampleIndex, sampleIndex % PARAM_AA_SAMPLES, sampleIndex / PARAM_AA_SAMPLES);\n"
"\n"
"	float u0, u1;\n"
"	SampleGrid(seed, PARAM_AA_SAMPLES,\n"
"			sampleIndex % PARAM_AA_SAMPLES, sampleIndex / PARAM_AA_SAMPLES,\n"
"			&u0, &u1);\n"
"\n"
"	float2 xy;\n"
"	float distPdf;\n"
"	Distribution2D_SampleContinuous(pixelFilterDistribution, u0, u1, &xy, &distPdf);\n"
"\n"
"	const float filmX = sampleX + .5f + (xy.x - .5f) * PARAM_IMAGE_FILTER_WIDTH_X;\n"
"	const float filmY = sampleY + .5f + (xy.y - .5f) * PARAM_IMAGE_FILTER_WIDTH_Y;\n"
"	sampleResult->filmX = filmX;\n"
"	sampleResult->filmY = filmY;\n"
"\n"
"#if defined(PARAM_CAMERA_HAS_DOF)\n"
"	const float dofSampleX = Rnd_FloatValue(seed);\n"
"	const float dofSampleY = Rnd_FloatValue(seed);\n"
"#endif\n"
"\n"
"	Camera_GenerateRay(camera, engineFilmWidth, engineFilmHeight, ray, tileStartX + filmX, tileStartY + filmY\n"
"#if defined(PARAM_CAMERA_HAS_DOF)\n"
"			, dofSampleX, dofSampleY\n"
"#endif\n"
"			);	\n"
"}\n"
"\n"
"#if defined(PARAM_HAS_ENVLIGHTS)\n"
"void DirectHitInfiniteLight(\n"
"		const bool firstPathVertex,\n"
"		const BSDFEvent lastBSDFEvent,\n"
"		const BSDFEvent pathBSDFEvent,\n"
"		__global const Spectrum *pathThroughput,\n"
"		const float3 eyeDir, const float lastPdfW,\n"
"		__global SampleResult *sampleResult\n"
"		LIGHTS_PARAM_DECL) {\n"
"	const float3 throughput = VLOAD3F(&pathThroughput->c[0]);\n"
"\n"
"	for (uint i = 0; i < envLightCount; ++i) {\n"
"		__global LightSource *light = &lights[envLightIndices[i]];\n"
"\n"
"		if (firstPathVertex || (light->visibility & (pathBSDFEvent & (DIFFUSE | GLOSSY | SPECULAR)))) {\n"
"			float directPdfW;\n"
"			const float3 lightRadiance = EnvLight_GetRadiance(light, eyeDir, &directPdfW\n"
"					LIGHTS_PARAM);\n"
"\n"
"			if (!Spectrum_IsBlack(lightRadiance)) {\n"
"				// MIS between BSDF sampling and direct light sampling\n"
"				const float lightPickProb = Scene_SampleAllLightPdf(lightsDistribution, light->lightSceneIndex);\n"
"				const float weight = ((lastBSDFEvent & SPECULAR) ? 1.f : PowerHeuristic(lastPdfW, directPdfW * lightPickProb));\n"
"				const float3 radiance = weight * throughput * lightRadiance;\n"
"\n"
"				const uint lightID = min(light->lightID, PARAM_FILM_RADIANCE_GROUP_COUNT - 1u);\n"
"				AddEmission(firstPathVertex, pathBSDFEvent, lightID, sampleResult, radiance);\n"
"			}\n"
"		}\n"
"	}\n"
"}\n"
"#endif\n"
"\n"
"#if (PARAM_TRIANGLE_LIGHT_COUNT > 0)\n"
"void DirectHitFiniteLight(\n"
"		const bool firstPathVertex,\n"
"		const BSDFEvent lastBSDFEvent,\n"
"		const BSDFEvent pathBSDFEvent,\n"
"		__global const Spectrum *pathThroughput, const float distance, __global BSDF *bsdf,\n"
"		const float lastPdfW, __global SampleResult *sampleResult\n"
"		LIGHTS_PARAM_DECL) {\n"
"	if (firstPathVertex || (lights[bsdf->triangleLightSourceIndex].visibility & (pathBSDFEvent & (DIFFUSE | GLOSSY | SPECULAR)))) {\n"
"		float directPdfA;\n"
"		const float3 emittedRadiance = BSDF_GetEmittedRadiance(bsdf, &directPdfA\n"
"				LIGHTS_PARAM);\n"
"\n"
"		if (!Spectrum_IsBlack(emittedRadiance)) {\n"
"			// Add emitted radiance\n"
"			float weight = 1.f;\n"
"			if (!(lastBSDFEvent & SPECULAR)) {\n"
"				const float lightPickProb = Scene_SampleAllLightPdf(lightsDistribution,\n"
"						lights[bsdf->triangleLightSourceIndex].lightSceneIndex);\n"
"				const float directPdfW = PdfAtoW(directPdfA, distance,\n"
"					fabs(dot(VLOAD3F(&bsdf->hitPoint.fixedDir.x), VLOAD3F(&bsdf->hitPoint.shadeN.x))));\n"
"\n"
"				// MIS between BSDF sampling and direct light sampling\n"
"				weight = PowerHeuristic(lastPdfW, directPdfW * lightPickProb);\n"
"			}\n"
"			const float3 lightRadiance = weight * VLOAD3F(&pathThroughput->c[0]) * emittedRadiance;\n"
"\n"
"			const uint lightID =  min(BSDF_GetLightID(bsdf\n"
"					MATERIALS_PARAM), PARAM_FILM_RADIANCE_GROUP_COUNT - 1u);\n"
"			AddEmission(firstPathVertex, pathBSDFEvent, lightID, sampleResult, lightRadiance);\n"
"		}\n"
"	}\n"
"}\n"
"#endif\n"
"\n"
"bool DirectLightSampling(\n"
"		__global LightSource *light,\n"
"		const float lightPickPdf,\n"
"#if defined(PARAM_HAS_INFINITELIGHTS)\n"
"		const float worldCenterX,\n"
"		const float worldCenterY,\n"
"		const float worldCenterZ,\n"
"		const float worldRadius,\n"
"#endif\n"
"#if (PARAM_TRIANGLE_LIGHT_COUNT > 0)\n"
"		__global HitPoint *tmpHitPoint,\n"
"#endif\n"
"		const float u0, const float u1, const float u2,\n"
"#if defined(PARAM_HAS_PASSTHROUGH)\n"
"		const float u3,\n"
"#endif\n"
"		__global const Spectrum *pathThroughput, __global BSDF *bsdf,\n"
"		Ray *shadowRay, __global Spectrum *radiance, __global uint *ID\n"
"		LIGHTS_PARAM_DECL) {\n"
"	float3 lightRayDir;\n"
"	float distance, directPdfW;\n"
"	const float3 lightRadiance = Light_Illuminate(\n"
"			light,\n"
"			VLOAD3F(&bsdf->hitPoint.p.x),\n"
"			u0, u1, u2,\n"
"#if defined(PARAM_HAS_PASSTHROUGH)\n"
"			u3,\n"
"#endif\n"
"#if defined(PARAM_HAS_INFINITELIGHTS)\n"
"			worldCenterX, worldCenterY, worldCenterZ, worldRadius,\n"
"#endif\n"
"#if (PARAM_TRIANGLE_LIGHT_COUNT > 0)\n"
"			tmpHitPoint,\n"
"#endif		\n"
"			&lightRayDir, &distance, &directPdfW\n"
"			LIGHTS_PARAM);\n"
"\n"
"	// Setup the shadow ray\n"
"	const float cosThetaToLight = fabs(dot(lightRayDir, VLOAD3F(&bsdf->hitPoint.shadeN.x)));\n"
"	if (((Spectrum_Y(lightRadiance) * cosThetaToLight / directPdfW) > PARAM_LOW_LIGHT_THREASHOLD) &&\n"
"			(distance > PARAM_NEAR_START_LIGHT)) {\n"
"		BSDFEvent event;\n"
"		float bsdfPdfW;\n"
"		const float3 bsdfEval = BSDF_Evaluate(bsdf,\n"
"				lightRayDir, &event, &bsdfPdfW\n"
"				MATERIALS_PARAM);\n"
"\n"
"		if (!Spectrum_IsBlack(bsdfEval)) {\n"
"			const float directLightSamplingPdfW = directPdfW * lightPickPdf;\n"
"			const float factor = 1.f / directLightSamplingPdfW;\n"
"\n"
"			// MIS between direct light sampling and BSDF sampling\n"
"			const float weight = Light_IsEnvOrIntersectable(light) ?\n"
"				PowerHeuristic(directLightSamplingPdfW, bsdfPdfW) : 1.f;\n"
"\n"
"			VSTORE3F((weight * factor) * VLOAD3F(&pathThroughput->c[0]) * bsdfEval * lightRadiance, &radiance->c[0]);\n"
"			*ID = min(light->lightID, PARAM_FILM_RADIANCE_GROUP_COUNT - 1u);\n"
"\n"
"			// Setup the shadow ray\n"
"			const float3 hitPoint = VLOAD3F(&bsdf->hitPoint.p.x);\n"
"			const float epsilon = fmax(MachineEpsilon_E_Float3(hitPoint), MachineEpsilon_E(distance));\n"
"\n"
"			Ray_Init4_Private(shadowRay, hitPoint, lightRayDir,\n"
"				epsilon,\n"
"				distance - epsilon);\n"
"\n"
"			return true;\n"
"		}\n"
"	}\n"
"\n"
"	return false;\n"
"}\n"
"\n"
"bool DirectLightSampling_ONE(\n"
"		const bool firstPathVertex,\n"
"		Seed *seed,\n"
"#if defined(PARAM_HAS_INFINITELIGHTS)\n"
"		const float worldCenterX,\n"
"		const float worldCenterY,\n"
"		const float worldCenterZ,\n"
"		const float worldRadius,\n"
"#endif\n"
"#if (PARAM_TRIANGLE_LIGHT_COUNT > 0)\n"
"		__global HitPoint *tmpHitPoint,\n"
"#endif\n"
"		__global const Spectrum *pathThroughput, __global BSDF *bsdf,\n"
"		__global SampleResult *sampleResult,\n"
"		Ray *shadowRay, __global Spectrum *radiance, __global uint *ID\n"
"		LIGHTS_PARAM_DECL) {\n"
"	// Pick a light source to sample\n"
"	float lightPickPdf;\n"
"	const uint lightIndex = Scene_SampleAllLights(lightsDistribution, Rnd_FloatValue(seed), &lightPickPdf);\n"
"\n"
"	const bool illuminated = DirectLightSampling(\n"
"		&lights[lightIndex],\n"
"		lightPickPdf,\n"
"#if defined(PARAM_HAS_INFINITELIGHTS)\n"
"		worldCenterX,\n"
"		worldCenterY,\n"
"		worldCenterZ,\n"
"		worldRadius,\n"
"#endif\n"
"#if (PARAM_TRIANGLE_LIGHT_COUNT > 0)\n"
"		tmpHitPoint,\n"
"#endif\n"
"		Rnd_FloatValue(seed), Rnd_FloatValue(seed), Rnd_FloatValue(seed),\n"
"#if defined(PARAM_HAS_PASSTHROUGH)\n"
"		Rnd_FloatValue(seed),\n"
"#endif\n"
"		pathThroughput, bsdf,\n"
"		shadowRay, radiance, ID\n"
"		LIGHTS_PARAM);\n"
"\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_DIRECT_SHADOW_MASK)\n"
"	if (firstPathVertex && !illuminated)\n"
"		sampleResult->directShadowMask += 1.f;\n"
"#endif\n"
"\n"
"	return illuminated;\n"
"}\n"
"\n"
"#if defined(PARAM_DIRECT_LIGHT_ALL_STRATEGY)\n"
"bool DirectLightSampling_ALL(\n"
"		__global uint *currentLightIndex,\n"
"		__global uint *currentLightSampleIndex,\n"
"		Seed *seed,\n"
"#if defined(PARAM_HAS_INFINITELIGHTS)\n"
"		const float worldCenterX,\n"
"		const float worldCenterY,\n"
"		const float worldCenterZ,\n"
"		const float worldRadius,\n"
"#endif\n"
"#if (PARAM_TRIANGLE_LIGHT_COUNT > 0)\n"
"		__global HitPoint *tmpHitPoint,\n"
"#endif\n"
"		__global const Spectrum *pathThroughput, __global BSDF *bsdf,\n"
"		__global SampleResult *sampleResult,\n"
"		Ray *shadowRay, __global Spectrum *radiance, __global uint *ID\n"
"		LIGHTS_PARAM_DECL) {\n"
"	for (; *currentLightIndex < PARAM_LIGHT_COUNT; ++(*currentLightIndex)) {\n"
"		const int lightSamplesCount = lights[*currentLightIndex].samples;\n"
"		const uint sampleCount = (lightSamplesCount < 0) ? PARAM_DIRECT_LIGHT_SAMPLES : (uint)lightSamplesCount;\n"
"		const uint sampleCount2 = sampleCount * sampleCount;\n"
"\n"
"		for (; *currentLightSampleIndex < sampleCount2; ++(*currentLightSampleIndex)) {\n"
"			//if (get_global_id(0) == 0)\n"
"			//	printf(\"DirectLightSampling_ALL() ==> currentLightIndex: %d  currentLightSampleIndex: %d\\n\", *currentLightIndex, *currentLightSampleIndex);\n"
"\n"
"			float u0, u1;\n"
"			SampleGrid(seed, sampleCount,\n"
"					(*currentLightSampleIndex) % sampleCount, (*currentLightSampleIndex) / sampleCount,\n"
"					&u0, &u1);\n"
"\n"
"			const float scaleFactor = 1.f / sampleCount2;\n"
"			const bool illuminated = DirectLightSampling(\n"
"				&lights[*currentLightIndex],\n"
"				1.f,\n"
"#if defined(PARAM_HAS_INFINITELIGHTS)\n"
"				worldCenterX,\n"
"				worldCenterY,\n"
"				worldCenterZ,\n"
"				worldRadius,\n"
"#endif\n"
"#if (PARAM_TRIANGLE_LIGHT_COUNT > 0)\n"
"				tmpHitPoint,\n"
"#endif\n"
"				u0, u1, Rnd_FloatValue(seed),\n"
"#if defined(PARAM_HAS_PASSTHROUGH)\n"
"				Rnd_FloatValue(seed),\n"
"#endif\n"
"				pathThroughput, bsdf,\n"
"				shadowRay, radiance, ID\n"
"				LIGHTS_PARAM);\n"
"\n"
"			if (illuminated) {\n"
"				VSTORE3F(scaleFactor * VLOAD3F(&radiance->c[0]), &radiance->c[0]);\n"
"				return true;\n"
"			}\n"
"#if defined(PARAM_FILM_CHANNELS_HAS_DIRECT_SHADOW_MASK)\n"
"			else {\n"
"				sampleResult->directShadowMask += scaleFactor;\n"
"			}\n"
"#endif\n"
"		}\n"
"\n"
"		*currentLightSampleIndex = 0;\n"
"	}\n"
"\n"
"	return false;\n"
"}\n"
"#endif\n"
; } }

#include <string>
namespace luxrays { namespace ocl {
std::string KernelSource_atomic_funcs = 
"#line 2 \"atomic_funcs.cl\"\n"
"\n"
"/***************************************************************************\n"
" * Copyright 1998-2018 by authors (see AUTHORS.txt)                        *\n"
" *                                                                         *\n"
" *   This file is part of LuxCoreRender.                                   *\n"
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
"void AtomicAdd(__global float *val, const float delta) {\n"
"	union {\n"
"		float f;\n"
"		uint i;\n"
"	} oldVal;\n"
"	union {\n"
"		float f;\n"
"		uint i;\n"
"	} newVal;\n"
"\n"
"	do {\n"
"		oldVal.f = *val;\n"
"		newVal.f = oldVal.f + delta;\n"
"	} while (atomic_cmpxchg((__global uint *)val, oldVal.i, newVal.i) != oldVal.i);\n"
"}\n"
"\n"
"bool AtomicMin(__global float *val, const float val2) {\n"
"	union {\n"
"		float f;\n"
"		uint i;\n"
"	} oldVal;\n"
"	union {\n"
"		float f;\n"
"		uint i;\n"
"	} newVal;\n"
"\n"
"	do {\n"
"		oldVal.f = *val;\n"
"		if (val2 >= oldVal.f)\n"
"			return false;\n"
"		else\n"
"			newVal.f = val2;\n"
"	} while (atomic_cmpxchg((__global uint *)val, oldVal.i, newVal.i) != oldVal.i);\n"
"\n"
"	return true;\n"
"}\n"
"\n"
"uint AtomicAddMod(__global uint *val, const uint delta, const uint mod) {\n"
"	uint oldVal, newVal;\n"
"\n"
"	do {\n"
"		oldVal = *val;\n"
"		newVal = (oldVal + delta) % mod;\n"
"	} while (atomic_cmpxchg((__global uint *)val, oldVal, newVal) != oldVal);\n"
"\n"
"	return oldVal;\n"
"}\n"
; } }
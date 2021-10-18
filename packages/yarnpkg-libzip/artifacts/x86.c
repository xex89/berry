/*
 * x86 feature check
 *
 * Copyright (C) 2013 Intel Corporation. All rights reserved.
 * Author:
 *  Jim Kukunas
 *
 * For conditions of distribution and use, see copyright notice in zlib.h
 */

#include "../../zutil.h"

Z_INTERNAL int x86_cpu_has_avx2 = 1;
Z_INTERNAL int x86_cpu_has_sse2 = 1;
Z_INTERNAL int x86_cpu_has_ssse3 = 1;
Z_INTERNAL int x86_cpu_has_sse42 = 1;
Z_INTERNAL int x86_cpu_has_pclmulqdq = 0;
Z_INTERNAL int x86_cpu_has_tzcnt = 0;

void Z_INTERNAL x86_check_features(void) {}

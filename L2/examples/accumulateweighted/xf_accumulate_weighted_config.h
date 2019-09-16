/***************************************************************************
Copyright (c) 2018, Xilinx, Inc.
All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors
may be used to endorse or promote products derived from this software
without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CXFSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

***************************************************************************/
#ifndef _XF_ACCUMULATE_CONFIG_H_
#define _XF_ACCUMULATE_CONFIG_H_

#include "hls_stream.h"
#include <ap_int.h>
#include "xf_config_params.h"
#include "common/xf_common.h"
#include "common/xf_utility.h"
#include "imgproc/xf_accumulate_weighted.hpp"

#define HEIGHT 2160
#define WIDTH 3840

// Resolve optimization type:
#if NO
#define NPC1 XF_NPPC1
#if GRAY
#define PTR_IN_WIDTH 8
#define PTR_OUT_WIDTH 16
#else
#define PTR_IN_WIDTH 32
#define PTR_OUT_WIDTH 64
#endif
#endif
#if RO
#define NPC1 XF_NPPC8
#if GRAY
#define PTR_IN_WIDTH 64
#define PTR_OUT_WIDTH 128
#else
#define PTR_IN_WIDTH 256
#define PTR_OUT_WIDTH 512
#endif
#endif

// Resolve pixel depth:
#if GRAY
#define IN_TYPE XF_8UC1
#define OUT_TYPE XF_16UC1
#else
#define IN_TYPE XF_8UC3
#define OUT_TYPE XF_16UC3
#endif

#endif //_XF_ACCUMULATE_CONFIG_H_

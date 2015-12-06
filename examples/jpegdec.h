// Copyright 2012 Google Inc. All Rights Reserved.
//
// Use of this source code is governed by a BSD-style license
// that can be found in the COPYING file in the root of the source
// tree. An additional intellectual property rights grant can be found
// in the file PATENTS. All contributing project authors may
// be found in the AUTHORS file in the root of the source tree.
// -----------------------------------------------------------------------------
//
// JPEG decode.

#ifndef WEBP_EXAMPLES_JPEGDEC_H_
#define WEBP_EXAMPLES_JPEGDEC_H_

#include <stdio.h>
#include "webp/types.h"

#ifdef __cplusplus
extern "C" {
#endif

struct Metadata;
struct WebPPicture;

// Reads a JPEG from 'filename', returning the decoded output in 'pic'.
// If 'filename' is equal '-', input is read from stdin.
// The output is RGB or YUV depending on pic->use_argb value.
// Returns true on success.
int ReadJPEG(const char* const filename, struct WebPPicture* const pic,
             struct Metadata* const metadata);

#ifdef __cplusplus
}    // extern "C"
#endif

#endif  // WEBP_EXAMPLES_JPEGDEC_H_

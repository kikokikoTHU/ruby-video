//
// Copyright (c) 2015 by wangzhuqi1993@gmail.com. All Rights Reserved.
//

#ifndef _RUBY_VIDEO_H_
#define _RUBY_VIDEO_H_

#ifndef FFMPEG_LIB
#define FFMPEG_LIB
#include <libavformat/avformat.h>
#include <libavutil/avutil.h>
#include <libavcodec/avcodec.h>
#include <libswscale/swscale.h>
#include <libswresample/swresample.h>
#endif

#ifdef RSHIFT
#undef RSHIFT
#endif

#include "ruby.h"

// module
RUBY_EXTERN VALUE rb_mRubyVideo;

// class
RUBY_EXTERN VALUE rb_cRVFormatContext;
RUBY_EXTERN VALUE rb_cRVStream;
RUBY_EXTERN VALUE rb_cRVFrame;

// init function
RUBY_EXTERN void init_mRubyVideo();
RUBY_EXTERN void init_cRVFormatContext();
RUBY_EXTERN void init_cRVStream();
RUBY_EXTERN void init_cRVFrame();

#endif

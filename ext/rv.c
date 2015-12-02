//
// Copyright (c) 2015 by wangzhuqi1993@gmail.com. All Rights Reserved.
//

#include "rv.h"

VALUE rb_mRubyVideo;

void init_RubyVideo() {
  // register all codec ID
  av_register_all();

  rb_mRubyVideo = rb_define_module("RubyVideo");

  init_
}

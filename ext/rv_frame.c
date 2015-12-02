//
// Copyright (c) 2015 by wangzhuqi1993@gmail.com. All Rights Reserved.
//

#include "rv.h"

VALUE rb_cRVFrame;

static VALUE
rvframe_alloc(VALUE klass) {
    AVFrame *frame = av_frame_alloc();
    if (frame)
      return Data_Wrap_Struct(klass, 0, rvframe_free, frame);

    return Qnil;
}

static void
rvframe_free(AVFrame *frame) {
    if (frame)
        av_frame_free(&frame);
}

static VALUE
rvframe_initialize(VALUE self, VALUE width, VALUE height) {
    rb_iv_set(self, "@width", width);
    rb_iv_set(self, "@height", height);

    return self;
}

void
init_RVFrame() {
    rb_cRVFrame = rb_define_class_under(rb_mRubyVideo, "RVFrame", rb_cObject);

    rb_define_alloc_func(rb_cRVFrame, rvframe_alloc);
    re_define_method(rb_cRVFrame, "initialize", rvframe_initialize, 2);

    // rb_define_method();
}

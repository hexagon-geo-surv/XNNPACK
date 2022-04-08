// Copyright 2022 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: src/operator-strings.yaml
//   Generator: tools/generate-enum.py

#pragma once

enum xnn_operator_type {
  xnn_operator_type_invalid = 0,
  xnn_operator_type_abs_nc_f32,
  xnn_operator_type_add_nd_f16,
  xnn_operator_type_add_nd_f32,
  xnn_operator_type_add_nd_qs8,
  xnn_operator_type_add_nd_qu8,
  xnn_operator_type_argmax_pooling_nhwc_f32,
  xnn_operator_type_average_pooling_nhwc_f32,
  xnn_operator_type_average_pooling_nhwc_qu8,
  xnn_operator_type_bankers_rounding_nc_f32,
  xnn_operator_type_ceiling_nc_f32,
  xnn_operator_type_channel_shuffle_nc_x8,
  xnn_operator_type_channel_shuffle_nc_x32,
  xnn_operator_type_clamp_nc_f16,
  xnn_operator_type_clamp_nc_f32,
  xnn_operator_type_clamp_nc_s8,
  xnn_operator_type_clamp_nc_u8,
  xnn_operator_type_constant_pad_nd_x8,
  xnn_operator_type_constant_pad_nd_x16,
  xnn_operator_type_constant_pad_nd_x32,
  xnn_operator_type_convert_nc_f16_f32,
  xnn_operator_type_convert_nc_f32_f16,
  xnn_operator_type_convert_nc_f32_qs8,
  xnn_operator_type_convert_nc_f32_qu8,
  xnn_operator_type_convert_nc_qs8_f32,
  xnn_operator_type_convert_nc_qu8_f32,
  xnn_operator_type_convolution_nhwc_f16,
  xnn_operator_type_convolution_nhwc_f32,
  xnn_operator_type_convolution_nhwc_qc8,
  xnn_operator_type_convolution_nhwc_qs8,
  xnn_operator_type_convolution_nhwc_qu8,
  xnn_operator_type_convolution_nchw_f32,
  xnn_operator_type_copy_nc_x8,
  xnn_operator_type_copy_nc_x16,
  xnn_operator_type_copy_nc_x32,
  xnn_operator_type_deconvolution_nhwc_f16,
  xnn_operator_type_deconvolution_nhwc_f32,
  xnn_operator_type_deconvolution_nhwc_qs8,
  xnn_operator_type_deconvolution_nhwc_qu8,
  xnn_operator_type_depth_to_space_nchw2nhwc_x32,
  xnn_operator_type_depth_to_space_nhwc_x8,
  xnn_operator_type_depth_to_space_nhwc_x16,
  xnn_operator_type_depth_to_space_nhwc_x32,
  xnn_operator_type_divide_nd_f32,
  xnn_operator_type_elu_nc_f32,
  xnn_operator_type_elu_nc_qs8,
  xnn_operator_type_floor_nc_f32,
  xnn_operator_type_fully_connected_nc_f16,
  xnn_operator_type_fully_connected_nc_f32,
  xnn_operator_type_fully_connected_nc_qs8,
  xnn_operator_type_fully_connected_nc_qu8,
  xnn_operator_type_global_average_pooling_nwc_f16,
  xnn_operator_type_global_average_pooling_nwc_f32,
  xnn_operator_type_global_average_pooling_nwc_qs8,
  xnn_operator_type_global_average_pooling_nwc_qu8,
  xnn_operator_type_global_average_pooling_ncw_f32,
  xnn_operator_type_hardswish_nc_f16,
  xnn_operator_type_hardswish_nc_f32,
  xnn_operator_type_leaky_relu_nc_f16,
  xnn_operator_type_leaky_relu_nc_f32,
  xnn_operator_type_leaky_relu_nc_qu8,
  xnn_operator_type_max_pooling_nhwc_f16,
  xnn_operator_type_max_pooling_nhwc_f32,
  xnn_operator_type_max_pooling_nhwc_s8,
  xnn_operator_type_max_pooling_nhwc_u8,
  xnn_operator_type_maximum_nd_f32,
  xnn_operator_type_minimum_nd_f32,
  xnn_operator_type_multiply_nd_f16,
  xnn_operator_type_multiply_nd_f32,
  xnn_operator_type_multiply_nd_qs8,
  xnn_operator_type_multiply_nd_qu8,
  xnn_operator_type_negate_nc_f32,
  xnn_operator_type_prelu_nc_f16,
  xnn_operator_type_prelu_nc_f32,
  xnn_operator_type_resize_bilinear_nhwc_f16,
  xnn_operator_type_resize_bilinear_nhwc_f32,
  xnn_operator_type_resize_bilinear_nhwc_s8,
  xnn_operator_type_resize_bilinear_nhwc_u8,
  xnn_operator_type_resize_bilinear_nchw_f32,
  xnn_operator_type_sigmoid_nc_f16,
  xnn_operator_type_sigmoid_nc_f32,
  xnn_operator_type_sigmoid_nc_qs8,
  xnn_operator_type_sigmoid_nc_qu8,
  xnn_operator_type_softmax_nc_f16,
  xnn_operator_type_softmax_nc_f32,
  xnn_operator_type_softmax_nc_qu8,
  xnn_operator_type_square_nc_f32,
  xnn_operator_type_square_root_nc_f32,
  xnn_operator_type_squared_difference_nd_f32,
  xnn_operator_type_subtract_nd_f32,
  xnn_operator_type_subtract_nd_qs8,
  xnn_operator_type_subtract_nd_qu8,
  xnn_operator_type_tanh_nc_qs8,
  xnn_operator_type_tanh_nc_qu8,
  xnn_operator_type_truncation_nc_f32,
  xnn_operator_type_transpose_nd_x16,
  xnn_operator_type_transpose_nd_x32,
  xnn_operator_type_unpooling_nhwc_x32,
};
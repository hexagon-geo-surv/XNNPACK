// Auto-generated file. Do not edit!
//   Template: src/qs8-vaddc/avx2-mul32-ld64.c.in
//   Generator: tools/xngen
//
// Copyright 2020 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <immintrin.h>

#include <xnnpack/intrinsics-polyfill.h>
#include <xnnpack/vadd.h>


void xnn_qu8_vaddc_minmax_ukernel__avx2_mul32_ld64_x8(
    size_t n,
    const uint8_t* input_a,
    const uint8_t* input_b,
    uint8_t* output,
    const union xnn_qu8_add_minmax_params params[restrict XNN_MIN_ELEMENTS(1)]) XNN_DISABLE_TSAN XNN_DISABLE_MSAN
{
  const __m256i va_multiplier = _mm256_load_si256((const __m256i*) params->avx2.a_multiplier);
  const __m256i vrounding = _mm256_load_si256((const __m256i*) params->avx2.rounding);
  const __m128i vshift = _mm_loadu_si32(params->avx2.shift);
  const __m128i voutput_zero_point = _mm_load_si128((const __m128i*) params->avx2.output_zero_point);
  const __m128i voutput_min = _mm_load_si128((const __m128i*) params->avx2.output_min);
  const __m128i voutput_max = _mm_load_si128((const __m128i*) params->avx2.output_max);

  __m256i vbias = _mm256_add_epi32(
    _mm256_broadcastd_epi32(_mm_cvtsi32_si128(params->avx2.b_multiplier[0] * (int32_t) *input_b)),
    _mm256_load_si256((const __m256i*) params->avx2.bias));
  for (; n >= 8 * sizeof(uint8_t); n -= 8 * sizeof(uint8_t)) {
    const __m256i va01234567 = _mm256_cvtepu8_epi32(_mm_loadl_epi64((const __m128i*) input_a));
    input_a += 8;

    __m256i vacc01234567 = _mm256_add_epi32(vbias, _mm256_mullo_epi32(va01234567, va_multiplier));

    vacc01234567 = _mm256_sra_epi32(_mm256_add_epi32(vacc01234567, vrounding), vshift);

    __m128i vout01234567 = _mm_adds_epi16(_mm_packs_epi32(_mm256_castsi256_si128(vacc01234567), _mm256_extracti128_si256(vacc01234567, 1)), voutput_zero_point);

    __m128i vout0123456701234567 = _mm_packus_epi16(vout01234567, vout01234567);

    vout0123456701234567 = _mm_max_epu8(vout0123456701234567, voutput_min);

    vout0123456701234567 = _mm_min_epu8(vout0123456701234567, voutput_max);

    _mm_storel_epi64((__m128i*) output, vout0123456701234567);
    output += 8;
  }
  if XNN_UNLIKELY(n != 0) {
    {
      const __m256i va01234567 = _mm256_cvtepu8_epi32(_mm_loadl_epi64((const __m128i*) input_a));

      __m256i vacc01234567 = _mm256_add_epi32(vbias, _mm256_mullo_epi32(va01234567, va_multiplier));

      vacc01234567 = _mm256_sra_epi32(_mm256_add_epi32(vacc01234567, vrounding), vshift);

      __m128i vout01234567 = _mm_adds_epi16(_mm_packs_epi32(_mm256_castsi256_si128(vacc01234567), _mm256_extracti128_si256(vacc01234567, 1)), voutput_zero_point);
      __m128i vout0123456701234567 = _mm_packus_epi16(vout01234567, vout01234567);
      vout0123456701234567 = _mm_max_epu8(vout0123456701234567, voutput_min);
      vout0123456701234567 = _mm_min_epu8(vout0123456701234567, voutput_max);

      if (n & (4 * sizeof(uint8_t))) {
        *((uint32_t*) output) = (uint32_t) _mm_cvtsi128_si32(vout0123456701234567);
        vout0123456701234567 = _mm_srli_epi64(vout0123456701234567, 32);
        output += 4;
      }
      if (n & (2 * sizeof(uint8_t))) {
        *((uint16_t*) output) = (uint16_t) _mm_extract_epi16(vout0123456701234567, 0);
        vout0123456701234567 = _mm_srli_epi32(vout0123456701234567, 16);
        output += 2;
      }
      if (n & (1 * sizeof(uint8_t))) {
        *output = (uint8_t) _mm_extract_epi8(vout0123456701234567, 0);
      }
    }
  }
}
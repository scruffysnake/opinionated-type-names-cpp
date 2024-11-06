#pragma once
#include <cstdint>
#include <stdfloat>

// INTERGERS
typedef int8_t  i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

// "FAST" INTERGERS
typedef int_fast8_t  f_i8;
typedef int_fast16_t f_i16;
typedef int_fast32_t f_i32;
typedef int_fast64_t f_i64;

typedef uint_fast8_t  f_u8;
typedef uint_fast16_t f_u16;
typedef uint_fast32_t f_u32;
typedef uint_fast64_t f_u64;

// "SMALL" INTERGERS
typedef int_least8_t  s_i8;
typedef int_least16_t s_i16;
typedef int_least32_t s_i32;
typedef int_least64_t s_i64;
			 
typedef uint_least8_t  s_u8;
typedef uint_least16_t s_u16;
typedef uint_least32_t s_u32;
typedef uint_least64_t s_u64;

// ELSE INTERGERS
typedef intmax_t i_max;
typedef intptr_t i_ptr;

typedef uintmax_t u_max;
typedef uintptr_t u_ptr;

// FLOATS
#if defined(__STDCPP_FLOAT16_T__)
typedef std::float16_t  f16;
typedef std::float32_t  f32;
typedef std::float64_t  f64;
typedef std::float128_t f128;
#else
typedef float f16;
typedef double f32;
typedef long double f64;
#endif
#pragma once
#include <cstdint>

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
typedef int_fast8_t  i8_f;
typedef int_fast16_t i16_f;
typedef int_fast32_t i32_f;
typedef int_fast64_t i64_f;

typedef uint_fast8_t  u8_f;
typedef uint_fast16_t u16_f;
typedef uint_fast32_t u32_f;
typedef uint_fast64_t u64_f;

// "SMALL" INTERGERS
typedef int_least8_t  i8_s;
typedef int_least16_t i16_s;
typedef int_least32_t i32_s;
typedef int_least64_t i64_s;
			 
typedef uint_least8_t  u8_s;
typedef uint_least16_t u16_s;
typedef uint_least32_t u32_s;
typedef uint_least64_t u64_s;

// ELSE INTERGERS
typedef intmax_t i_max;
typedef intptr_t i_ptr;

typedef uintmax_t u_max;
typedef uintptr_t u_ptr;

// FLOATS
#if __cplusplus >= 202302L
    #include <stdfloat>
    typedef std::float16_t  f16;
    typedef std::float32_t  f32;
    typedef std::float64_t  f64;
    typedef std::float128_t f128;
#else
    typedef float f16;
    typedef double f32;
    typedef long double f64;
#endif
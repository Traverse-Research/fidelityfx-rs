// This file is part of the FidelityFX SDK.
// 
// Copyright (c) 2023 Advanced Micro Devices, Inc. All rights reserved.
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.


/// A define for a true value in a boolean expression.
///
/// @ingroup CPUTypes
#define FFX_TRUE (1)

/// A define for a false value in a boolean expression.
///
/// @ingroup CPUTypes
#define FFX_FALSE (0)
 
#if !defined(FFX_STATIC)
/// A define to abstract declaration of static variables and functions.
///
/// @ingroup CPUTypes
#define FFX_STATIC static
#endif // #if !defined(FFX_STATIC)

/// @defgroup CPUCore CPU Core
/// Core CPU-side defines and functions
/// 
/// @ingroup ffxHost

#ifdef __clang__
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

#ifndef _countof
#define _countof(x) (sizeof((x))/sizeof((*x)))
#endif

/// Interpret the bit layout of an IEEE-754 floating point value as an unsigned integer.
///
/// @param [in] x               A 32bit floating value.
///
/// @returns
/// An unsigned 32bit integer value containing the bit pattern of <c><i>x</i></c>.
/// 
/// @ingroup CPUCore
FFX_STATIC FfxUInt32 ffxAsUInt32(FfxFloat32 x)
{
    union
    {
        FfxFloat32 f;
        FfxUInt32  u;
    } bits;

    bits.f = x;
    return bits.u;
}

FFX_STATIC FfxFloat32 ffxDot2(FfxFloat32x2 a, FfxFloat32x2 b)
{
    return a[0] * b[0] + a[1] * b[1];
}

FFX_STATIC FfxFloat32 ffxDot3(FfxFloat32x3 a, FfxFloat32x3 b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

FFX_STATIC FfxFloat32 ffxDot4(FfxFloat32x4 a, FfxFloat32x4 b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3];
}

/// Compute the linear interopation between two values.
///
/// Implemented by calling the GLSL <c><i>mix</i></c> instrinsic function. Implements the
/// following math:
///
///     (1 - t) * x + t * y
///
/// @param [in] x               The first value to lerp between.
/// @param [in] y               The second value to lerp between.
/// @param [in] t               The value to determine how much of <c><i>x</i></c> and how much of <c><i>y</i></c>.
///
/// @returns
/// A linearly interpolated value between <c><i>x</i></c> and <c><i>y</i></c> according to <c><i>t</i></c>.
///
/// @ingroup CPUCore
FFX_STATIC FfxFloat32 ffxLerp(FfxFloat32 x, FfxFloat32 y, FfxFloat32 t)
{
    return y * t + (-x * t + x);
}

/// Compute the reciprocal of a value.
///
/// @param [in] x               The value to compute the reciprocal for.
///
/// @returns
/// The reciprocal value of <c><i>x</i></c>.
///
/// @ingroup CPUCore
FFX_STATIC FfxFloat32 ffxReciprocal(FfxFloat32 x)
{
    return 1.0f / x;
}

/// Compute the square root of a value.
///
/// @param [in] x                   The first value to compute the min of.
///
/// @returns
/// The the square root of <c><i>x</i></c>.
///
/// @ingroup CPUCore
FFX_STATIC FfxFloat32 ffxSqrt(FfxFloat32 x)
{
    return sqrt(x);
}

FFX_STATIC FfxUInt32 AShrSU1(FfxUInt32 a, FfxUInt32 b)
{
    return FfxUInt32(FfxInt32(a) >> FfxInt32(b));
}

/// Compute the factional part of a decimal value.
///
/// This function calculates <c><i>x - floor(x)</i></c>. 
///
/// @param [in] x               The value to compute the fractional part from.
///
/// @returns
/// The fractional part of <c><i>x</i></c>.
///
/// @ingroup CPUCore
FFX_STATIC FfxFloat32 ffxFract(FfxFloat32 x)
{
    return x - floor(x);
}

/// Compute the reciprocal square root of a value.
///
/// @param [in] x               The value to compute the reciprocal for.
///
/// @returns
/// The reciprocal square root value of <c><i>x</i></c>.
///
/// @ingroup CPUCore
FFX_STATIC FfxFloat32 rsqrt(FfxFloat32 x)
{
    return ffxReciprocal(ffxSqrt(x));
}

FFX_STATIC FfxFloat32 ffxMin(FfxFloat32 x, FfxFloat32 y)
{
    return x < y ? x : y;
}

FFX_STATIC FfxUInt32 ffxMin(FfxUInt32 x, FfxUInt32 y)
{
    return x < y ? x : y;
}

FFX_STATIC FfxFloat32 ffxMax(FfxFloat32 x, FfxFloat32 y)
{
    return x > y ? x : y;
}

FFX_STATIC FfxUInt32 ffxMax(FfxUInt32 x, FfxUInt32 y)
{
    return x > y ? x : y;
}

/// Clamp a value to a [0..1] range.
///
/// @param [in] x               The value to clamp to [0..1] range.
///
/// @returns
/// The clamped version of <c><i>x</i></c>.
///
/// @ingroup CPUCore
FFX_STATIC FfxFloat32 ffxSaturate(FfxFloat32 x)
{
    return ffxMin(1.0f, ffxMax(0.0f, x));
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FFX_STATIC void opAAddOneF3(FfxFloat32x3 d, FfxFloat32x3 a, FfxFloat32 b)
{
    d[0] = a[0] + b;
    d[1] = a[1] + b;
    d[2] = a[2] + b;
    return;
}

FFX_STATIC void opACpyF3(FfxFloat32x3 d, FfxFloat32x3 a)
{
    d[0] = a[0];
    d[1] = a[1];
    d[2] = a[2];
    return;
}

FFX_STATIC void opAMulF3(FfxFloat32x3 d, FfxFloat32x3 a, FfxFloat32x3 b)
{
    d[0] = a[0] * b[0];
    d[1] = a[1] * b[1];
    d[2] = a[2] * b[2];
    return;
}

FFX_STATIC void opAMulOneF3(FfxFloat32x3 d, FfxFloat32x3 a, FfxFloat32 b)
{
    d[0] = a[0] * b;
    d[1] = a[1] * b;
    d[2] = a[2] * b;
    return;
}

FFX_STATIC void opARcpF3(FfxFloat32x3 d, FfxFloat32x3 a)
{
    d[0] = ffxReciprocal(a[0]);
    d[1] = ffxReciprocal(a[1]);
    d[2] = ffxReciprocal(a[2]);
    return;
}

/// Convert FfxFloat32 to half (in lower 16-bits of output).
/// 
/// This function implements the same fast technique that is documented here: ftp://ftp.fox-toolkit.org/pub/fasthalffloatconversion.pdf
/// 
/// The function supports denormals.
/// 
/// Some conversion rules are to make computations possibly "safer" on the GPU,
///  -INF & -NaN -> -65504
///  +INF & +NaN -> +65504
///
/// @param [in] f               The 32bit floating point value to convert.
/// 
/// @returns
/// The closest 16bit floating point value to <c><i>f</i></c>.
/// 
/// @ingroup CPUCore
FFX_STATIC FfxUInt32 f32tof16(FfxFloat32 f)
{
    static FfxUInt16 base[512] = {
        0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
        0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0002, 0x0004, 0x0008, 0x0010, 0x0020, 0x0040, 0x0080, 0x0100, 0x0200, 0x0400,
        0x0800, 0x0c00, 0x1000, 0x1400, 0x1800, 0x1c00, 0x2000, 0x2400, 0x2800, 0x2c00, 0x3000, 0x3400, 0x3800, 0x3c00, 0x4000, 0x4400, 0x4800, 0x4c00, 0x5000,
        0x5400, 0x5800, 0x5c00, 0x6000, 0x6400, 0x6800, 0x6c00, 0x7000, 0x7400, 0x7800, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff,
        0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff,
        0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff,
        0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff,
        0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff,
        0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff,
        0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x7bff, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
        0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
        0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
        0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
        0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000,
        0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8001, 0x8002,
        0x8004, 0x8008, 0x8010, 0x8020, 0x8040, 0x8080, 0x8100, 0x8200, 0x8400, 0x8800, 0x8c00, 0x9000, 0x9400, 0x9800, 0x9c00, 0xa000, 0xa400, 0xa800, 0xac00,
        0xb000, 0xb400, 0xb800, 0xbc00, 0xc000, 0xc400, 0xc800, 0xcc00, 0xd000, 0xd400, 0xd800, 0xdc00, 0xe000, 0xe400, 0xe800, 0xec00, 0xf000, 0xf400, 0xf800,
        0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff,
        0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff,
        0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff,
        0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff,
        0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff,
        0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xfbff
    };
    
    static FfxUInt8 shift[512] = {
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x17, 0x16, 0x15, 0x14, 0x13, 0x12, 0x11, 0x10, 0x0f, 0x0e, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d,
        0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x17, 0x16, 0x15, 0x14, 0x13, 0x12, 0x11, 0x10, 0x0f, 0x0e, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d,
        0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
        0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18
    };

    union
    {
        FfxFloat32      f;
        FfxUInt32 u;
    } bits;

    bits.f       = f;
    FfxUInt32 u = bits.u;
    FfxUInt32 i = u >> 23;
    return (FfxUInt32)(base[i]) + ((u & 0x7fffff) >> shift[i]);
}

/// Pack 2x32-bit floating point values in a single 32bit value.
///
/// This function first converts each component of <c><i>value</i></c> into their nearest 16-bit floating
/// point representation, and then stores the X and Y components in the lower and upper 16 bits of the
/// 32bit unsigned integer respectively.
///
/// @param [in] x               A 2-dimensional floating point value to convert and pack.
///
/// @returns
/// A packed 32bit value containing 2 16bit floating point values.
///
/// @ingroup CPUCore
FFX_STATIC FfxUInt32 packHalf2x16(FfxFloat32x2 x)
{
    return f32tof16(x[0]) + (f32tof16(x[1]) << 16);
}

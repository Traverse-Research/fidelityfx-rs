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


#ifndef FFX_OPTICALFLOW_RESOURCES_H
#define FFX_OPTICALFLOW_RESOURCES_H

#if defined(FFX_CPU) || defined(FFX_GPU)

#define FFX_OF_RESOURCE_IDENTIFIER_NULL 0

#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_INPUT_1 1
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_INPUT_1_LEVEL_1 2
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_INPUT_1_LEVEL_2 3
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_INPUT_1_LEVEL_3 4
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_INPUT_1_LEVEL_4 5
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_INPUT_1_LEVEL_5 6
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_INPUT_1_LEVEL_6 7

#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_INPUT_2 8
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_INPUT_2_LEVEL_1 9
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_INPUT_2_LEVEL_2 10
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_INPUT_2_LEVEL_3 11
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_INPUT_2_LEVEL_4 12
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_INPUT_2_LEVEL_5 13
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_INPUT_2_LEVEL_6 14

#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_1 15
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_1_LEVEL_1 16
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_1_LEVEL_2 17
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_1_LEVEL_3 18
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_1_LEVEL_4 19
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_1_LEVEL_5 20
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_1_LEVEL_6 21

#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_2 22
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_2_LEVEL_1 23
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_2_LEVEL_2 24
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_2_LEVEL_3 25
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_2_LEVEL_4 26
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_2_LEVEL_5 27
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_2_LEVEL_6 28

#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_SCD_HISTOGRAM 29
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_SCD_PREVIOUS_HISTOGRAM 30
#define FFX_OF_RESOURCE_IDENTIFIER_OPTICAL_FLOW_SCD_TEMP 31

#define FFX_OF_RESOURCE_IDENTIFIER_COUNT 32

#define FFX_OPTICALFLOW_CONSTANTBUFFER_IDENTIFIER 0
#define FFX_OPTICALFLOW_CONSTANTBUFFER_IDENTIFIER_SPD 1

#endif // #if defined(FFX_CPU) || defined(FFX_GPU)

#endif //!defined( FFX_OPTICALFLOW_RESOURCES_H )
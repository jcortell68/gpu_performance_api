//==============================================================================
// Copyright (c) 2010-2022 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief GL counter definitions for GFX9.
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project.

#ifndef GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GL_GFX9_H_
#define GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GL_GFX9_H_

// clang-format off

#include <set>

struct GpaHardwareCounterDesc;
struct GpaCounterGroupDesc;
struct GpaSqCounterGroupDesc;

namespace counter_gl_gfx9
{
    extern GpaHardwareCounterDesc*           kGlCounterGroupArrayGfx9[]; ///< Array of hardware counter groups for Gl for Gfx9 family
    extern GpaHardwareCounterDesc*           kGlExposedCountersGroupArrayGfx9[]; ///< Array of hardware exposed counter groups for Gl for Gfx9 family
    extern GpaCounterGroupDesc               kHwGlGroupsGfx9[]; ///< Array of counter groups for Gl for Gfx9 family
    extern GpaCounterGroupExposedCounterDesc kHwGlExposedCountersByGroupGfx9[]; ///< Array of exposed counter groups for Gl for Gfx9 family
    extern GpaPaddedCounterDesc              kGlPaddedCounterByGroupGfx9[]; ///< Array of reserved counter for Gl for Gfx9 family
    extern GpaSqCounterGroupDesc             kHwGlSqGroupsGfx9[]; ///< Array of SQ groups for Gl for Gfx9 family
    extern unsigned int                       kHwGlSqIsolatedGroupsGfx9[]; ///< Array of counter groups isolated from SQ counter groups for Gl for Gfx9 family
    extern const unsigned int                 kHwGlGpuTimeBottomToBottomDurationIndexGfx9; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for Gl for Gfx9 family
    extern const unsigned int                 kHwGlGpuTimeBottomToBottomStartIndexGfx9; ///< Index of time of the previous command reaching bottom of pipe for Gl for Gfx9 family
    extern const unsigned int                 kHwGlGpuTimeBottomToBottomEndIndexGfx9; ///< Index of time of the current command reaching bottom of pipe for Gl for Gfx9 family
    extern const unsigned int                 kHwGlGpuTimeTopToBottomDurationIndexGfx9; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for Gl for Gfx9 family
    extern const unsigned int                 kHwGlGpuTimeTopToBottomStartIndexGfx9; ///< Index of time that the current command reaches the top of pipe for Gl for Gfx9 family
    extern const unsigned int                 kHwGlGpuTimeTopToBottomEndIndexGfx9; ///< Index of time that the current command reaches the bottom of pipe for Gl for Gfx9 family
    extern const std::set<unsigned int>       kHwGlTimestampBlockIdsGfx9; ///< Timestamp block id's for Gl for Gfx9 family
    extern const std::set<unsigned int>       kHwGlTimeCounterIndicesGfx9; ///< Timestamp counter indices for Gl for Gfx9 family
    extern const unsigned int                 kHwGlGroupCountGfx9; ///< Hardware Group Count for Gl for Gfx9 family
    extern const unsigned int                 kHwGlExposedCountersGroupCountGfx9; ///< Whitelist hardware counter Group Count for Gl for Gfx9 family
    extern const unsigned int                 kGlPaddedCounterGroupCountGfx9; ///< reserved counter group count for Gl for Gfx9 family
    extern const unsigned int                 kHwGlSqGroupCountGfx9; ///< Hardware SQ Group Count for Gl for Gfx9 family
    extern const unsigned int                 kHwGlSqIsolatedGroupCountGfx9; ///< Hardware Isolated Group Count for Gl for Gfx9 family

/// @brief If the requested ASIC type is supported, then the global GPU generation block instance counters are updated.
///
/// @param [in] asic_type The ASIC type that is currently in use.
///
/// @return True if the ASIC is matched by this file and block instances are updated, otherwise false.
inline bool OverrideMaxBlockEvents(GDT_HW_ASIC_TYPE asic_type)
{
    UNREFERENCED_PARAMETER(asic_type);


    return true;
}
} //  namespace counter_gl_gfx9

// clang-format on

#endif  // GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GL_GFX9_H_

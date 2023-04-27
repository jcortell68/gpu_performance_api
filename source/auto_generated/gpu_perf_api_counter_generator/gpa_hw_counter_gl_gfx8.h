//==============================================================================
// Copyright (c) 2010-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief GL counter definitions for GFX8.
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project.

#ifndef GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GL_GFX8_H_
#define GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GL_GFX8_H_

// clang-format off

#include <set>

struct GpaHardwareCounterDesc;
struct GpaCounterGroupDesc;
struct GpaSqCounterGroupDesc;

namespace counter_gl_gfx8
{
    extern std::vector<std::vector<GpaHardwareCounterDesc>*>          kGlCounterGroupArrayGfx8; ///< Array of hardware counter groups for Gl for Gfx8 family
    extern std::vector<GpaCounterGroupDesc>                           kHwGlGroupsGfx8; ///< Array of counter groups for Gl for Gfx8 family
    extern GpaCounterGroupExposedCounterDesc                          kHwGlExposedCountersByGroupGfx8[]; ///< Array of exposed counter groups for Gl for Gfx8 family
    extern GpaPaddedCounterDesc                                       kGlPaddedCounterByGroupGfx8[]; ///< Array of reserved counter for Gl for Gfx8 family
    extern GpaSqCounterGroupDesc                                      kHwGlSqGroupsGfx8[]; ///< Array of SQ groups for Gl for Gfx8 family
    extern unsigned int                                               kHwGlSqIsolatedGroupsGfx8[]; ///< Array of counter groups isolated from SQ counter groups for Gl for Gfx8 family
    extern const unsigned int                                         kHwGlGpuTimeBottomToBottomDurationIndexGfx8; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for Gl for Gfx8 family
    extern const unsigned int                                         kHwGlGpuTimeBottomToBottomStartIndexGfx8; ///< Index of time of the previous command reaching bottom of pipe for Gl for Gfx8 family
    extern const unsigned int                                         kHwGlGpuTimeBottomToBottomEndIndexGfx8; ///< Index of time of the current command reaching bottom of pipe for Gl for Gfx8 family
    extern const unsigned int                                         kHwGlGpuTimeTopToBottomDurationIndexGfx8; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for Gl for Gfx8 family
    extern const unsigned int                                         kHwGlGpuTimeTopToBottomStartIndexGfx8; ///< Index of time that the current command reaches the top of pipe for Gl for Gfx8 family
    extern const unsigned int                                         kHwGlGpuTimeTopToBottomEndIndexGfx8; ///< Index of time that the current command reaches the bottom of pipe for Gl for Gfx8 family
    extern const std::set<unsigned int>                               kHwGlTimestampBlockIdsGfx8; ///< Timestamp block id's for Gl for Gfx8 family
    extern const std::set<unsigned int>                               kHwGlTimeCounterIndicesGfx8; ///< Timestamp counter indices for Gl for Gfx8 family
    extern const unsigned int                                         kHwGlGroupCountGfx8; ///< Hardware Group Count for Gl for Gfx8 family
    extern const unsigned int                                         kHwGlExposedCountersGroupCountGfx8; ///< Exposed hardware counter Group Count for Gl for Gfx8 family
    extern const unsigned int                                         kGlPaddedCounterGroupCountGfx8; ///< reserved counter group count for Gl for Gfx8 family
    extern const unsigned int                                         kHwGlSqGroupCountGfx8; ///< Hardware SQ Group Count for Gl for Gfx8 family
    extern const unsigned int                                         kHwGlSqIsolatedGroupCountGfx8; ///< Hardware Isolated Group Count for Gl for Gfx8 family

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
} //  namespace counter_gl_gfx8

// clang-format on

#endif  // GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GL_GFX8_H_

//==============================================================================
// Copyright (c) 2010-2022 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief OGLP counter definitions for GFX10.
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project.

#ifndef GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_OGLP_GFX10_H_
#define GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_OGLP_GFX10_H_

// clang-format off

#include <set>

struct GpaHardwareCounterDesc;
struct GpaCounterGroupDesc;
struct GpaSqCounterGroupDesc;

namespace counter_oglp_gfx10
{
    extern GpaHardwareCounterDesc*           kOglpCounterGroupArrayGfx10[]; ///< Array of hardware counter groups for Oglp for Gfx10 family
    extern GpaHardwareCounterDesc*           kOglpExposedCountersGroupArrayGfx10[]; ///< Array of hardware exposed counter groups for Oglp for Gfx10 family
    extern GpaCounterGroupDesc               kHwOglpGroupsGfx10[]; ///< Array of counter groups for Oglp for Gfx10 family
    extern GpaCounterGroupExposedCounterDesc kHwOglpExposedCountersByGroupGfx10[]; ///< Array of exposed counter groups for Oglp for Gfx10 family
    extern GpaPaddedCounterDesc              kOglpPaddedCounterByGroupGfx10[]; ///< Array of reserved counter for Oglp for Gfx10 family
    extern GpaSqCounterGroupDesc             kHwOglpSqGroupsGfx10[]; ///< Array of SQ groups for Oglp for Gfx10 family
    extern unsigned int                       kHwOglpSqIsolatedGroupsGfx10[]; ///< Array of counter groups isolated from SQ counter groups for Oglp for Gfx10 family
    extern const unsigned int                 kHwOglpGpuTimeBottomToBottomDurationIndexGfx10; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for Oglp for Gfx10 family
    extern const unsigned int                 kHwOglpGpuTimeBottomToBottomStartIndexGfx10; ///< Index of time of the previous command reaching bottom of pipe for Oglp for Gfx10 family
    extern const unsigned int                 kHwOglpGpuTimeBottomToBottomEndIndexGfx10; ///< Index of time of the current command reaching bottom of pipe for Oglp for Gfx10 family
    extern const unsigned int                 kHwOglpGpuTimeTopToBottomDurationIndexGfx10; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for Oglp for Gfx10 family
    extern const unsigned int                 kHwOglpGpuTimeTopToBottomStartIndexGfx10; ///< Index of time that the current command reaches the top of pipe for Oglp for Gfx10 family
    extern const unsigned int                 kHwOglpGpuTimeTopToBottomEndIndexGfx10; ///< Index of time that the current command reaches the bottom of pipe for Oglp for Gfx10 family
    extern const std::set<unsigned int>       kHwOglpTimestampBlockIdsGfx10; ///< Timestamp block id's for Oglp for Gfx10 family
    extern const std::set<unsigned int>       kHwOglpTimeCounterIndicesGfx10; ///< Timestamp counter indices for Oglp for Gfx10 family
    extern const unsigned int                 kHwOglpGroupCountGfx10; ///< Hardware Group Count for Oglp for Gfx10 family
    extern const unsigned int                 kHwOglpExposedCountersGroupCountGfx10; ///< Whitelist hardware counter Group Count for Oglp for Gfx10 family
    extern const unsigned int                 kOglpPaddedCounterGroupCountGfx10; ///< reserved counter group count for Oglp for Gfx10 family
    extern const unsigned int                 kHwOglpSqGroupCountGfx10; ///< Hardware SQ Group Count for Oglp for Gfx10 family
    extern const unsigned int                 kHwOglpSqIsolatedGroupCountGfx10; ///< Hardware Isolated Group Count for Oglp for Gfx10 family

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
} //  namespace counter_oglp_gfx10

// clang-format on

#endif  // GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_OGLP_GFX10_H_

//==============================================================================
// Copyright (c) 2010-2022 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief OGLP counter definitions for GFX9.
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project.

#ifndef GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_OGLP_GFX9_H_
#define GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_OGLP_GFX9_H_

// clang-format off

#include <set>

struct GpaHardwareCounterDesc;
struct GpaCounterGroupDesc;
struct GpaSqCounterGroupDesc;

namespace counter_oglp_gfx9
{
    extern std::vector<std::vector<GpaHardwareCounterDesc>*>          kOglpExposedCountersGroupArrayGfx9; ///< Array of hardware exposed counter groups for Oglp for Gfx9 family
    extern std::vector<GpaCounterGroupDesc>                           kHwOglpGroupsGfx9; ///< Array of counter groups for Oglp for Gfx9 family
    extern GpaCounterGroupExposedCounterDesc                          kHwOglpExposedCountersByGroupGfx9[]; ///< Array of exposed counter groups for Oglp for Gfx9 family
    extern GpaPaddedCounterDesc                                       kOglpPaddedCounterByGroupGfx9[]; ///< Array of reserved counter for Oglp for Gfx9 family
    extern GpaSqCounterGroupDesc                                      kHwOglpSqGroupsGfx9[]; ///< Array of SQ groups for Oglp for Gfx9 family
    extern unsigned int                                               kHwOglpSqIsolatedGroupsGfx9[]; ///< Array of counter groups isolated from SQ counter groups for Oglp for Gfx9 family
    extern const unsigned int                                         kHwOglpGpuTimeBottomToBottomDurationIndexGfx9; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for Oglp for Gfx9 family
    extern const unsigned int                                         kHwOglpGpuTimeBottomToBottomStartIndexGfx9; ///< Index of time of the previous command reaching bottom of pipe for Oglp for Gfx9 family
    extern const unsigned int                                         kHwOglpGpuTimeBottomToBottomEndIndexGfx9; ///< Index of time of the current command reaching bottom of pipe for Oglp for Gfx9 family
    extern const unsigned int                                         kHwOglpGpuTimeTopToBottomDurationIndexGfx9; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for Oglp for Gfx9 family
    extern const unsigned int                                         kHwOglpGpuTimeTopToBottomStartIndexGfx9; ///< Index of time that the current command reaches the top of pipe for Oglp for Gfx9 family
    extern const unsigned int                                         kHwOglpGpuTimeTopToBottomEndIndexGfx9; ///< Index of time that the current command reaches the bottom of pipe for Oglp for Gfx9 family
    extern const std::set<unsigned int>                               kHwOglpTimestampBlockIdsGfx9; ///< Timestamp block id's for Oglp for Gfx9 family
    extern const std::set<unsigned int>                               kHwOglpTimeCounterIndicesGfx9; ///< Timestamp counter indices for Oglp for Gfx9 family
    extern const unsigned int                                         kHwOglpGroupCountGfx9; ///< Hardware Group Count for Oglp for Gfx9 family
    extern const unsigned int                                         kHwOglpExposedCountersGroupCountGfx9; ///< Whitelist hardware counter Group Count for Oglp for Gfx9 family
    extern const unsigned int                                         kOglpPaddedCounterGroupCountGfx9; ///< reserved counter group count for Oglp for Gfx9 family
    extern const unsigned int                                         kHwOglpSqGroupCountGfx9; ///< Hardware SQ Group Count for Oglp for Gfx9 family
    extern const unsigned int                                         kHwOglpSqIsolatedGroupCountGfx9; ///< Hardware Isolated Group Count for Oglp for Gfx9 family

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
} //  namespace counter_oglp_gfx9

// clang-format on

#endif  // GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_OGLP_GFX9_H_

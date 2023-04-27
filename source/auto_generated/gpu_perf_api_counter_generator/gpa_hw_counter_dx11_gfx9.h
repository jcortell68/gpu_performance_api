//==============================================================================
// Copyright (c) 2010-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief DX11 counter definitions for GFX9.
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project.

#ifndef GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_DX11_GFX9_H_
#define GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_DX11_GFX9_H_

// clang-format off

#include <windows.h>
#include <AmdDxExtPerfProfile.h>

#include <set>

struct GpaHardwareCounterDesc;
struct GpaCounterGroupDesc;
struct GpaSqCounterGroupDesc;

namespace counter_dx11_gfx9
{
    extern std::vector<std::vector<GpaHardwareCounterDesc>*>          kDx11CounterGroupArrayGfx9; ///< Array of hardware counter groups for Dx11 for Gfx9 family
    extern std::vector<GpaCounterGroupDesc>                           kHwDx11GroupsGfx9; ///< Array of counter groups for Dx11 for Gfx9 family
    extern GpaCounterGroupExposedCounterDesc                          kHwDx11ExposedCountersByGroupGfx9[]; ///< Array of exposed counter groups for Dx11 for Gfx9 family
    extern GpaPaddedCounterDesc                                       kDx11PaddedCounterByGroupGfx9[]; ///< Array of reserved counter for Dx11 for Gfx9 family
    extern GpaSqCounterGroupDesc                                      kHwDx11SqGroupsGfx9[]; ///< Array of SQ groups for Dx11 for Gfx9 family
    extern unsigned int                                               kHwDx11SqIsolatedGroupsGfx9[]; ///< Array of counter groups isolated from SQ counter groups for Dx11 for Gfx9 family
    extern PE_BLOCK_ID                                                kHwDx11DriverEnumGfx9[]; ///< Array of driver enum values per group for Dx11 for Gfx9 family
    extern const unsigned int                                         kHwDx11GpuTimeBottomToBottomDurationIndexGfx9; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for Dx11 for Gfx9 family
    extern const unsigned int                                         kHwDx11GpuTimeBottomToBottomStartIndexGfx9; ///< Index of time of the previous command reaching bottom of pipe for Dx11 for Gfx9 family
    extern const unsigned int                                         kHwDx11GpuTimeBottomToBottomEndIndexGfx9; ///< Index of time of the current command reaching bottom of pipe for Dx11 for Gfx9 family
    extern const unsigned int                                         kHwDx11GpuTimeTopToBottomDurationIndexGfx9; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for Dx11 for Gfx9 family
    extern const unsigned int                                         kHwDx11GpuTimeTopToBottomStartIndexGfx9; ///< Index of time that the current command reaches the top of pipe for Dx11 for Gfx9 family
    extern const unsigned int                                         kHwDx11GpuTimeTopToBottomEndIndexGfx9; ///< Index of time that the current command reaches the bottom of pipe for Dx11 for Gfx9 family
    extern const std::set<unsigned int>                               kHwDx11TimestampBlockIdsGfx9; ///< Timestamp block id's for Dx11 for Gfx9 family
    extern const std::set<unsigned int>                               kHwDx11TimeCounterIndicesGfx9; ///< Timestamp counter indices for Dx11 for Gfx9 family
    extern const unsigned int                                         kHwDx11GroupCountGfx9; ///< Hardware Group Count for Dx11 for Gfx9 family
    extern const unsigned int                                         kHwDx11ExposedCountersGroupCountGfx9; ///< Exposed hardware counter Group Count for Dx11 for Gfx9 family
    extern const unsigned int                                         kDx11PaddedCounterGroupCountGfx9; ///< reserved counter group count for Dx11 for Gfx9 family
    extern const unsigned int                                         kHwDx11SqGroupCountGfx9; ///< Hardware SQ Group Count for Dx11 for Gfx9 family
    extern const unsigned int                                         kHwDx11SqIsolatedGroupCountGfx9; ///< Hardware Isolated Group Count for Dx11 for Gfx9 family

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
} //  namespace counter_dx11_gfx9

// clang-format on

#endif  // GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_DX11_GFX9_H_

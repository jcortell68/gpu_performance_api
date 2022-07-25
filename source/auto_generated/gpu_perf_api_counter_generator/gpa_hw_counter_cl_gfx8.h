//==============================================================================
// Copyright (c) 2010-2022 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief CL counter definitions for GFX8.
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project.

#ifndef GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_CL_GFX8_H_
#define GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_CL_GFX8_H_

// clang-format off

#include <set>

struct GpaHardwareCounterDesc;
struct GpaCounterGroupDesc;
struct GpaSqCounterGroupDesc;

namespace counter_cl_gfx8
{
    extern GpaHardwareCounterDesc*           kClCounterGroupArrayGfx8[]; ///< Array of hardware counter groups for Cl for Gfx8 family
    extern GpaHardwareCounterDesc*           kClExposedCountersGroupArrayGfx8[]; ///< Array of hardware exposed counter groups for Cl for Gfx8 family
    extern GpaCounterGroupDesc               kHwClGroupsGfx8[]; ///< Array of counter groups for Cl for Gfx8 family
    extern GpaCounterGroupExposedCounterDesc kHwClExposedCountersByGroupGfx8[]; ///< Array of exposed counter groups for Cl for Gfx8 family
    extern GpaPaddedCounterDesc              kClPaddedCounterByGroupGfx8[]; ///< Array of reserved counter for Cl for Gfx8 family
    extern GpaSqCounterGroupDesc             kHwClSqGroupsGfx8[]; ///< Array of SQ groups for Cl for Gfx8 family
    extern unsigned int                       kHwClSqIsolatedGroupsGfx8[]; ///< Array of counter groups isolated from SQ counter groups for Cl for Gfx8 family
    extern const std::set<unsigned int>       kHwClTimestampBlockIdsGfx8; ///< Timestamp block id's for Cl for Gfx8 family
    extern const std::set<unsigned int>       kHwClTimeCounterIndicesGfx8; ///< Timestamp counter indices for Cl for Gfx8 family
    extern const unsigned int                 kHwClGroupCountGfx8; ///< Hardware Group Count for Cl for Gfx8 family
    extern const unsigned int                 kHwClExposedCountersGroupCountGfx8; ///< Whitelist hardware counter Group Count for Cl for Gfx8 family
    extern const unsigned int                 kClPaddedCounterGroupCountGfx8; ///< reserved counter group count for Cl for Gfx8 family
    extern const unsigned int                 kHwClSqGroupCountGfx8; ///< Hardware SQ Group Count for Cl for Gfx8 family
    extern const unsigned int                 kHwClSqIsolatedGroupCountGfx8; ///< Hardware Isolated Group Count for Cl for Gfx8 family

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
} //  namespace counter_cl_gfx8

// clang-format on

#endif  // GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_CL_GFX8_H_

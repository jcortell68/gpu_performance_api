//==============================================================================
// Copyright (c) 2010-2022 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief Hardware counter info for GFX9_PLACEHOLDER4.
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project.

#ifndef GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GFX9_PLACEHOLDER4_H_
#define GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GFX9_PLACEHOLDER4_H_

// clang-format off

#include <set>

struct GpaHardwareCounterDesc;
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_gfx9.h"

namespace counter_gfx9_placeholder4
{
/// @brief Uses the input ASIC type to determine if this data provides an ASIC specific version.
///
/// @param [in] asic_type The ASIC type that is currently in use.
///
/// @return True if the ASIC is matched by this file.
inline bool MatchAsic(GDT_HW_ASIC_TYPE asic_type)
{
    static std::set<GDT_HW_ASIC_TYPE> asics_supported = { GDT_ASIC_PLACEHOLDER_4 };

    if (asics_supported.find(asic_type) == asics_supported.end())
    {
        return false;
    }

    return true;
}

    extern GpaHardwareCounterDesc kPaSu0CountersGfx9_placeholder4[]; ///< Array of internal counters for PaSu0 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kPaSu1CountersGfx9_placeholder4[]; ///< Array of internal counters for PaSu1 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kPaSu2CountersGfx9_placeholder4[]; ///< Array of internal counters for PaSu2 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kPaSu3CountersGfx9_placeholder4[]; ///< Array of internal counters for PaSu3 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kPaSc0CountersGfx9_placeholder4[]; ///< Array of internal counters for PaSc0 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kPaSc1CountersGfx9_placeholder4[]; ///< Array of internal counters for PaSc1 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kPaSc2CountersGfx9_placeholder4[]; ///< Array of internal counters for PaSc2 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kPaSc3CountersGfx9_placeholder4[]; ///< Array of internal counters for PaSc3 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kIa0CountersGfx9_placeholder4[]; ///< Array of internal counters for Ia0 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kIa1CountersGfx9_placeholder4[]; ///< Array of internal counters for Ia1 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea0CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea0 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea1CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea1 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea2CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea2 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea3CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea3 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea4CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea4 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea5CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea5 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea6CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea6 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea7CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea7 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea8CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea8 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea9CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea9 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea10CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea10 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea11CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea11 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea12CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea12 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea13CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea13 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea14CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea14 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea15CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea15 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea16CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea16 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea17CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea17 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea18CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea18 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea19CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea19 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea20CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea20 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea21CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea21 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea22CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea22 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea23CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea23 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea24CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea24 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea25CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea25 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea26CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea26 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea27CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea27 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea28CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea28 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea29CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea29 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea30CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea30 block for Gfx9_placeholder4 family
    extern GpaHardwareCounterDesc kGcea31CountersGfx9_placeholder4[]; ///< Array of internal counters for Gcea31 block for Gfx9_placeholder4 family

/// @brief Replaces count number of block instance counters at the destination with the overriding source counters.
///
/// @param [in] dest_counter Destination to update.
/// @param [in] src_counter Source to update from.
/// @param [in] count Number of counters to update.
inline void ReplaceBlockInstanceCounters(GpaHardwareCounterDesc* dest_counter, GpaHardwareCounterDesc* src_counter, uint32_t count)
{
    for (uint32_t i = 0; i < count; i++)
    {
        dest_counter[i] = src_counter[i];
    }
}

/// @brief If the requested ASIC type is supported, then the global GPU generation block instance counters are updated.
///
/// @param [in] asic_type The ASIC type that is currently in use.
///
/// @return True if the ASIC is matched by this file and block instances are updated, otherwise false.
inline bool OverrideBlockInstanceCounters(GDT_HW_ASIC_TYPE asic_type)
{
    if (!MatchAsic(asic_type))
    {
        return false;
    }

    ReplaceBlockInstanceCounters(counter_gfx9::kPaSu0CountersGfx9, kPaSu0CountersGfx9_placeholder4, 351);
    ReplaceBlockInstanceCounters(counter_gfx9::kPaSu1CountersGfx9, kPaSu1CountersGfx9_placeholder4, 351);
    ReplaceBlockInstanceCounters(counter_gfx9::kPaSu2CountersGfx9, kPaSu2CountersGfx9_placeholder4, 351);
    ReplaceBlockInstanceCounters(counter_gfx9::kPaSu3CountersGfx9, kPaSu3CountersGfx9_placeholder4, 351);
    ReplaceBlockInstanceCounters(counter_gfx9::kPaSc0CountersGfx9, kPaSc0CountersGfx9_placeholder4, 492);
    ReplaceBlockInstanceCounters(counter_gfx9::kPaSc1CountersGfx9, kPaSc1CountersGfx9_placeholder4, 492);
    ReplaceBlockInstanceCounters(counter_gfx9::kPaSc2CountersGfx9, kPaSc2CountersGfx9_placeholder4, 492);
    ReplaceBlockInstanceCounters(counter_gfx9::kPaSc3CountersGfx9, kPaSc3CountersGfx9_placeholder4, 492);
    ReplaceBlockInstanceCounters(counter_gfx9::kIa0CountersGfx9, kIa0CountersGfx9_placeholder4, 31);
    ReplaceBlockInstanceCounters(counter_gfx9::kIa1CountersGfx9, kIa1CountersGfx9_placeholder4, 31);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea0CountersGfx9, kGcea0CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea1CountersGfx9, kGcea1CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea2CountersGfx9, kGcea2CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea3CountersGfx9, kGcea3CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea4CountersGfx9, kGcea4CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea5CountersGfx9, kGcea5CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea6CountersGfx9, kGcea6CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea7CountersGfx9, kGcea7CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea8CountersGfx9, kGcea8CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea9CountersGfx9, kGcea9CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea10CountersGfx9, kGcea10CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea11CountersGfx9, kGcea11CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea12CountersGfx9, kGcea12CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea13CountersGfx9, kGcea13CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea14CountersGfx9, kGcea14CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea15CountersGfx9, kGcea15CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea16CountersGfx9, kGcea16CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea17CountersGfx9, kGcea17CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea18CountersGfx9, kGcea18CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea19CountersGfx9, kGcea19CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea20CountersGfx9, kGcea20CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea21CountersGfx9, kGcea21CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea22CountersGfx9, kGcea22CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea23CountersGfx9, kGcea23CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea24CountersGfx9, kGcea24CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea25CountersGfx9, kGcea25CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea26CountersGfx9, kGcea26CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea27CountersGfx9, kGcea27CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea28CountersGfx9, kGcea28CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea29CountersGfx9, kGcea29CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea30CountersGfx9, kGcea30CountersGfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(counter_gfx9::kGcea31CountersGfx9, kGcea31CountersGfx9_placeholder4, 83);

    return true;
}

bool OverrideMaxBlockEvents(GDT_HW_ASIC_TYPE asic_type);
} // counter_gfx9_placeholder4

#endif  // GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GFX9_PLACEHOLDER4_H_

// clang-format on

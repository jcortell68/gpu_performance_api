//==============================================================================
// Copyright (c) 2012-2022 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief Unit Tests for GL Counter Generator.
//==============================================================================

#include "gpu_performance_api/gpu_perf_api_types.h"

#include "gpu_perf_api_counter_generator/gpa_counter.h"

#include "auto_generated/gpu_perf_api_unit_tests/counters/public_derived_counters_oglp_gfx8.h"
#include "auto_generated/gpu_perf_api_unit_tests/counters/public_derived_counters_oglp_gfx9.h"
#include "auto_generated/gpu_perf_api_unit_tests/counters/public_derived_counters_oglp_gfx10.h"
#include "auto_generated/gpu_perf_api_unit_tests/counters/public_derived_counters_oglp_gfx103.h"
#include "auto_generated/gpu_perf_api_unit_tests/counters/public_derived_counters_oglp_gfx11.h"

#include "gpu_perf_api_unit_tests/counter_generator_tests.h"

static void GetExpectedCountersForGeneration(GpaHwGeneration gen, std::vector<const char*>& counter_names)
{
    counter_names.clear();

    const GpaCounterDesc* public_counters      = nullptr;
    size_t                public_counter_count = 0;

    std::vector<GpaCounterGroupDesc>                  hardware_groups;
    std::vector<std::vector<GpaHardwareCounterDesc>*> hardware_counters;
    unsigned int                                      hw_group_count = 0;

    switch (gen)
    {
    case kGpaHwGenerationGfx8:
        public_counters      = kOglpGfx8PublicCounters;
        public_counter_count = kOglpGfx8PublicCounterCount;
        break;

    case kGpaHwGenerationGfx9:
        public_counters      = kOglpGfx9PublicCounters;
        public_counter_count = kOglpGfx9PublicCounterCount;
        break;

    case kGpaHwGenerationGfx10:
        public_counters      = kOglpGfx10PublicCounters;
        public_counter_count = kOglpGfx10PublicCounterCount;
        break;

    case kGpaHwGenerationGfx103:
        public_counters      = kOglpGfx103PublicCounters;
        public_counter_count = kOglpGfx103PublicCounterCount;
        break;

    case kGpaHwGenerationGfx11:
        public_counters      = kOglpGfx11PublicCounters;
        public_counter_count = kOglpGfx11PublicCounterCount;
        break;

    default:
        break;
    }

    for (size_t i = 0; i < public_counter_count; i++)
    {
        counter_names.push_back(public_counters[i].name);
    }

    // Optionally, get internal derived counters
    const GpaCounterDesc* kInternalDerivedCounters       = nullptr;
    size_t                internal_derived_counter_count = 0;

    for (size_t i = 0; i < internal_derived_counter_count; i++)
    {
        counter_names.push_back(kInternalDerivedCounters[i].name);
    }

    for (unsigned int i = 0; i < hw_group_count; i++)
    {
        for (unsigned int j = 0; j < hardware_groups.at(i).num_counters; j++)
        {
            counter_names.push_back(hardware_counters.at(i)->at(j).name);
        }
    }
}

static std::vector<GpaCounterDesc> GetExpectedPublicCounters(GpaHwGeneration gen)
{
    const GpaCounterDesc* public_counters      = nullptr;
    size_t                public_counter_count = 0;

    switch (gen)
    {
    case kGpaHwGenerationGfx8:
        public_counters      = kOglpGfx8PublicCounters;
        public_counter_count = kOglpGfx8PublicCounterCount;
        break;

    case kGpaHwGenerationGfx9:
        public_counters      = kOglpGfx9PublicCounters;
        public_counter_count = kOglpGfx9PublicCounterCount;
        break;

    case kGpaHwGenerationGfx10:
        public_counters      = kOglpGfx10PublicCounters;
        public_counter_count = kOglpGfx10PublicCounterCount;
        break;

    case kGpaHwGenerationGfx103:
        public_counters      = kOglpGfx103PublicCounters;
        public_counter_count = kOglpGfx103PublicCounterCount;
        break;

    case kGpaHwGenerationGfx11:
        public_counters      = kOglpGfx11PublicCounters;
        public_counter_count = kOglpGfx11PublicCounterCount;
        break;

    default:
        break;
    }

    std::vector<GpaCounterDesc> public_counter_list;
    public_counter_list.reserve(public_counter_count);
    for (size_t i = 0; i < public_counter_count; i++)
    {
        public_counter_list.push_back(public_counters[i]);
    }

    return public_counter_list;
}

#ifdef _WIN32
// Test the OpenGl derived counter blocks
TEST(CounterDllTests, OpenGlDerivedCounterBlocksGfx8)
{
    VerifyDerivedCounterCount(kGpaApiOpengl, kGpaHwGenerationGfx8, FALSE, GetExpectedPublicCounters(kGpaHwGenerationGfx8));
}

TEST(CounterDllTests, OpenGlDerivedCounterBlocksGfx9)
{
    VerifyDerivedCounterCount(kGpaApiOpengl, kGpaHwGenerationGfx9, FALSE, GetExpectedPublicCounters(kGpaHwGenerationGfx9));
}

TEST(CounterDllTests, OpenGlDerivedCounterBlocksGfx10)
{
    VerifyDerivedCounterCount(kGpaApiOpengl, kGpaHwGenerationGfx10, FALSE, GetExpectedPublicCounters(kGpaHwGenerationGfx10));
}

TEST(CounterDllTests, OpenGlDerivedCounterBlocksGfx103)
{
    VerifyDerivedCounterCount(kGpaApiOpengl, kGpaHwGenerationGfx103, FALSE, GetExpectedPublicCounters(kGpaHwGenerationGfx103));
}

TEST(CounterDllTests, OpenGlDerivedCounterBlocksGfx11)
{
    VerifyDerivedCounterCount(kGpaApiOpengl, kGpaHwGenerationGfx11, FALSE, GetExpectedPublicCounters(kGpaHwGenerationGfx11));
}
#endif

// Test the OpenGl counter names on all supported hardware by DeviceID back-to-back.
TEST(CounterDllTests, OpenGlCounterNamesByDeviceId)
{
    VerifyHardwareNotSupported(kGpaApiOpengl, kDevIdUnknown, FALSE);

    std::vector<const char*> counter_names;
    GetExpectedCountersForGeneration(kGpaHwGenerationGfx8, counter_names);
    VerifyCounterNames(kGpaApiOpengl, kDevIdVI, FALSE, counter_names);
    GetExpectedCountersForGeneration(kGpaHwGenerationGfx9, counter_names);
    VerifyCounterNames(kGpaApiOpengl, kDevIdGfx9, FALSE, counter_names);
    GetExpectedCountersForGeneration(kGpaHwGenerationGfx10, counter_names);
    VerifyCounterNames(kGpaApiOpengl, kDevIdGfx10, FALSE, counter_names);
    GetExpectedCountersForGeneration(kGpaHwGenerationGfx103, counter_names);
    VerifyCounterNames(kGpaApiOpengl, kDevIdGfx10_3, FALSE, counter_names);
    GetExpectedCountersForGeneration(kGpaHwGenerationGfx11, counter_names);
    VerifyCounterNames(kGpaApiOpengl, kDevIdGfx11, FALSE, counter_names);
}

TEST(CounterDllTests, OpenGlCounterNamesDeviceIdUnknown)
{
    VerifyHardwareNotSupported(kGpaApiOpengl, kDevIdUnknown, FALSE);
}

TEST(CounterDllTests, OpenGlCounterNamesDeviceIdGfx8)
{
    std::vector<const char*> counter_names;
    GetExpectedCountersForGeneration(kGpaHwGenerationGfx8, counter_names);
    VerifyCounterNames(kGpaApiOpengl, kDevIdVI, FALSE, counter_names);
}

TEST(CounterDllTests, OpenGlCounterNamesDeviceIdGfx9)
{
    std::vector<const char*> counter_names;
    GetExpectedCountersForGeneration(kGpaHwGenerationGfx9, counter_names);
    VerifyCounterNames(kGpaApiOpengl, kDevIdGfx9, FALSE, counter_names);
}

TEST(CounterDllTests, OpenGlCounterNamesDeviceIdGfx10)
{
    std::vector<const char*> counter_names;
    GetExpectedCountersForGeneration(kGpaHwGenerationGfx10, counter_names);
    VerifyCounterNames(kGpaApiOpengl, kDevIdGfx10, FALSE, counter_names);
}

TEST(CounterDllTests, OpenGlCounterNamesDeviceIdGfx103)
{
    std::vector<const char*> counter_names;
    GetExpectedCountersForGeneration(kGpaHwGenerationGfx103, counter_names);
    VerifyCounterNames(kGpaApiOpengl, kDevIdGfx10_3, FALSE, counter_names);
}

TEST(CounterDllTests, OpenGlCounterNamesDeviceIdGfx11)
{
    std::vector<const char*> counter_names;
    GetExpectedCountersForGeneration(kGpaHwGenerationGfx11, counter_names);
    VerifyCounterNames(kGpaApiOpengl, kDevIdGfx11, FALSE, counter_names);
}

// Test the OpenGl counter names on all generations back-to-back.
TEST(CounterDllTests, OpenGlCounterNamesByGeneration)
{
    VerifyHardwareNotSupported(kGpaApiOpengl, kGpaHwGenerationNvidia, FALSE);
    VerifyHardwareNotSupported(kGpaApiOpengl, kGpaHwGenerationIntel, FALSE);
    VerifyHardwareNotSupported(kGpaApiOpengl, kGpaHwGenerationGfx6, FALSE);
    VerifyHardwareNotSupported(kGpaApiOpengl, kGpaHwGenerationGfx7, FALSE);

    std::vector<const char*> counter_names;
    GetExpectedCountersForGeneration(kGpaHwGenerationGfx8, counter_names);
    VerifyCounterNames(kGpaApiOpengl, kGpaHwGenerationGfx8, FALSE, counter_names);
    GetExpectedCountersForGeneration(kGpaHwGenerationGfx9, counter_names);
    VerifyCounterNames(kGpaApiOpengl, kGpaHwGenerationGfx9, FALSE, counter_names);
    GetExpectedCountersForGeneration(kGpaHwGenerationGfx10, counter_names);
    VerifyCounterNames(kGpaApiOpengl, kGpaHwGenerationGfx10, FALSE, counter_names);
    GetExpectedCountersForGeneration(kGpaHwGenerationGfx103, counter_names);
    VerifyCounterNames(kGpaApiOpengl, kGpaHwGenerationGfx103, FALSE, counter_names);
    GetExpectedCountersForGeneration(kGpaHwGenerationGfx11, counter_names);
    VerifyCounterNames(kGpaApiOpengl, kGpaHwGenerationGfx11, FALSE, counter_names);
}

TEST(CounterDllTests, OpenGlOpenCounterContext)
{
    VerifyHardwareNotSupported(kGpaApiOpengl, kGpaHwGenerationNvidia, FALSE);
    VerifyHardwareNotSupported(kGpaApiOpengl, kGpaHwGenerationIntel, FALSE);
    VerifyHardwareNotSupported(kGpaApiOpengl, kGpaHwGenerationGfx6, FALSE);
    VerifyHardwareNotSupported(kGpaApiOpengl, kGpaHwGenerationGfx7, FALSE);

    VerifyOpenCounterContext(kGpaApiOpengl, kGpaHwGenerationGfx8);
    VerifyOpenCounterContext(kGpaApiOpengl, kGpaHwGenerationGfx9);
    VerifyOpenCounterContext(kGpaApiOpengl, kGpaHwGenerationGfx10);
    VerifyOpenCounterContext(kGpaApiOpengl, kGpaHwGenerationGfx103);
    VerifyOpenCounterContext(kGpaApiOpengl, kGpaHwGenerationGfx11);
}

#ifdef _WIN32
TEST(CounterDllTests, GlCounterLibTestDeviceIdGfx8)
{
    VerifyCounterLibInterface(kGpaApiOpengl, kDevIdVI, REVISION_ID_ANY, false);
    VerifyCounterByPassCounterLibEntry(kGpaApiOpengl, kDevIdVI, REVISION_ID_ANY, false);
}

TEST(CounterDllTests, GlCounterLibTestDeviceIdGfx9)
{
    VerifyCounterLibInterface(kGpaApiOpengl, kDevIdGfx9, REVISION_ID_ANY, false);
    VerifyCounterByPassCounterLibEntry(kGpaApiOpengl, kDevIdGfx9, REVISION_ID_ANY, false);
}

TEST(CounterDllTests, GlCounterLibTestDeviceIdGfx10)
{
    VerifyCounterLibInterface(kGpaApiOpengl, kDevIdGfx10, REVISION_ID_ANY, false);
    VerifyCounterByPassCounterLibEntry(kGpaApiOpengl, kDevIdGfx10, REVISION_ID_ANY, false);
}

TEST(CounterDllTests, GlCounterLibTestDeviceIdGfx103)
{
    VerifyCounterLibInterface(kGpaApiOpengl, kDevIdGfx10_3, REVISION_ID_ANY, false);
    VerifyCounterByPassCounterLibEntry(kGpaApiOpengl, kDevIdGfx10_3, REVISION_ID_ANY, false);
}

TEST(CounterDllTests, GlCounterLibTestDeviceIdGfx11)
{
    VerifyCounterLibInterface(kGpaApiOpengl, kDevIdGfx11, REVISION_ID_ANY, false);
    VerifyCounterByPassCounterLibEntry(kGpaApiOpengl, kDevIdGfx11, REVISION_ID_ANY, false);
}
#endif

TEST(CounterDllTests, GLCounterFormulaTest)
{
    std::vector<const char*> counter_names;
    VerifyCounterFormula(GetExpectedPublicCounters(kGpaHwGenerationGfx8));
    VerifyCounterFormula(GetExpectedPublicCounters(kGpaHwGenerationGfx9));
    VerifyCounterFormula(GetExpectedPublicCounters(kGpaHwGenerationGfx10));
    VerifyCounterFormula(GetExpectedPublicCounters(kGpaHwGenerationGfx103));
    VerifyCounterFormula(GetExpectedPublicCounters(kGpaHwGenerationGfx11));
}

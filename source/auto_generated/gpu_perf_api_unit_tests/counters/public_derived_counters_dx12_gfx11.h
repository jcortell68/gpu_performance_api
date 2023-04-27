//==============================================================================
// Copyright (c) 2015-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief PublicCounterDefinitions for DX12 GFX11 for testing.
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#ifndef GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX12_GFX11
#define GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX12_GFX11

#include "gpu_perf_api_unit_tests/counters/gpa_counter_desc.h"

/// Macros for DX12Gfx11 Public counter index
#define GPUTIME_PUBLIC_DX12_GFX11 0
#define EXECUTIONDURATION_PUBLIC_DX12_GFX11 1
#define EXECUTIONSTART_PUBLIC_DX12_GFX11 2
#define EXECUTIONEND_PUBLIC_DX12_GFX11 3
#define GPUBUSY_PUBLIC_DX12_GFX11 4
#define GPUBUSYCYCLES_PUBLIC_DX12_GFX11 5
#define VSGSBUSY_PUBLIC_DX12_GFX11 6
#define VSGSBUSYCYCLES_PUBLIC_DX12_GFX11 7
#define VSGSTIME_PUBLIC_DX12_GFX11 8
#define PRETESSELLATIONBUSY_PUBLIC_DX12_GFX11 9
#define PRETESSELLATIONBUSYCYCLES_PUBLIC_DX12_GFX11 10
#define PRETESSELLATIONTIME_PUBLIC_DX12_GFX11 11
#define POSTTESSELLATIONBUSY_PUBLIC_DX12_GFX11 12
#define POSTTESSELLATIONBUSYCYCLES_PUBLIC_DX12_GFX11 13
#define POSTTESSELLATIONTIME_PUBLIC_DX12_GFX11 14
#define PSBUSY_PUBLIC_DX12_GFX11 15
#define PSBUSYCYCLES_PUBLIC_DX12_GFX11 16
#define PSTIME_PUBLIC_DX12_GFX11 17
#define CSBUSY_PUBLIC_DX12_GFX11 18
#define CSBUSYCYCLES_PUBLIC_DX12_GFX11 19
#define CSTIME_PUBLIC_DX12_GFX11 20
#define PRIMITIVEASSEMBLYBUSY_PUBLIC_DX12_GFX11 21
#define PRIMITIVEASSEMBLYBUSYCYCLES_PUBLIC_DX12_GFX11 22
#define CULLEDPRIMS_PUBLIC_DX12_GFX11 23
#define CLIPPEDPRIMS_PUBLIC_DX12_GFX11 24
#define PASTALLEDONRASTERIZER_PUBLIC_DX12_GFX11 25
#define PASTALLEDONRASTERIZERCYCLES_PUBLIC_DX12_GFX11 26
#define PSPIXELSOUT_PUBLIC_DX12_GFX11 27
#define PSEXPORTSTALLS_PUBLIC_DX12_GFX11 28
#define PSEXPORTSTALLSCYCLES_PUBLIC_DX12_GFX11 29
#define CSTHREADGROUPS_PUBLIC_DX12_GFX11 30
#define CSWAVEFRONTS_PUBLIC_DX12_GFX11 31
#define CSTHREADS_PUBLIC_DX12_GFX11 32
#define CSTHREADGROUPSIZE_PUBLIC_DX12_GFX11 33
#define CSMEMUNITBUSY_PUBLIC_DX12_GFX11 34
#define CSMEMUNITBUSYCYCLES_PUBLIC_DX12_GFX11 35
#define CSMEMUNITSTALLED_PUBLIC_DX12_GFX11 36
#define CSMEMUNITSTALLEDCYCLES_PUBLIC_DX12_GFX11 37
#define CSWRITEUNITSTALLED_PUBLIC_DX12_GFX11 38
#define CSWRITEUNITSTALLEDCYCLES_PUBLIC_DX12_GFX11 39
#define CSALUSTALLEDBYLDS_PUBLIC_DX12_GFX11 40
#define CSALUSTALLEDBYLDSCYCLES_PUBLIC_DX12_GFX11 41
#define CSLDSBANKCONFLICT_PUBLIC_DX12_GFX11 42
#define CSLDSBANKCONFLICTCYCLES_PUBLIC_DX12_GFX11 43
#define TEXUNITBUSY_PUBLIC_DX12_GFX11 44
#define TEXUNITBUSYCYCLES_PUBLIC_DX12_GFX11 45
#define TEXTRIFILTERINGPCT_PUBLIC_DX12_GFX11 46
#define TEXTRIFILTERINGCOUNT_PUBLIC_DX12_GFX11 47
#define NOTEXTRIFILTERINGCOUNT_PUBLIC_DX12_GFX11 48
#define TEXVOLFILTERINGPCT_PUBLIC_DX12_GFX11 49
#define TEXVOLFILTERINGCOUNT_PUBLIC_DX12_GFX11 50
#define NOTEXVOLFILTERINGCOUNT_PUBLIC_DX12_GFX11 51
#define TEXAVEANISOTROPY_PUBLIC_DX12_GFX11 52
#define DEPTHSTENCILTESTBUSY_PUBLIC_DX12_GFX11 53
#define DEPTHSTENCILTESTBUSYCYCLES_PUBLIC_DX12_GFX11 54
#define HIZTILESACCEPTED_PUBLIC_DX12_GFX11 55
#define HIZTILESACCEPTEDCOUNT_PUBLIC_DX12_GFX11 56
#define HIZTILESREJECTEDCOUNT_PUBLIC_DX12_GFX11 57
#define PREZTILESDETAILCULLED_PUBLIC_DX12_GFX11 58
#define PREZTILESDETAILCULLEDCOUNT_PUBLIC_DX12_GFX11 59
#define PREZTILESDETAILSURVIVINGCOUNT_PUBLIC_DX12_GFX11 60
#define HIZQUADSCULLED_PUBLIC_DX12_GFX11 61
#define HIZQUADSCULLEDCOUNT_PUBLIC_DX12_GFX11 62
#define HIZQUADSACCEPTEDCOUNT_PUBLIC_DX12_GFX11 63
#define PREZQUADSCULLED_PUBLIC_DX12_GFX11 64
#define PREZQUADSCULLEDCOUNT_PUBLIC_DX12_GFX11 65
#define PREZQUADSSURVIVINGCOUNT_PUBLIC_DX12_GFX11 66
#define POSTZQUADS_PUBLIC_DX12_GFX11 67
#define POSTZQUADCOUNT_PUBLIC_DX12_GFX11 68
#define PREZSAMPLESPASSING_PUBLIC_DX12_GFX11 69
#define PREZSAMPLESFAILINGS_PUBLIC_DX12_GFX11 70
#define PREZSAMPLESFAILINGZ_PUBLIC_DX12_GFX11 71
#define POSTZSAMPLESPASSING_PUBLIC_DX12_GFX11 72
#define POSTZSAMPLESFAILINGS_PUBLIC_DX12_GFX11 73
#define POSTZSAMPLESFAILINGZ_PUBLIC_DX12_GFX11 74
#define ZUNITSTALLED_PUBLIC_DX12_GFX11 75
#define ZUNITSTALLEDCYCLES_PUBLIC_DX12_GFX11 76
#define DBMEMREAD_PUBLIC_DX12_GFX11 77
#define DBMEMWRITTEN_PUBLIC_DX12_GFX11 78
#define CBMEMREAD_PUBLIC_DX12_GFX11 79
#define CBCOLORANDMASKREAD_PUBLIC_DX12_GFX11 80
#define CBMEMWRITTEN_PUBLIC_DX12_GFX11 81
#define CBCOLORANDMASKWRITTEN_PUBLIC_DX12_GFX11 82
#define L0CACHEHIT_PUBLIC_DX12_GFX11 83
#define L0CACHEREQUESTCOUNT_PUBLIC_DX12_GFX11 84
#define L0CACHEHITCOUNT_PUBLIC_DX12_GFX11 85
#define L0CACHEMISSCOUNT_PUBLIC_DX12_GFX11 86
#define SCALARCACHEHIT_PUBLIC_DX12_GFX11 87
#define SCALARCACHEREQUESTCOUNT_PUBLIC_DX12_GFX11 88
#define SCALARCACHEHITCOUNT_PUBLIC_DX12_GFX11 89
#define SCALARCACHEMISSCOUNT_PUBLIC_DX12_GFX11 90
#define INSTCACHEHIT_PUBLIC_DX12_GFX11 91
#define INSTCACHEREQUESTCOUNT_PUBLIC_DX12_GFX11 92
#define INSTCACHEHITCOUNT_PUBLIC_DX12_GFX11 93
#define INSTCACHEMISSCOUNT_PUBLIC_DX12_GFX11 94
#define L1CACHEHIT_PUBLIC_DX12_GFX11 95
#define L1CACHEREQUESTCOUNT_PUBLIC_DX12_GFX11 96
#define L1CACHEHITCOUNT_PUBLIC_DX12_GFX11 97
#define L1CACHEMISSCOUNT_PUBLIC_DX12_GFX11 98
#define L2CACHEHIT_PUBLIC_DX12_GFX11 99
#define L2CACHEMISS_PUBLIC_DX12_GFX11 100
#define L2CACHEREQUESTCOUNT_PUBLIC_DX12_GFX11 101
#define L2CACHEHITCOUNT_PUBLIC_DX12_GFX11 102
#define L2CACHEMISSCOUNT_PUBLIC_DX12_GFX11 103
#define FETCHSIZE_PUBLIC_DX12_GFX11 104
#define WRITESIZE_PUBLIC_DX12_GFX11 105
#define MEMUNITBUSY_PUBLIC_DX12_GFX11 106
#define MEMUNITBUSYCYCLES_PUBLIC_DX12_GFX11 107
#define MEMUNITSTALLED_PUBLIC_DX12_GFX11 108
#define MEMUNITSTALLEDCYCLES_PUBLIC_DX12_GFX11 109
#define WRITEUNITSTALLED_PUBLIC_DX12_GFX11 110
#define WRITEUNITSTALLEDCYCLES_PUBLIC_DX12_GFX11 111
#define LOCALVIDMEMBYTES_PUBLIC_DX12_GFX11 112
#define PCIEBYTES_PUBLIC_DX12_GFX11 113
#define RAYTRITESTS_PUBLIC_DX12_GFX11 114
#define RAYBOXTESTS_PUBLIC_DX12_GFX11 115
#define TOTALRAYTESTS_PUBLIC_DX12_GFX11 116
#define RAYTESTSPERWAVE_PUBLIC_DX12_GFX11 117

/// Number of public counters for DX12 GFX11 
const size_t kDx12Gfx11PublicCounterCount = 118;

/// Array of public counters for DX12 GFX11 
extern const GpaCounterDesc kDx12Gfx11PublicCounters[kDx12Gfx11PublicCounterCount];

#endif  // GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX12_GFX11

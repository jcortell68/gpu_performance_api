//==============================================================================
// Copyright (c) 2010-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief CL counter definitions for GFX11.
//==============================================================================

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_gfx11.h"
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_cl_gfx11.h"

// This file is autogenerated by the ConvertHWEnums project

// clang-format off

namespace counter_cl_gfx11
{
    using namespace counter_gfx11;

    std::vector<std::vector<GpaHardwareCounterDesc>*> kClCounterGroupArrayGfx11 = {
        &kCb0CountersGfx11,
        &kCb1CountersGfx11,
        &kCb2CountersGfx11,
        &kCb3CountersGfx11,
        &kCpfCountersGfx11,
        &kDb0CountersGfx11,
        &kDb1CountersGfx11,
        &kDb2CountersGfx11,
        &kDb3CountersGfx11,
        &kGrbmCountersGfx11,
        &kPaSu0CountersGfx11,
        &kPaSc0CountersGfx11,
        &kPaSc1CountersGfx11,
        &kSpi0CountersGfx11,
        &kSqg0CountersGfx11,
        &kSqgEs0CountersGfx11,
        &kSqgGs0CountersGfx11,
        &kSqgVs0CountersGfx11,
        &kSqgPs0CountersGfx11,
        &kSqgLs0CountersGfx11,
        &kSqgHs0CountersGfx11,
        &kSqgCs0CountersGfx11,
        &kSx0CountersGfx11,
        &kTa0CountersGfx11,
        &kTa1CountersGfx11,
        &kTa2CountersGfx11,
        &kTa3CountersGfx11,
        &kTa4CountersGfx11,
        &kTa5CountersGfx11,
        &kTa6CountersGfx11,
        &kTa7CountersGfx11,
        &kTa8CountersGfx11,
        &kTa9CountersGfx11,
        &kTa10CountersGfx11,
        &kTa11CountersGfx11,
        &kTa12CountersGfx11,
        &kTa13CountersGfx11,
        &kTa14CountersGfx11,
        &kTa15CountersGfx11,
        &kTd0CountersGfx11,
        &kTd1CountersGfx11,
        &kTd2CountersGfx11,
        &kTd3CountersGfx11,
        &kTd4CountersGfx11,
        &kTd5CountersGfx11,
        &kTd6CountersGfx11,
        &kTd7CountersGfx11,
        &kTd8CountersGfx11,
        &kTd9CountersGfx11,
        &kTd10CountersGfx11,
        &kTd11CountersGfx11,
        &kTd12CountersGfx11,
        &kTd13CountersGfx11,
        &kTd14CountersGfx11,
        &kTd15CountersGfx11,
        &kTcp0CountersGfx11,
        &kTcp1CountersGfx11,
        &kTcp2CountersGfx11,
        &kTcp3CountersGfx11,
        &kTcp4CountersGfx11,
        &kTcp5CountersGfx11,
        &kTcp6CountersGfx11,
        &kTcp7CountersGfx11,
        &kTcp8CountersGfx11,
        &kTcp9CountersGfx11,
        &kTcp10CountersGfx11,
        &kTcp11CountersGfx11,
        &kTcp12CountersGfx11,
        &kTcp13CountersGfx11,
        &kTcp14CountersGfx11,
        &kTcp15CountersGfx11,
        &kGcea0CountersGfx11,
        &kGcea1CountersGfx11,
        &kGcea2CountersGfx11,
        &kGcea3CountersGfx11,
        &kGcea4CountersGfx11,
        &kGcea5CountersGfx11,
        &kGcea6CountersGfx11,
        &kGcea7CountersGfx11,
        &kGcea8CountersGfx11,
        &kGcea9CountersGfx11,
        &kGcea10CountersGfx11,
        &kGcea11CountersGfx11,
        &kGcea12CountersGfx11,
        &kGcea13CountersGfx11,
        &kGcea14CountersGfx11,
        &kGcea15CountersGfx11,
        &kGl1c0CountersGfx11,
        &kGl2c0CountersGfx11,
        &kGl2c1CountersGfx11,
        &kGl2c2CountersGfx11,
        &kGl2c3CountersGfx11,
        &kGl2c4CountersGfx11,
        &kGl2c5CountersGfx11,
        &kGl2c6CountersGfx11,
        &kGl2c7CountersGfx11,
        &kGl2c8CountersGfx11,
        &kGl2c9CountersGfx11,
        &kGl2c10CountersGfx11,
        &kGl2c11CountersGfx11,
        &kGl2c12CountersGfx11,
        &kGl2c13CountersGfx11,
        &kGl2c14CountersGfx11,
        &kGl2c15CountersGfx11,
        &kGl2c16CountersGfx11,
        &kGl2c17CountersGfx11,
        &kGl2c18CountersGfx11,
        &kGl2c19CountersGfx11,
        &kGl2c20CountersGfx11,
        &kGl2c21CountersGfx11,
        &kGl2c22CountersGfx11,
        &kGl2c23CountersGfx11,
        &kSqwgp0CountersGfx11,
    };


    std::vector<GpaCounterGroupDesc> kHwClGroupsGfx11 = {
        {0, "CB0", 0, 314, 4, 0},
        {1, "CB1", 1, 314, 4, 0},
        {2, "CB2", 2, 314, 4, 0},
        {3, "CB3", 3, 314, 4, 0},
        {4, "CPF", 0, 44, 2, 0},
        {5, "DB0", 0, 388, 4, 0},
        {6, "DB1", 1, 388, 4, 0},
        {7, "DB2", 2, 388, 4, 0},
        {8, "DB3", 3, 388, 4, 0},
        {9, "GRBM", 0, 50, 2, 0},
        {10, "GRBMSE", 0, 21, 1, 0},
        {11, "PA_SU", 0, 311, 4, 0},
        {12, "PA_SC0", 0, 665, 8, 0},
        {13, "PA_SC1", 1, 665, 8, 0},
        {14, "SPI", 0, 284, 6, 0},
        {15, "SQG", 0, 37, 8, 0},
        {16, "SQG_ES", 0, 37, 8, 0},
        {17, "SQG_GS", 0, 37, 8, 0},
        {18, "SQG_VS", 0, 37, 8, 0},
        {19, "SQG_PS", 0, 37, 8, 0},
        {20, "SQG_LS", 0, 37, 8, 0},
        {21, "SQG_HS", 0, 37, 8, 0},
        {22, "SQG_CS", 0, 37, 8, 0},
        {23, "SX", 0, 82, 4, 0},
        {24, "TA0", 0, 236, 2, 0},
        {25, "TA1", 1, 236, 2, 0},
        {26, "TA2", 2, 236, 2, 0},
        {27, "TA3", 3, 236, 2, 0},
        {28, "TA4", 4, 236, 2, 0},
        {29, "TA5", 5, 236, 2, 0},
        {30, "TA6", 6, 236, 2, 0},
        {31, "TA7", 7, 236, 2, 0},
        {32, "TA8", 8, 236, 2, 0},
        {33, "TA9", 9, 236, 2, 0},
        {34, "TA10", 10, 236, 2, 0},
        {35, "TA11", 11, 236, 2, 0},
        {36, "TA12", 12, 236, 2, 0},
        {37, "TA13", 13, 236, 2, 0},
        {38, "TA14", 14, 236, 2, 0},
        {39, "TA15", 15, 236, 2, 0},
        {40, "TD0", 0, 197, 2, 0},
        {41, "TD1", 1, 197, 2, 0},
        {42, "TD2", 2, 197, 2, 0},
        {43, "TD3", 3, 197, 2, 0},
        {44, "TD4", 4, 197, 2, 0},
        {45, "TD5", 5, 197, 2, 0},
        {46, "TD6", 6, 197, 2, 0},
        {47, "TD7", 7, 197, 2, 0},
        {48, "TD8", 8, 197, 2, 0},
        {49, "TD9", 9, 197, 2, 0},
        {50, "TD10", 10, 197, 2, 0},
        {51, "TD11", 11, 197, 2, 0},
        {52, "TD12", 12, 197, 2, 0},
        {53, "TD13", 13, 197, 2, 0},
        {54, "TD14", 14, 197, 2, 0},
        {55, "TD15", 15, 197, 2, 0},
        {56, "TCP0", 0, 78, 4, 0},
        {57, "TCP1", 1, 78, 4, 0},
        {58, "TCP2", 2, 78, 4, 0},
        {59, "TCP3", 3, 78, 4, 0},
        {60, "TCP4", 4, 78, 4, 0},
        {61, "TCP5", 5, 78, 4, 0},
        {62, "TCP6", 6, 78, 4, 0},
        {63, "TCP7", 7, 78, 4, 0},
        {64, "TCP8", 8, 78, 4, 0},
        {65, "TCP9", 9, 78, 4, 0},
        {66, "TCP10", 10, 78, 4, 0},
        {67, "TCP11", 11, 78, 4, 0},
        {68, "TCP12", 12, 78, 4, 0},
        {69, "TCP13", 13, 78, 4, 0},
        {70, "TCP14", 14, 78, 4, 0},
        {71, "TCP15", 15, 78, 4, 0},
        {72, "GDS", 0, 148, 4, 0},
        {73, "CPG", 0, 92, 2, 0},
        {74, "CPC", 0, 56, 2, 0},
        {75, "ATC", 0, 1, 1, 0},
        {76, "ATCL2", 0, 1, 1, 0},
        {77, "GCVML2", 0, 91, 8, 0},
        {78, "GCEA0", 0, 98, 2, 0},
        {79, "GCEA1", 1, 98, 2, 0},
        {80, "GCEA2", 2, 98, 2, 0},
        {81, "GCEA3", 3, 98, 2, 0},
        {82, "GCEA4", 4, 98, 2, 0},
        {83, "GCEA5", 5, 98, 2, 0},
        {84, "GCEA6", 6, 98, 2, 0},
        {85, "GCEA7", 7, 98, 2, 0},
        {86, "GCEA8", 8, 98, 2, 0},
        {87, "GCEA9", 9, 98, 2, 0},
        {88, "GCEA10", 10, 98, 2, 0},
        {89, "GCEA11", 11, 98, 2, 0},
        {90, "GCEA12", 12, 98, 2, 0},
        {91, "GCEA13", 13, 98, 2, 0},
        {92, "GCEA14", 14, 98, 2, 0},
        {93, "GCEA15", 15, 98, 2, 0},
        {94, "RPB", 0, 64, 4, 0},
        {95, "RMI0", 0, 139, 2, 0},
        {96, "RMI1", 1, 139, 2, 0},
        {97, "GE", 0, 40, 4, 0},
        {98, "GL1A", 0, 24, 4, 0},
        {99, "GL1C", 0, 84, 4, 0},
        {100, "GL1CG0", 0, 1, 1, 0},
        {101, "GL1CG1", 1, 1, 1, 0},
        {102, "GL1CG2", 2, 1, 1, 0},
        {103, "GL1CG3", 3, 1, 1, 0},
        {104, "GL2A0", 0, 108, 4, 0},
        {105, "GL2A1", 1, 108, 4, 0},
        {106, "GL2A2", 2, 108, 4, 0},
        {107, "GL2A3", 3, 108, 4, 0},
        {108, "GL2C0", 0, 259, 4, 0},
        {109, "GL2C1", 1, 259, 4, 0},
        {110, "GL2C2", 2, 259, 4, 0},
        {111, "GL2C3", 3, 259, 4, 0},
        {112, "GL2C4", 4, 259, 4, 0},
        {113, "GL2C5", 5, 259, 4, 0},
        {114, "GL2C6", 6, 259, 4, 0},
        {115, "GL2C7", 7, 259, 4, 0},
        {116, "GL2C8", 8, 259, 4, 0},
        {117, "GL2C9", 9, 259, 4, 0},
        {118, "GL2C10", 10, 259, 4, 0},
        {119, "GL2C11", 11, 259, 4, 0},
        {120, "GL2C12", 12, 259, 4, 0},
        {121, "GL2C13", 13, 259, 4, 0},
        {122, "GL2C14", 14, 259, 4, 0},
        {123, "GL2C15", 15, 259, 4, 0},
        {124, "GL2C16", 16, 259, 4, 0},
        {125, "GL2C17", 17, 259, 4, 0},
        {126, "GL2C18", 18, 259, 4, 0},
        {127, "GL2C19", 19, 259, 4, 0},
        {128, "GL2C20", 20, 259, 4, 0},
        {129, "GL2C21", 21, 259, 4, 0},
        {130, "GL2C22", 22, 259, 4, 0},
        {131, "GL2C23", 23, 259, 4, 0},
        {132, "CHA", 0, 40, 4, 0},
        {133, "CHC", 0, 44, 4, 0},
        {134, "CHCG", 0, 44, 4, 0},
        {135, "GUS", 0, 176, 2, 0},
        {136, "GCR", 0, 155, 2, 0},
        {137, "PA_PH", 0, 1024, 8, 0},
        {138, "UTCL1", 0, 66, 2, 0},
        {139, "SQWGP", 0, 512, 8, 0},
    };

    GpaCounterGroupExposedCounterDesc kHwClExposedCountersByGroupGfx11[] = {
        {0, 0, {5, 19, 21, 30, 32}},
        {1, 314, {5, 19, 21, 30, 32}},
        {2, 628, {5, 19, 21, 30, 32}},
        {3, 942, {5, 19, 21, 30, 32}},
        {4, 1256, {0, 24}},
        {5, 1300, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {6, 1688, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {7, 2076, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {8, 2464, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {9, 2852, {0, 2}},
        {11, 2923, {14, 21, 54, 55, 56, 57, 61, 62, 73, 74, 105, 109}},
        {12, 3234, {159, 235, 259}},
        {13, 3899, {159, 235, 259}},
        {14, 4564, {2, 5, 22, 27, 38, 39, 42, 46, 47, 50, 57, 58, 59, 60, 73, 74, 75, 76}},
        {15, 4848, {20, 21, 24}},
        {16, 4885, {20, 21, 24}},
        {17, 4922, {20, 21, 24}},
        {18, 4959, {20, 21, 24}},
        {19, 4996, {20, 21, 24}},
        {20, 5033, {20, 21, 24}},
        {21, 5070, {20, 21, 24}},
        {22, 5107, {20, 21, 24}},
        {23, 5144, {12, 14, 17, 19, 22, 24, 27, 29}},
        {24, 5226, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {25, 5462, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {26, 5698, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {27, 5934, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {28, 6170, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {29, 6406, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {30, 6642, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {31, 6878, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {32, 7114, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {33, 7350, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {34, 7586, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {35, 7822, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {36, 8058, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {37, 8294, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {38, 8530, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {39, 8766, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {40, 9002, {82, 116, 117, 118}},
        {41, 9199, {82, 116, 117, 118}},
        {42, 9396, {82, 116, 117, 118}},
        {43, 9593, {82, 116, 117, 118}},
        {44, 9790, {82, 116, 117, 118}},
        {45, 9987, {82, 116, 117, 118}},
        {46, 10184, {82, 116, 117, 118}},
        {47, 10381, {82, 116, 117, 118}},
        {48, 10578, {82, 116, 117, 118}},
        {49, 10775, {82, 116, 117, 118}},
        {50, 10972, {82, 116, 117, 118}},
        {51, 11169, {82, 116, 117, 118}},
        {52, 11366, {82, 116, 117, 118}},
        {53, 11563, {82, 116, 117, 118}},
        {54, 11760, {82, 116, 117, 118}},
        {55, 11957, {82, 116, 117, 118}},
        {56, 12154, {9, 17, 39}},
        {57, 12232, {9, 17, 39}},
        {58, 12310, {9, 17, 39}},
        {59, 12388, {9, 17, 39}},
        {60, 12466, {9, 17, 39}},
        {61, 12544, {9, 17, 39}},
        {62, 12622, {9, 17, 39}},
        {63, 12700, {9, 17, 39}},
        {64, 12778, {9, 17, 39}},
        {65, 12856, {9, 17, 39}},
        {66, 12934, {9, 17, 39}},
        {67, 13012, {9, 17, 39}},
        {68, 13090, {9, 17, 39}},
        {69, 13168, {9, 17, 39}},
        {70, 13246, {9, 17, 39}},
        {71, 13324, {9, 17, 39}},
        {78, 13791, {55, 57}},
        {79, 13889, {55, 57}},
        {80, 13987, {55, 57}},
        {81, 14085, {55, 57}},
        {82, 14183, {55, 57}},
        {83, 14281, {55, 57}},
        {84, 14379, {55, 57}},
        {85, 14477, {55, 57}},
        {86, 14575, {55, 57}},
        {87, 14673, {55, 57}},
        {88, 14771, {55, 57}},
        {89, 14869, {55, 57}},
        {90, 14967, {55, 57}},
        {91, 15065, {55, 57}},
        {92, 15163, {55, 57}},
        {93, 15261, {55, 57}},
        {99, 15765, {14, 18}},
        {108, 16285, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {109, 16544, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {110, 16803, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {111, 17062, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {112, 17321, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {113, 17580, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {114, 17839, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {115, 18098, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {116, 18357, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {117, 18616, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {118, 18875, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {119, 19134, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {120, 19393, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {121, 19652, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {122, 19911, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {123, 20170, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {124, 20429, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {125, 20688, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {126, 20947, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {127, 21206, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {128, 21465, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {129, 21724, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {130, 21983, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {131, 22242, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {139, 24050, {4, 5, 8, 29, 54, 56, 57, 58, 59, 62, 66, 67, 80, 103, 256, 269, 270, 271, 272, 293, 294, 295, 296}},
    };

    GpaPaddedCounterDesc kClPaddedCounterByGroupGfx11[] = {
    {}
    };

    GpaSqCounterGroupDesc kHwClSqGroupsGfx11[] = {
        {15, 0, kSqAll},
        {16, 0, kSqEs},
        {17, 0, kSqGs},
        {18, 0, kSqVs},
        {19, 0, kSqPs},
        {20, 0, kSqLs},
        {21, 0, kSqHs},
        {22, 0, kSqCs},
        {139, 0, kSqAll},
    };


    unsigned int kHwClSqIsolatedGroupsGfx11[] = {
        24, // Ta
        25, // Ta
        26, // Ta
        27, // Ta
        28, // Ta
        29, // Ta
        30, // Ta
        31, // Ta
        32, // Ta
        33, // Ta
        34, // Ta
        35, // Ta
        36, // Ta
        37, // Ta
        38, // Ta
        39, // Ta
        40, // Td
        41, // Td
        42, // Td
        43, // Td
        44, // Td
        45, // Td
        46, // Td
        47, // Td
        48, // Td
        49, // Td
        50, // Td
        51, // Td
        52, // Td
        53, // Td
        54, // Td
        55, // Td
        56, // Tcp
        57, // Tcp
        58, // Tcp
        59, // Tcp
        60, // Tcp
        61, // Tcp
        62, // Tcp
        63, // Tcp
        64, // Tcp
        65, // Tcp
        66, // Tcp
        67, // Tcp
        68, // Tcp
        69, // Tcp
        70, // Tcp
        71, // Tcp
    };

    const std::set<unsigned int> kHwClTimestampBlockIdsGfx11 =       {}; ///< Timestamp block id's for CL for gfx11 family
    const std::set<unsigned int> kHwClTimeCounterIndicesGfx11 =      {}; ///< Timestamp counter indices for CL for gfx11 family
    const unsigned int           kHwClGroupCountGfx11                = static_cast<unsigned int>(kHwClGroupsGfx11.size());
    const unsigned int           kHwClExposedCountersGroupCountGfx11 = 113;
    const unsigned int           kClPaddedCounterGroupCountGfx11 = 0;
    const unsigned int           kHwClSqGroupCountGfx11              = sizeof(kHwClSqGroupsGfx11) / sizeof(GpaSqCounterGroupDesc);
    const unsigned int           kHwClSqIsolatedGroupCountGfx11      = sizeof(kHwClSqIsolatedGroupsGfx11) / sizeof(unsigned int);
} //  namespace counter_cl_gfx11

// clang-format on

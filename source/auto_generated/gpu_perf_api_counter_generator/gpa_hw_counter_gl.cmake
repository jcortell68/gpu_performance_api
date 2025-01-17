## Copyright (c) 2022 Advanced Micro Devices, Inc. All rights reserved.
cmake_minimum_required(VERSION 3.5.1)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(HW_COUNTER_HEADERS_GL
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_gl_gfx10.h
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_gl_gfx103.h
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_gl_gfx8.h
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_gl_gfx9.h
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_oglp_gfx10.h
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_oglp_gfx103.h
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_oglp_gfx11.h
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_oglp_gfx8.h
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_oglp_gfx9.h)

set(HW_COUNTER_SRC_GL
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_gl_gfx10.cc
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_gl_gfx103.cc
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_gl_gfx8.cc
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_gl_gfx9.cc
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_oglp_gfx10.cc
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_oglp_gfx103.cc
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_oglp_gfx11.cc
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_oglp_gfx8.cc
${CMAKE_CURRENT_LIST_DIR}/gpa_hw_counter_oglp_gfx9.cc)


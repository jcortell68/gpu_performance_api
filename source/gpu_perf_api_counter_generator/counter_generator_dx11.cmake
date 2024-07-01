## Copyright (c) 2018-2023 Advanced Micro Devices, Inc. All rights reserved.
cmake_minimum_required(VERSION 3.10)

set(DEPTH "../../")

set(GPA_PROJECT_NAME GPUPerfAPICounterGenerator-DX11)
set(ProjectName ${GPA_PROJECT_NAME})

set(CMAKE_INCLUDE_CURRENT_DIR ON)
include(${GPA_CMAKE_MODULES_DIR}/common.cmake)
include(${CMAKE_COMMON_SRC_GLOBAL_AMD_DX_EXT})

set(COUNTER_GENERATOR_HEADERS_DX11
    gpa_counter_generator_dx11.h
    gpa_counter_generator_dx11_base.h)

set(COUNTER_GENERATOR_SRC_DX11
    gpa_counter_generator_dx11.cc
    gpa_counter_generator_dx11_base.cc)

set(COUNTER_SCHEDULER_HEADERS_DX11
    gpa_counter_scheduler_dx11.h)

set(COUNTER_SCHEDULER_SRC_DX11
    gpa_counter_scheduler_dx11.cc)

if(EXISTS ${GPA_AUTOGEN_SRC_COUNTER_GENERATOR})
    include(${GPA_AUTOGEN_SRC_COUNTER_GENERATOR}/gpa_hw_counter_dx11.cmake)
    include(${GPA_AUTOGEN_SRC_COUNTER_GENERATOR}/public_counter_definitions_dx11.cmake)

    set(API_HEADER_FILES ${HW_COUNTER_HEADERS_DX11} ${PUBLIC_COUNTER_DEF_HEADERS_DX11} ${ADDITIONAL_COUNTER_DEF_HEADERS_DX11})
    set(API_SOURCE_FILES ${HW_COUNTER_SRC_DX11} ${PUBLIC_COUNTER_DEF_SRC_DX11} ${ADDITIONAL_COUNTER_DEF_SRC_DX11})

    if(WIN32)
        source_group("Source Files\\${HARDWARE_COUNTER_VS_FILTER}\\AutoGenerated" FILES ${HW_COUNTER_HEADERS_DX11} ${HW_COUNTER_SRC_DX11})
        source_group("Source Files\\${DERIVED_COUNTER_VS_FILTER}\\AutoGenerated" FILES ${PUBLIC_COUNTER_DEF_HEADERS_DX11}
                                                                                       ${ADDITIONAL_COUNTER_DEF_HEADERS_DX11}
                                                                                       ${PUBLIC_COUNTER_DEF_SRC_DX11}
                                                                                       ${ADDITIONAL_COUNTER_DEF_SRC_DX11})
    endif()
endif()

set(SOURCES ${COUNTER_GENERATOR_HEADERS_DX11}
            ${COUNTER_GENERATOR_SRC_DX11}
            ${COUNTER_SCHEDULER_HEADERS_DX11}
            ${COUNTER_SCHEDULER_SRC_DX11}
            ${API_HEADER_FILES}
            ${API_SOURCE_FILES}
            ${ADDITIONAL_COUNTERS_DX11})

if(WIN32)
    add_compile_options(/bigobj)
 else()
     add_compile_options(-Wno-write-strings)
 endif()

ADD_STATIC_LIBRARY(${GPA_PROJECT_NAME} ${SOURCES})
ADD_LINKER_FLAGS()
target_link_libraries(${GPA_PROJECT_NAME} GPUPerfAPICounterGenerator-Common)
target_include_directories(${GPA_PROJECT_NAME} PUBLIC ${ADDITIONAL_INCLUDE_DIRECTORIES})

if(WIN32)
        source_group("Source Files\\${COUNTER_GENERATOR_VS_FILTER}" FILES ${COUNTER_GENERATOR_HEADERS_DX11} ${COUNTER_GENERATOR_SRC_DX11})
        source_group("Source Files\\${COUNTER_SCHEDULER_VS_FILTER}" FILES ${COUNTER_SCHEDULER_HEADERS_DX11} ${COUNTER_SCHEDULER_SRC_DX11})
endif()

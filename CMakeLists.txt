cmake_minimum_required(VERSION 3.16...3.25)


add_library(video_render SHARED)

if(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()

add_subdirectory(deps)



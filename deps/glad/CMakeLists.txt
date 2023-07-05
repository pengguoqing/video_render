cmake_minimum_required(VERSION 3.16...3.25)

project(glad)

find_package(OpenGL REQUIRED)

add_library(${PROJECT_NAME} STATIC)
target_sources(${PROJECT_NAME}  PRIVATE src/glad.c include/glad/glad.h)

target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_link_libraries(${PROJECT_NAME} PUBLIC OpenGL::GL)
target_compile_definitions(${PROJECT_NAME} PRIVATE UNICODE _UNICODE _CRT_SECURE_NO_WARNINGS _CRT_NONSTDC_NO_WARNINGS)

if(OS_WINDOWS)
  target_sources(${PROJECT_NAME} PRIVATE src/glad_wgl.c include/glad/glad_wgl.h)
elseif(OS_LINUX OR OS_FREEBSD)
  if(TARGET OpenGL::EGL)
    target_sources(${PROJECT_NAME} PRIVATE src/glad_egl.c include/EGL/eglplatform.h include/glad/glad_egl.h)
    target_link_libraries(${PROJECT_NAME} PRIVATE OpenGL::EGL)
  endif()
endif()

set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER deps POSITION_INDEPENDENT_CODE TRUE)
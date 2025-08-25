cmake_minimum_required(VERSION 3.31)
project(assm C)

set(CMAKE_C_STANDARD 23)

add_executable(assm main.c)

# Detect the platform and set a specific macro
if(WIN32)
    # This defines PLATFORM_WINDOWS for all sources in my_app
    target_compile_definitions(assm PRIVATE PLATFORM_WINDOWS)
    message(STATUS "Configuring for Windows")
elseif(APPLE)
    # This defines PLATFORM_MACOS
    target_compile_definitions(assm PRIVATE PLATFORM_MACOS)
    message(STATUS "Configuring for macOS")
elseif(UNIX AND NOT APPLE)
    # This defines PLATFORM_LINUX (catches Linux but not macOS)
    target_compile_definitions(assm PRIVATE PLATFORM_LINUX)
    message(STATUS "Configuring for Linux")
else()
    message(WARNING "Unsupported platform!")
endif()
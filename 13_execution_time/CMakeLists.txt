cmake_minimum_required(VERSION 3.5.1)
# Project name
project(marsvin_bin LANGUAGES CXX)
# Link source code to SOURCE variable
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)
# Add source code to executable
add_executable(${PROJECT_NAME} ${SOURCES})


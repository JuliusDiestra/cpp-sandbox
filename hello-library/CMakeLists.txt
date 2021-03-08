cmake_minimum_required(VERSION 3.5.1)
# Project name
project(hello_library LANGUAGES CXX)
# Link source code to SOURCE variable
set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/hello.cpp
)
# Add source code to executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Build library
add_subdirectory(lib)

# Add include directory
target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(${PROJECT_NAME}
    libhello
)


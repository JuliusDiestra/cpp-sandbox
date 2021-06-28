project(libhello)

set(SOURCES_LIB 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/helloLib.cpp)

add_library(${PROJECT_NAME} SHARED ${SOURCES_LIB})

target_include_directories(${PROJECT_NAME}
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

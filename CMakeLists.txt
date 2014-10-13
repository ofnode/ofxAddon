cmake_minimum_required(VERSION 2.8)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../of")

project(ofxAddon)
set(BIN ofxAddon)

include(openFrameworks)

set(SOURCES
    src/ofxAddon.cpp
)

add_library(
    ${BIN}
    STATIC
    ${SOURCES}
)

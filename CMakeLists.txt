cmake_minimum_required(VERSION 3.12)

project(QMLTemplate
        VERSION 0.0.1
        DESCRIPTION "Simple template for C++ QML based desktop application"
)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY AETERNA_PROJECT QMLTemplate)
add_subdirectory(QMLTemplate)

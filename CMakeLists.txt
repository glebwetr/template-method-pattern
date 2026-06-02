cmake_minimum_required(VERSION 3.10)

project(TemplateMethod VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(template_method main.cpp)

target_include_directories(template_method PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS template_method DESTINATION bin)

enable_testing()

add_executable(test_template_method test.cpp)

target_include_directories(test_template_method PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

add_test(NAME TemplateMethodTest COMMAND test_template_method)

set(CPACK_GENERATOR "DEB")

set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Gleb Wetr <glebwtr@example.com>")

set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})

set(CPACK_PACKAGE_FILE_NAME "${PROJECT_NAME}-${PROJECT_VERSION}-Linux")

include(CPack)


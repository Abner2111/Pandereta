cmake_minimum_required (VERSION 3.19)

include(pico_sdk_import.cmake)

project(servo)

pico_sdk_init()


add_executable(servo servo.c)


pico_add_extra_outputs(servo)


target_link_libraries(servo pico_stdlib)
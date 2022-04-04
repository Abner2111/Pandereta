cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)

project(Tambourduine)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(PICO_EXAMPLES_PATH ${PROJECT_SOURCE_DIR})

pico_sdk_init()

include(example_auto_set_url.cmake)
target_link_libraries(tambourduine PRIVATE pico_stdlib hardware_pwm pico_servo)
pico_enable_stdio_usb(tambourduine 1)
pico_enable_stdio_uart(tambourduine 0)
add_subdirectory(Tambourduine)
add_subdirectory(servo)
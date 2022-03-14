add_executable(tambourduine main.c tambourduine.c)

target_link_libraries(tambourduine PRIVATE pico_stdlib hardware_pwm pico_servo)

pico_add_extra_outputs(tambourduine)

example_auto_set_url(tambourduine)
cmake_minimum_required(VERSION 2.8.3)
project(fsm_example)

set(CMAKE_CXX_STANDARD 11)

# detect operating system and host processor
message(STATUS "We are on a ${CMAKE_SYSTEM_NAME} system")
message(STATUS "The host processor is ${CMAKE_HOST_SYSTEM_PROCESSOR}")

include_directories("include/")

add_library(${PROJECT_NAME}_ConcreteLightStates "src/ConcreteLightStates.cpp")

add_library(${PROJECT_NAME}_Light "src/Light.cpp")
target_link_libraries(${PROJECT_NAME}_Light
    ${PROJECT_NAME}_ConcreteLightStates
)

add_executable(${PROJECT_NAME} "src/main.cpp")
target_link_libraries(${PROJECT_NAME}
    ${PROJECT_NAME}_ConcreteLightStates
    ${PROJECT_NAME}_Light
)
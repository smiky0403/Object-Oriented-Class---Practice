cmake_minimum_required(VERSION 3.0.0)
project(oop_target VERSION 0.1.0)

include(CTest)
enable_testing()

file(GLOB oop_practice_SRC
     "*.cpp"
)

add_executable(oop_target ${oop_practice_SRC})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

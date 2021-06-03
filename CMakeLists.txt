cmake_minimum_required(VERSION 3.10)
project(functions-c)

add_subdirectory(include)
add_subdirectory(src)

add_executable(functions_c ${SOURCES} ${HEADERS})

IF (NOT WIN32)
  target_link_libraries(functions_c m)
ENDIF()

target_include_directories(functions_c PRIVATE include)
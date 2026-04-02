cmake_minimum_required(VERSION 3.30)

project(test3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})

find_package(Boost COMPONENTS iostreams filesystem REQUIRED)

add_executable(${PROJECT_NAME}
  main.cpp
  random_walk.cpp
)

target_link_libraries(${PROJECT_NAME}
  Boost::iostreams
  Boost::filesystem
)


cmake_minimum_required(VERSION 3.28)
project(ActivityTracker)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(test)

set(SOURCE_FILES Data.h Register.h Activity.h)


add_executable(ActivityTracker main.cpp Data.cpp
        test/runAllTests.cpp)
# add_library(core ${SOURCE_FILES})

# target_link_libraries(ActivityTracker core)

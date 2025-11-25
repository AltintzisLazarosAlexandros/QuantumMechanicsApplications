cmake_minimum_required(VERSION 3.10)
project(QuantumMechanicsApplications)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Find all required packages
find_package(Eigen3 REQUIRED NO_MODULE)
find_package(Boost REQUIRED)
find_package(GSL REQUIRED)

# QuEST library path (adjust if installed elsewhere)
set(QUEST_PATH "$ENV{HOME}/QuEST")
find_library(QUEST_LIB QuEST PATHS ${QUEST_PATH}/build NO_DEFAULT_PATH)
find_path(QUEST_INCLUDE QuEST.h PATHS ${QUEST_PATH}/quest/include NO_DEFAULT_PATH)

if(NOT QUEST_LIB)
    message(WARNING "QuEST library not found. Install from: https://github.com/QuEST-Kit/QuEST.git")
endif()

# Add include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add executable for test_eigen
add_executable(test_eigen src/test_eigen.cpp)
target_link_libraries(test_eigen 
    Eigen3::Eigen
    Boost::boost
    GSL::gsl
)

# Add more executables as you create new projects
# Example: Quantum Chaos project
# add_executable(quantum_chaos src/quantum_chaos/semiclassical.cpp)
# target_link_libraries(quantum_chaos 
#     Eigen3::Eigen
#     Boost::boost
#     GSL::gsl
# )

# If QuEST is found, link it
if(QUEST_LIB AND QUEST_INCLUDE)
    message(STATUS "QuEST found: ${QUEST_LIB}")
    # add_executable(quest_example src/quest_example.cpp)
    # target_include_directories(quest_example PRIVATE ${QUEST_INCLUDE})
    # target_link_libraries(quest_example ${QUEST_LIB} Eigen3::Eigen Boost::boost GSL::gsl)
endif()

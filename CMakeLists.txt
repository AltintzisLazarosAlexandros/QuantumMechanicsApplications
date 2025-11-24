cmake_minimum_required(VERSION 3.10)
project(QuantumMechanicsApplications)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Find Eigen3 package
find_package(Eigen3 REQUIRED NO_MODULE)

# Add executable for test_eigen
add_executable(test_eigen src/test_eigen.cpp)
target_link_libraries(test_eigen Eigen3::Eigen)

# Optional: Add more executables here as you create new projects
# add_executable(project_name src/project_name.cpp)
# target_link_libraries(project_name Eigen3::Eigen)

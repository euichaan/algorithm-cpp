cmake_minimum_required(VERSION 3.21)
project(algorithm)

set(CMAKE_CXX_STANDARD 17)

add_executable(algorithm algorithm.cpp)
add_executable(programmers programmers.cpp)

add_executable(primenumber primenumber.cpp)
add_executable(factorize factorize.cpp)
add_executable(recursion bigstone/recursion.cpp)
add_executable(permutation bigstone/permutation.cpp)
add_executable(permutationwithrecursion bigstone/permutationwithrecursion.cpp)
add_executable(split bigstone/split.cpp)
add_executable(combination bigstone/combination.cpp)
add_executable(combinationforloop bigstone/combinationforloop.cpp)
add_executable(typedef bigstone/basic/typedef.cpp)
add_executable(stl bigstone/basic/stl.cpp)
add_executable(pointer bigstone/basic/pointer.cpp)
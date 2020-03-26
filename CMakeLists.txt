# The main Cmake Files 


# CMAKE minimum version
cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_CXX_STANDARD 20)


# The project name and it's version 
project("TestProject" VERSION 1.0.1)

set(AUTHOR "KOUSHER ALAM PRANTO")



message(STATUS)

include_directories(
    ./src/persons/src
    ./src/services/users
)


# Added Persons library
add_subdirectory(./src/persons)

# added services library
add_subdirectory(./src/services)


# All the executable
add_executable(
    bin ./src/main.cpp
)

target_link_libraries(bin PRIVATE person)


target_link_libraries(bin PRIVATE user_service)



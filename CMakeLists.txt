# CMAKE minimum version
cmake_minimum_required(VERSION 3.0.0)

# The project name and it's version 
project("TestProject" VERSION 1.0.1)

set(AUTHOR "KOUSHER ALAM PRANTO")

message(STATUS "Hello this is a status "
    "message of project: ${PROJECT_NAME} : "
    "${PROJECT_VERSION}"
)

message(STATUS "Author: ${AUTHOR}")

# Added Persons library
add_subdirectory(./src/persons)

# added services library
add_subdirectory(./src/services)

# All the executable
add_executable(
    bin ./src/main.cpp
)


message(STATUS "Link Libraries ...")

target_link_libraries(bin PRIVATE person)
target_link_libraries(bin PRIVATE person)

target_link_libraries(bin PRIVATE user_service)


# The main Cmake Files 


# CMAKE minimum version
cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_CXX_STANDARD 20)


# The project name and it's version 
project("TestProject" VERSION 1.0.1)

set(AUTHOR "KOUSHER ALAM PRANTO")

message(STATUS "Hello this is a status "
    "message of project: ${PROJECT_NAME} : "
    "${PROJECT_VERSION}"
)

message(STATUS "Author: ${AUTHOR}")


# Foreacha and lists example in cmake
set(files "a.txt;b.txt;c.txt")
message(STATUS "ALL FILES ${files}a")

foreach(file ${files})
    message(STATUS "Fiename: ${file}")
endforeach()


message(STATUS)

include_directories(
    ./src/persons/src
    ./src/services/users
    ./libs/glfw-3.3.2.bin.MACOS/include
    ./libs/glad
    ./libs/utility
)


# Added Persons library
add_subdirectory(./src/persons)

# added services library
add_subdirectory(./src/services)


# UNIX, WIN32, WINRT, CYGWIN, APPLE are environment variables as flags set by default system
if(UNIX)
    message("This is a ${CMAKE_SYSTEM_NAME} system")
elseif(WIN32)
    message("This is a Windows System")
endif()

if(${CMAKE_SYSTEM_NAME} MATCHES Darwin)
    message("This is a ${CMAKE_SYSTEM_NAME} system")
elseif(${CMAKE_SYSTEM_NAME} MATCHES Windows)
    message("This is a Windows System")
endif()

# or use MATCHES to see if actual system name 
# Darwin is Apple's system name
if(${CMAKE_SYSTEM_NAME} MATCHES Darwin)
    add_definitions(-DCMAKE_MACRO_SAMPLE="Apple_MacOS")
elseif(${CMAKE_SYSTEM_NAME} MATCHES Windows)
    add_definitions(-DCMAKE_MACRO_SAMPLE="Windows_PC")
endif()



message(STATUS "Link Libraries ...")

set(CMAKE_INCLUDE_CURRENT_DIR ON)


# All the executable
add_executable(
    bin ./src/main.cpp

    ./libs/glad/glad.c ./libs/glad/glad.h ./libs/glad/khrplatform.h 
)

target_link_libraries(bin PRIVATE person)

target_link_libraries(bin PRIVATE ${CMAKE_SOURCE_DIR}/libs/glfw-3.3.2.bin.MACOS/lib-macos/libglfw.3.dylib)

target_link_libraries(bin PRIVATE user_service)



message(STATUS "CMAKE_SYSTEM: ${CMAKE_SYSTEM}")
message(STATUS "CMAKE_SYSTEM_NAME: ${CMAKE_SYSTEM_NAME}")
message(STATUS "CMAKE_SYSTEM_VERSION: ${CMAKE_SYSTEM_VERSION}")
message(STATUS "CMAKE_SYSTEM_PROCESSOR: ${CMAKE_SYSTEM_PROCESSOR}")
message(STATUS "CMAKE_HOST_SYSTEM_NAME: ${CMAKE_HOST_SYSTEM_NAME}")
message(STATUS "LINK_LIBRARIES: ${LINK_LIBRARIES}")
message(STATUS "INCLUDE_DIRECTORIES: ${INCLUDE_DIRECTORIES}")
message(STATUS "COMPILER_DEFINITIONS: ${COMPILER_DEFINITIONS}")

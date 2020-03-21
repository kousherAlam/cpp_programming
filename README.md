# CMake for Compiling

#### Library

#### sub directory

#### include directory for cmake

#### Using multiple compiler

-   `cmake_minimum_required`: declare the minimum version for cmake

-   `project`: specify project and version name..

-   `add_library` : add a specific library it can be SHARED OR STATIC

-   `add_subdirectory`: add sub dirctory

-   `add_executable`

-   `add_defination(-D<NAMEOFTHEDEFINATION>=<VALUE>)`:

-   `message(TYPE<STATUS|> VALUE)`:

-   `find_package(NAME version)`: to find existing package

```C
find_package(Boost 1.66)
# Check for libray, if found print message, include dirs and link libraries.
if(Boost_FOUND)
    message("Boost Found")
    include_directories(${Boost_INCLUDE_DIRS})
    target_link_libraries(cmake_hello ${Boost_LIBRARIES})
elseif(NOT Boost_FOUND)
    error("Boost Not Found")
endif()
```

When a package found, following variables will be initialized automatically.
<NAME>_FOUND : Flag to show if it is found
<NAME>_INCLUDE_DIRS or <NAME>_INCLUDES : Header directories
<NAME>_LIBRARIES or <NAME>_LIBRARIES or <NAME>_LIBS : library files
<NAME>_DEFINITIONS



## CMAKE Target for Rasbery PI 
```CMAKE
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR arm)
set(CMAKE_SYSROOT /home/devel/rasp-pi-rootfs)
set(CMAKE_STAGING_PREFIX /home/devel/stage)
set(tools /home/devel/gcc-4.7-linaro-rpi-gnueabihf)
set(CMAKE_C_COMPILER ${tools}/bin/arm-linux-gnueabihf-gcc)
set(CMAKE_CXX_COMPILER ${tools}/bin/arm-linux-gnueabihf-g++)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)
```

#### Compiler/Linker Flags with CMake
compiler and liner flags enables engineers behavior of compiler during build process for warnings, optimizations of buildings. 



#### Setting Compiler Flags
`set(CMAKE_CXX_FLAGS "-std=c++0x -Wall")`
`set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x -Wall")`
`add_compile_options("$<$<STREQUAL:$<TARGET_PROPERTY:LINKER_LANGUAGE>,CXX>:-std=c++11>")`



#### Variable to check system related info

-   CMAKE_SYSTEM
-   CMAKE_SYSTEM_NAME
-   CMAKE_SYSTEM_VERSION
-   CMAKE_SYSTEM_PROCESSOR
-   CMAKE_HOST_SYSTEM_NAME
-   `UNIX`, `WIN32`, `WINRT`, `CYGWIN`, `APPLE` are environment variables as flags set by default system

\$ cmake -H. -Bbuild

# H indicates source directory

# B indicates build directory

# For CLion, you can navigate to CLion -> Preferences -> Build, Execution and Deployment -> CMake -> Generation Path

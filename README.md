## C++ Topics 
- The history of c++ 
- how c++ work 
- compiler 
- linker 
- header file
- variables, operator, control flow in c++ 
- pointer, reference
- c pointer and memory allocation function, `malloc`, `free`, `mset`
- c array, string, and dynamic array
- c string, math and array functions  
- trinary operator in c++
- struct 
- class 
- constructor , destructor 
- `class` vs `struct` in c++ 
- enum 
- inheritance 
- visibility 
- array 
- string 
- `const` keyword in c++
- `mutable` keyword in c++ 
- `static` keyword
- `new` keyword
- instance creation in c++ 
- Implicit conversion and `explicit` keyword in cpp 
- `virtual` keyword: 
- Operator and Operator overloading
- `this` keyword
- Object Lifetime / `scope` / `heap` / `stack` 
- copying and copy constructor
- arrow operaotor `->`
- dymamic array and it's optimization `std::vector`
- C++ library, their types (static / dyamic) and integration 
- static and Dymanic library in c++
- using static and dynamic library 
- cmake, makefile what are those and why and how we should use them
- c++ multiple return value 
- template in c++ 
template is like generic , but in cpp they are evalueate on the run time. template is one of the most powerful feature in cpp. It help us to compact our code in a dramatic way. sytax of c++ template in cpp is: 
```c++
template <typename T>
T returnSame(T arg1){
    return arg1;
}
// to call the function
returnSame<int>(10);
```
template accept a type name, and it will generate the code with the appropriate type. and will compile it. 

as template get evaluated at compile time and then compile and link. so we can use it to collect data from user which is need before the compiling. Example: 

```c++
template <int Size>
class Array{
private: 
    int m_Size[Size];
public: 
    int getSize(){
        return m_Size;
    }
}

Array<5>() // now m_Size = 5;
Array<15>() // now m_Size = 15;
```



- `heap` vs `stack` in c++ programming 
- macro in c++ 
- `auto` keyword 
- std::vector
- static array in c++ 
- function pointer 
- lamda 
- namespace 
- threads 
- timing 
- std::array and multidimentional array 
- sorting 
- type punning 
- union 
- virtual destructor 
- casting in c++ 
- conditional and action breakpoint in c++
- safty in modern c++
- precompiled header 
- dynamic casting 
- structured binding
- how to deal with optional data in c++ 
- how to store any data in c++ 
- how to make c++ faster
- how to make string faster 
- benchmark and visual benchmark in c++
- singleton in c++ 
- how to make small string faster in c++ 
- Track memeory allocation 
- compiler in dept 
    - gcc
    - clang 
- cpp linker in dept 

- 




## CMake Some common commands

-   `cmake_minimum_required`: declare the minimum version for cmake

-   `project`: specify project and version name..

-   `add_library` : add a specific library it can be SHARED OR STATIC

-   `add_executable`
-   `add_subdirectory`: add sub dirctory

-   `add_defination(-D<NAMEOFTHEDEFINATION>=<VALUE>)`:

-   `message(TYPE<STATUS|> VALUE)`:

-   `find_package(NAME version)`: to find existing package

- `if,elif endif`, `foreach, endforeach`, `while, endwhie` 

- `set()` 

- `${VARIABLE_NAME}`



```C

# Check for libray, if found print message, include dirs and link libraries.
if(Boost_FOUND)
    message("Boost Found")
    include_directories(${Boost_INCLUDE_DIRS})
    target_link_libraries(cmake_hello ${Boost_LIBRARIES})
elseif(NOT Boost_FOUND)
    error("Boost Not Found")
endif()
```
### find_package(<NAME> <VERSION>)
When a package found, following variables will be initialized automatically.
- <NAME>_FOUND : Flag to show if it is found
- <NAME>_INCLUDE_DIRS or <NAME>_INCLUDES : Header directories
- <NAME>_LIBRARIES or <NAME>_LIBRARIES or <NAME>_LIBS : library files
- <NAME>_DEFINITIONS



###  CMAKE Target for Rasbery PI 
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

#### `cmake -H. -Bbuild`:  
- H indicates source directory
- B indicates build directory

For CLion, you can navigate to 
- CLion -> Preferences -> Build, Execution and Deployment -> CMake -> Generation Path



### CPP Optional
std::optional 

is use to handing data, which is may or may not be there. suppose for a file 
a file can or can not be there ...

std::optional<std::string> name = "value"



### std::variant
- get_if method 
- 

### std::get<type>(varName)

### checking type of data in cpp 

### cpp parsing data 
- text to array 
- string to bool 
- type check 
- 

### show to store any type of data in cpp 
std::any
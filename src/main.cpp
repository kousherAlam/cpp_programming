#include <iostream>
#include "./persons/src/Person.h"
#include "./persons/src/Banker.h"
#include "./services/users/user.service.h"

#ifndef CMAKE_MACRO_SAMPLE
    #define CMAKE_MACRO_SAMPLE "NO SYSTEM NAME"
#endif

int main()
{
    std::cout 
            << "System Name: "
            << CMAKE_MACRO_SAMPLE 
            << std::endl
            << std::endl;
    UserService us;

    const Person *p2 = us.getAllPerson();

    Person first = p2[0];

    Person p;
    Banker b;
    std::cout << CMAKE_MACRO_SAMPLE << std::endl;
    std::cout << "hello world ..." << std::endl;

    return 0;
}

#include <iostream>
#include "./persons/src/Person.h"
#include "./persons/src/Banker.h"
#include "./services/users/user.service.h"

int main(){
    UserService us;

    const Person * p2 = us.getAllPerson();

    Person first = p2[0];


    Person p;
    Banker b;

    std::cout << "hello world ..." << std::endl;


    return 0;
}


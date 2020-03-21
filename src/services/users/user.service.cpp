#include "user.service.h"


UserService::UserService(/* args */)
{
    std::cout << "Userservice Constructed" << std::endl;
}

UserService::~UserService()
{
    std::cout << "Userservice DeConstructed" << std::endl;
}

Person * UserService::getAllPerson(){
    std::cout << "...... Get all Person called ....." << std::endl;
    return new Person[5];
}


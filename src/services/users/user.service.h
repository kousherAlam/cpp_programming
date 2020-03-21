#ifndef USER_CONTROLLER
#define USER_CONTROLLER

#include <iostream>
#include "../../persons/src/Person.h"


class UserService
{
private:
    /* data */
public:
    UserService(/* args */);
    ~UserService();

    Person * getAllPerson();
};

#endif // !USER_CONTROLLER

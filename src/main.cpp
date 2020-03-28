#include <iostream>


class Person{
private:
    std::string name;
    std::string address;
    int age;
public:
    Person(std::string inpName, std::string inpAddress, int inpAge)
    : name(inpName), address(inpAddress), age(inpAge)
    {
        std::cout << "A person is constructed " << std::endl;
    }

    ~Person(){
        std::cout << "A Person is deleted " << std::endl;
    }


    friend std::ostream &operator<<(std::ostream &os, Person &person){
        os << "hello";
        return os;
    }
};


int main(){

    Person p("Kousher", "dhaka", 23);

    std::cout << p << std::endl;

    return 0;
}
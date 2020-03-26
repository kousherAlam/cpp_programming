/**
 * Source File for learning c++
 * in this file i will learn function pointer and Lamda
 *  
 */
#include <iostream>


void HelloWorld(){
    std::cout << "Hello world" << std::endl;
}


int main(){
    void (* pfunc)() = HelloWorld;
    pfunc();
    pfunc();
    pfunc();
    return 0;
}
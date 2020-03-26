#include <iostream>

template <typename T>
void printAnything(T value)
{
    std::cout << value << std::endl;
}

template<typename T, int size>
class Array{
private: 
    T m_Size[size];
public: 
    int getSize(){
        return m_Size;
    }
};

int main()
{
    std::cout << "C++ Template" << std::endl;
    Array<std::string, 10> arr;
    std::cout << "Array Size: " << arr.getSize() << std::endl;

    printAnything<int>(10);
    printAnything<std::string>("hello there");
    printAnything<float>(10.501f);
    printAnything<double>(10.501);
    return 0;
}



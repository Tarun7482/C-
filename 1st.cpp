#include <iostream>

namespace num{

    int num1=4;
    int num2=5;
    int num3=6;
}

int main() {

    std::cout<<"this is from num numspace\n"<<num::num1<<std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
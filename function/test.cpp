#include <iostream>
#include "calculateFunc.h"

int main()
{
    int a = 1;
    int b = 2;
    std::cout << "a + b = " << calculateAdd(a, b) << std::endl;
    std::cout << "a - b = " << calculateSub(a, b) << std::endl;
    std::cout << "a * b = " << calculateMul(a, b) << std::endl;
    std::cout << "a / b = " << calculateDiv(a, b) << std::endl;
}
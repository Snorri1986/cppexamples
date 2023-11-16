#include <iostream>

int main()
{
    int number;
    std::cout << "Number: ";
    std::cin >> number;

    int factorial = 1;
    
    for (int i = 1;i <= number;i++) {
        factorial *= i;
    }

    std::cout << number << "!= " << factorial << std::endl;

    factorial = 1;

    // reverse version
    for (int i = number;i >= 1;i--) {
        factorial *= i;
    }

    std::cout << number << "!= " << factorial << std::endl;
}


#include <iostream>

void main()
{
    // Reversing numbers
    int number,reversedNumber=0;
    std::cout << "Number: ";
    std::cin >> number;

    while (number != 0) {
        reversedNumber *= 10;
        reversedNumber += number % 10;
        number /= 10;
    }
    std::cout << "Our reversed number: " << reversedNumber << std::endl;
}


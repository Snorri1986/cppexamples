#include <iostream>

int main()
{
    // How many digits has a number

    int number;
    std::cout << "Number: ";
    std::cin >> number;

    number = std::abs(number);

    if (number == 0)
        std::cout << "You have entered 0" << std::endl;
    else {
        int counter = 0;
        while (number > 0) {
            number /= 10;
            counter++;
        }
        std::cout << "The number has: " << counter << " digits" << std::endl;
    }
}

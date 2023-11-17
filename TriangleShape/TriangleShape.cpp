#include <iostream>
#include <iomanip>

int main()
{
    // draw triangle
    int length;
    char symbol;

    std::cout << "Length: ";
    std::cin >> length;
    std::cout << "Symbol: ";
    std::cin >> symbol;

    for (int i = 1;i <= length;i++) {
        for (int j = 1;j <= i;j++) {
            std::cout<< std::setw(2) << symbol;
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << std::endl;

    // reverse version
    for (int i = length;i >= 1;i--) {
        for (int j = 1;j <= i;j++) {  // the same on reverse version
            std::cout << std::setw(2) << symbol;
        }
        std::cout << std::endl;
    }

    system("pause>0");
}


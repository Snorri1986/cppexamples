#include <iostream>
#include <iomanip> // formating and manipulate output

int main()
{
    //Draw rectangel 
    
    int height, width;
    char symbol;
    
    std::cout << "Enter height: ";
    std::cin >> height;
    
    std::cout << "Enter width: ";
    std::cin >> width;
    
    std::cout << "Enter symbol: ";
    std::cin >> symbol;

    for (int h = 0;h < height;h++) {
        for (int w = 0;w < width;w++) {
            std::cout << std::setw(5) << symbol;
        }
        std::cout << std::endl;
    }
}


#include <iostream>

void printNumbers();

void main()
{
    // in intervall from 100 - 500 print only number which dividing by 3 and 5
    printNumbers();
    std::system("pause>0");
}

void printNumbers() {
    int startNumber = 100;
    int endNumber = 500;
    int firstDivider = 3;
    int secondDivider = 5;

    while (startNumber <= endNumber) {
        if ((startNumber % firstDivider == 0) && (startNumber % secondDivider == 0))
            std::cout << "Wright number is: " << startNumber << std::endl;
        startNumber++;
    }
}



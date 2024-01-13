#include <iostream>

void printNumber(int* numberPtr) {
    std::cout << *numberPtr << std::endl;
}

void printLetter(char* letterPtr) {
    std::cout << *letterPtr << std::endl;
}

void print(void*ptr,char type) {
    switch (type) {
    case 'i': std::cout << *((int*)ptr) << std::endl; // handle int*
    case 'c': std::cout << *((char*)ptr) << std::endl; // handle char*
    }
}

int main()
{
    int number = 5;
    char letter = 'a';
    printNumber(&number);
    printLetter(&letter);
    print(&number,'i');
    print(&letter,'c');
    system("pause>0");
}



#include <iostream>

void printNumber(int* numberPtr) {
    std::cout << *numberPtr << std::endl;
}

void printChar(char* charPtr) {
    std::cout << *charPtr << std::endl;
}

void print(void* ptr, char type) {
    switch (type) {
        //handle *int
    case 'i':std::cout << *((int*)ptr) << std::endl;break;
    case 'c':std::cout << *((char*)ptr) << std::endl;break;
    }
}

int main()
{
    int number = 5;
    char letter = 'a';
    /*printNumber(&number);
    printChar(&letter);*/
    print(&number, 'i');
    print(&letter, 'c');
    
    system("pause>0");
    return 0;
}


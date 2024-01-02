#include <iostream>

int main()
{
    int size = 0;
    std::cout << "Size of array:";
    std::cin >> size;
    //int myArr[size];
    int* myArr = new int[size];

    for (int i = 0;i < size;i++) {
        std::cout << "Array[" << i << "] ";
        std::cin >> myArr[i];
    }

    for (int j = 0;j < size;j++) {
        std::cout << myArr[j];
    }

    delete[]myArr;
    myArr = NULL;
    
    system("pause>0");
}



#include <iostream>

int main()
{
    // Multiplication table
    
    for (int i = 1;i <= 10; i++) {
        for (int j = 1;j <= 10;j++) {
            std::cout << i << " * " << j << " = " << i * j << std::endl;
        }
        std::cout << std::endl;
    }

    system("pause>0");
}



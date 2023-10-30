#include <iostream>

int main()
{
    char c1, c2, c3, c4, c5;
    std::cout << "Enter 5 variables: ";
    std::cin >> c1 >> c2 >> c3 >> c4 >> c5;
    std::cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " 
        << int(c5) << std::endl;
    std::cout << "Human read message: " << char(int(c1)) << " " << char(int(c2)) << " " << char(int(c3)) 
        << " " << char(int(c4)) << " "
        << char(int(c5)) << std::endl;
    system("cls");
    system("pause>0");
}



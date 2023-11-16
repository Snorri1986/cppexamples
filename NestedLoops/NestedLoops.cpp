#include <iostream>

int main()
{
    int grade, sum = 0;
    for (int i = 0;i < 3;i++) {
        do {
            std::cout << "Enter grade: " << i + 1 << ": ";
            std::cin >> grade;
        } while (grade < 1 || grade > 5);
        sum += grade;
    }

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Avg grade: " << (float)sum/3.0 << std::endl;

    system("pause>0");
}


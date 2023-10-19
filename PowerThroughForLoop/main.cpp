#include <iostream>

using namespace std;

void showPower(int,int);

int main()
{
    int baseNumber;
    int powerNumber;
    cout << "Enter a baseNumber" << endl;
    cin >> baseNumber;
    cout << "Enter a powerNumber" << endl;
    cin >> powerNumber;
    showPower(baseNumber,powerNumber);
    return 0;
}

void showPower(int base,int power) {
    int result = 1;
    for(int i = 0; i < power; i++) {
        result = result * base;
    }
    cout << "The result is: " << result << endl;
}

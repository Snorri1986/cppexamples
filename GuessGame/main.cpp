#include <iostream>

using namespace std;

void showYourSecret(int);

int main()
{
    int userSecret;
    cout << "What is your secret number? ";
    cin >> userSecret;
    showYourSecret(userSecret);
    return 0;
}

void showYourSecret(int secretNumber) {
    int userInput;
    cout << "What a number: ";
    cin >> userInput;
    while(userInput > 0) {
       if(userInput == secretNumber) {
        cout << "Great your know the secret. The number is: " << userInput << endl;
        return;
       }
       cout << "Try again" << endl;
       cout << "What a number: ";
       cin >> userInput;
    }
}

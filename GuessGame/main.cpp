#include <iostream>

using namespace std;

void showYourSecretNoLimit(int);
void showYourSecretLimit(int);

int main()
{
    int userSecret;
    int userLimitChose;

    cout << "What is your secret number? ";
    cin >> userSecret;
    cout << "Do you want to play with guess limit or without?" << endl;
    cout << "0-without limit, 1-with limit" << endl;
    cin >> userLimitChose;

    switch(userLimitChose) {
    case 0:
           showYourSecretNoLimit(userSecret);
           break;
    case 1:
           showYourSecretLimit(userSecret);
           break;
    default:
        cout << "Wrong choice";
        return -1;
    }

    return 0;
}

void showYourSecretNoLimit(int secretNumber) {
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

void showYourSecretLimit(int secretNumber) {
    int limit = 10;
    int userTries = 0;
    cout << "You have only 10 tries" << endl;
    int userInput;
    cout << "What a number: ";
    cin >> userInput;

    while(userInput > 0) {

        if(userTries == limit) {
          cout<<"Sorry!You lose the game" << endl;
          cout<<"You do not have more tries" << endl;
          cout<<"The secretNumber was " << secretNumber << endl;
          return;
        }

        if(userInput == secretNumber) {
        cout << "Great your know the secret. The number is: " << userInput << endl;
        return;
       }

    userTries++;
    cout << "Try again" << endl;
    cout << "What a number: ";
    cin >> userInput;
    }
}


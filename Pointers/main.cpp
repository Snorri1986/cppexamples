#include <iostream>

using namespace std;

void showMemoryAddress(int num,double doubleNum,string simpleString);
void showValueTruePointer(int num,double doubleNum,string simpleString);

int main()
{
    int num = 1000;
    double pi = 3.14;
    string simpleString = "Hello";

    showMemoryAddress(num,pi,simpleString);
    showValueTruePointer(num,pi,simpleString);

    return 0;
}

void showMemoryAddress(int num,double doubleNum,string simpleString) {

    cout<<"Integer value "<< num << " has an address " << &num << endl;
    cout<<"Double value "<< doubleNum << " has an address " << &doubleNum << endl;
    cout<<"String value "<< simpleString << " has an address " << &simpleString << endl;

}

void showValueTruePointer(int num,double doubleNum,string simpleString) {

   int *pNum = &num;
   double *pDoubleNum  = &doubleNum;
   string *pSimpleString = &simpleString;

   cout << "The value num has an address " << pNum << " and value " << *pNum << endl;
   cout << "The value doubleNum has an address " << pDoubleNum << " and value " << *pDoubleNum << endl;
   cout << "The value pSimpleString has an address " << pSimpleString << " and value " << *pSimpleString << endl;
}

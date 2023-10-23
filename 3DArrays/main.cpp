#include <iostream>

#define MAX_ROWS (5)
#define MAX_COLS (2)

using namespace std;



int main()
{
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout << "Age: " << &age << endl;
    cout << "gpa: " << &gpa << endl;
    cout << "name: " << &name << endl;

    cout << pAge  << endl;
    cout << pGpa  << endl;
    cout << pName << endl;
    return 0;
}



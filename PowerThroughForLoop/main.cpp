#include <iostream>

using namespace std;

class Employee {

public:
    string name;
    string company;
    string age;

    Employee(string name, string company, string age) {
        name = name;
        company = company;
        age = age;
    };

    Employee() {

    };

    void introduceYourself() {
        cout << "Name - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
    };

 };


int main() {
    Employee employee1 = Employee("Denys","Youtube",26);
}

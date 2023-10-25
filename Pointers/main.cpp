#include <iostream>

using namespace std;

class Chef {
public:
    void makeChicken() {
        cout << "The chef makes chicken" << endl;
    }

    void makeSalad() {
        cout << "The chef makes salad" << endl;
    }

    void makeSpecialDish() {
        cout << "The chef makes bbq" << endl;
    }

    void makeSpecialDishesh() {
        cout << "The chef makes bbq" << endl;
    }

};

class ItalianChef : public Chef {
public:
    void makePasta() {
        cout << "The chef makes pasta" << endl;
    }

      void makeSpecialDishesh() {
        cout << "The chef makes Pizza" << endl;
    }

};

int main()
{
    Chef chef;
    chef.makeSpecialDishesh();

    ItalianChef italianChef;
    italianChef.makeSpecialDishesh();

    return 0;
}



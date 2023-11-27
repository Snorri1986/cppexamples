#include <iostream>

template<typename T>
void Swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    // Generics 
    int a = 5, b = 7;
    char z = 'c', x = 'd';
    std::cout << a << " - " << b << std::endl;
    Swap<int>(a, b);
    std::cout << a << " - " << b << std::endl;
    std::cout << z << " - " << x << std::endl;
    Swap<char>(z, x);
    std::cout << z << " - " << x << std::endl;
    system("pause>0");
    return 0;
}


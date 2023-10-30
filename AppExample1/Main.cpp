#include <iostream>

int main() {
	
	// swapping values of two varibles. Variant 1

	int a = 20;
	int b = 10;

	std::cout << "A before : " << a << std::endl;
	std::cout << "B before: " << b << std::endl;

	int temp = a;
	a = b;
	b = temp;

	std::cout << "A after: " << a << std::endl;
	std::cout << "B after: " << b << std::endl;

	// swapping values of two varibles. Variant 2

	int c = 40;
	int d = 50;
	
	std::cout << "C before : " << c << std::endl;
	std::cout << "D before: " << d << std::endl;

	c = c + d; // 90
	d = c - d; // 40
	c = c - d;

	std::cout << "C after: " << c << std::endl;
	std::cout << "D after: " << d << std::endl;

    system("pause>0");
	return 0;
}
#include <iostream>

int main() {

	int luckyNumbers[5];
	
	/*std::cout << luckyNumbers << std::endl;
	std::cout << &luckyNumbers[0] << std::endl;
	std::cout << luckyNumbers[2] << std::endl;
	std::cout << *(luckyNumbers+2) << std::endl;*/

	for (int i = 0;i <= 4;i++) {
		std::cout << "Numbers: ";
		std::cin >> luckyNumbers[i];
	}

	for (int i = 0;i <= 4;i++) {
		std::cout << *(luckyNumbers+i) << " ";
	}

	return 0;
	system("pause>0");
}
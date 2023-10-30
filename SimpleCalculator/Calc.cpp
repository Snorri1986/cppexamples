#include <iostream>

void mathAction(float,char,float);

void main() {
    float num1 = 0, num2 = 0;
	char operation;
	std::cout << "Enter two numbers and math operator between "<<std::endl;
	std::cin >> num1 >> operation >> num2;
	mathAction(num1, operation, num2);
}

void mathAction(float n1, char mathOper, float n2) {
	bool isNum1Int, isNum2Int;
	switch (mathOper) {
	case '+': std::cout << "Result n1 + n2 " << n1 + n2 << std::endl; break;
	case '-': std::cout << "Result n1 - n2 " << n1 - n2 << std::endl; break;
	case '*': std::cout << "Result n1 * n2 " << n1 * n2 << std::endl; break;
	case '/': std::cout << "Result n1 / n2 " << n1 / n2 << std::endl; break;
	
	case '%':
		isNum1Int = ((int)n1 == n1);
		isNum2Int = ((int)n2 == n2);
		if (isNum1Int && isNum2Int)
			std::cout << "Result n1 % n2 " << (int)n1 % (int)n2 << std::endl;
		else
			std::cout << "Not valid";
		break;

    default: std::cout << "Incorrect operator" << std::endl; break;
	}
}



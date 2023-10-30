#include <iostream>
#include <cmath>

void calculateBmi(float, float);
void printResult(float);

void main() {

	//Simple BMI Calculator
	// weight(kg) / height * height(m)
	// underweight < 18.5
	// normal weight 18.5-24.9
	// overweight > 25

	float weight = 0.0, height = 0.0;
	
	std::cout << "Enter your weight(kg),height(m:) ";
	std::cin >> weight >> height;

    calculateBmi(weight, height);
	
	system("pause > 0");
}

void calculateBmi(float custWeight, float custHeight) {
	float bmi = custWeight / std::pow(custHeight, 2);
	printResult(bmi);
}

void printResult(float custBmi) {
	
	if (custBmi < 18.5) {
		std::cout << "Your's bmi index: " << custBmi;
		std::cout << " You are underweight";
	}
	else if (custBmi > 25) {
		    std::cout << "Your's bmi index: " << custBmi;
			std::cout << " You are overweight";
	}
	else {
			std::cout << "Your's bmi index: " << custBmi;
			std::cout << " You have a normal weight";
		}
}
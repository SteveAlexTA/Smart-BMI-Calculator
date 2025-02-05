#include <iostream>
#include <cmath>
#include <iomanip>


int main()
{
	double w{}; 
	double h{}; 
	double bmi{};
	
	std::cout << "Enter your weight: "; std::cin >> w;// Weight in kg
	std::cout << "Enter your height: "; std::cin >> h; // Height in meter
	
	bmi = w / pow(h, 2); //BMI formula
	std::cout << "Your BMI is " << std::fixed << std::setprecision(2) << bmi << "\n";
			
    if (bmi <= 18.4)
		std::cout << "You are skinny as fuck " << "\n";
    else if (bmi >= 18.5 && bmi <= 24.9)
		std::cout << "You are looksmaxxing " << "\n";
    else if (bmi >= 25 && bmi <= 39.9)
		std::cout << "You are starting to get fat " << "\n";
    else
		std::cout << "You are fat as fuck " << "\n";
	return 0;
}

//celsius-to-fahrenheit.cpp -- convert celsius to fahrenheit
#include <iostream>
double celsiusToFahrenheit(double);

int main()
{
	std::cout << "Enter celsius: ";
	double celsius;
	std::cin >> celsius;
	double fahrenheit;
	fahrenheit = celsiusToFahrenheit(celsius);
	std::cout << celsius 
			  << " celsius = " 
			  << fahrenheit 
			  << " fahrenheit."
			  << std::endl;
	return 0;
}

double celsiusToFahrenheit(double celsius) 
{
	return 1.8 * celsius + 32.0;
}
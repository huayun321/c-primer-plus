//light-years-to-astronomical units -- function with return
#include <iostream>

double lightToAstronomical(double);
using namespace std;

int main()
{
	double light;
	cout << "Enter the number of light years: ";
	cin >> light;
	cout << light
	     << " light years = "
	     << lightToAstronomical(light)
	     << " astronomical units.";

	return 0;
}

double lightToAstronomical(double light)
{
	return light * 63240;
}

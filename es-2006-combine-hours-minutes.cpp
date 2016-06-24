//combine-hours-minutes.cpp -- combine hours minutes and format then print it out
#include <iostream>

void combineHM(int, int);

using namespace std;

int main()
{
	int hours;
	int minutes;

	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;

	combineHM(hours, minutes);

	return 0;
}

void combineHM(int hours, int minutes)
{
	cout << "Time: " << hours << ":" << minutes;
}
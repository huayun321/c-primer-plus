// convert-waves-to-yards.cpp -- use function convert waves to yards
#include <iostream>
int waveToYard(int);

int main() 
{
	using namespace std;

	int waves;
	cout << "Enter how many waves it is: ";
	cin >> waves;
	int yards;
	yards = waveToYard(waves);
	cout << waves << " waves = " << yards << " yards " << endl;

	return 0;
}

int waveToYard(int w) 
{
	return 200 * w;
}
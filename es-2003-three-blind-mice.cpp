//three-blind-mice.cpp -- use two function to print 
#include <iostream> //preprocess

//defined function prototype
void printThree(void);
void printSee(void);
//global namespace std
using namespace std;

int main() 
{
	printThree();
	printThree();

	printSee();
	printSee();
	
	return 0;
}

void printThree()
{
	cout << "Three blind mice" << endl;
}

void printSee()
{
	cout << "See how they run" << endl;
}
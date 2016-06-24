// convert cpp -- converts stone to pounds
#include <iostream>
int stoneToLb(int); //function prototype

int main()
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stoneToLb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;


	return 0;
}


int stoneToLb(int sts) 
{
	return 14 * sts;
}
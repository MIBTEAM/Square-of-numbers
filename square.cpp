//This program will display first 10 numbers and their squares on the screen
#include <iostream>
using namespace std;

int main()
{
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		cout << counter << "\t\t" << (counter * counter) << endl;
	}
	return 0;
}
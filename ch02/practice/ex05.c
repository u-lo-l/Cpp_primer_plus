#include <iostream>

using namespace std;
int pract05(void)
{
	cout << "05\n";
	double	Cel;
	double	Fer;
	cout << "Enter temperature(`C) : ";
	cin >> Cel;
	Fer = Cel * 1.8 + 32;
	cout << Cel << "'C is " << Fer << "`F" << endl;
	return (0);
}

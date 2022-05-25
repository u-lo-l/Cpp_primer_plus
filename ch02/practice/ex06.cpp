#include <iostream>

using namespace std;
int pract06(void)
{
	cout << "06\n";

	double	light_year;
	double	astronomical_unit;
	cout << "Enter the light years : ";
	cin >> light_year;
	astronomical_unit = light_year * 63240;
	cout << light_year << "is " << astronomical_unit << "AU" << endl;
	return (0);
}

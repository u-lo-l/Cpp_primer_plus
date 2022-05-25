#include <iostream>

using namespace std;
int	convert_age_to_month(int age)
{
	return (age * 12);
}

int pract04(void)
{
	cout << "04\n";
	int age;

	cout << "Enter your age" ;
	cin >> age;
	age = convert_age_to_month(age);
	cout << "your age is converted to" << age << "months" << endl;
	return (0);
}

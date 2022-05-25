#include <iostream>
#include "practice.h"
using namespace std;

static int convert_mile_to_kilometer(int mile)
{
	return (mile * 1.60934);
}

int pract02(void)
{
	cout << "02\n";
	int length;

	cout << "lenght : ";
	cin >> length;
	return (convert_mile_to_kilometer(length));
}

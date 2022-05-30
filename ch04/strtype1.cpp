#include <iostream>
#include <string>

int main()
{
	using namespace std;

	char	charr1[20];
	char	charr2[20] = "jaguar";
	string	str1;
	string	str2 = "panther";
	
	cout << "고양이과 :	";
	cin >> charr1;
	cout << "다른 고양이과 : ";
	cin >> str1;

	cout << charr1 << str1 << endl;
	cout << charr2[2] << endl << str2[2] << endl;
}

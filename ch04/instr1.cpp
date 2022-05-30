#include <iostream>
int main()
{
	using namespace std;
	const int ArrSize = 20;
	char name[ArrSize];
	char dessert[ArrSize];

	cout << "이름 : " ;
	cin >> name;
	cout << "디저트 : ";
	cin >> dessert;
	cout << name << "  " << dessert << endl;
	return 0;
}

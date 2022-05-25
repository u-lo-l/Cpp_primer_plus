#include <iostream>

using namespace std;
typedef struct s_time
{
	int hour;
	int minute;
}		t_time;

int pract07(void)
{
	cout << "07\n";
	t_time time;

	cout << "Enter current Hour and Minute" << endl;
	cout << "hour : ";
	cin >> time.hour;
	cout << "minute : ";
	cin >> time.minute;
	cout << "Time : " << time.hour << " : " << time.minute << endl;
	return (0);
}

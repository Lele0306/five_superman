#include <iostream>
int main()
{
	using namespace std;
	const int minute = 60;
	const int hour = 3600;
	const int day = 86400;
	unsigned int a, b, c;
	unsigned int s;
	cout << "ÊäÈëÃëÊı:";
	cin >> s;
	cout << s<<" seconds = ";
	a = s / day;
	s = s % day;
	b = s / hour;
	s = s % hour;
	c = s / minute;
	s = s % minute;
	cout << a << " days, " << b << " hours, " << c << " minutes, " << s << " seconds" << endl;
	return 0;
}
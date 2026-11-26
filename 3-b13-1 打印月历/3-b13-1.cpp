/*2651326 电信 王天宇*/
#include<iostream>
#include<limits>
#include<iomanip>
using namespace std;
int main()
{
	int y, m;
	while (1) {
		cout << "请输入年份(2000-2030)和月份(1-12) : ";
		cin >> y >> m;
		if (cin.fail()) {
			cout << "输入非法，请重新输入" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		if (y >= 2000 && y <= 2030 && m >= 1 && m <= 12) {
			break;
		}
		else {
			cout << "输入非法，请重新输入" << endl;
		}
	}
	int d;
	while (1) {
		cout << "请输入" << y << "年" << m << "月1日的星期(0-6表示星期日-星期六) : ";
		cin >> d;
		if (cin.fail()) {
			cout << "输入非法，请重新输入" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		if (d >= 0 && d <= 6) {
			break;
		}
		else {
			cout << "输入非法，请重新输入" << endl;
		}
	}

	int yk = 0;
	if ((y == 2000 || y == 2004 || y == 2008 || y == 2012 || y == 2016 || y == 2020 || y == 2024 || y == 2028) && m == 2) {
		yk = 29;
	}
	else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		yk = 31;
	}
	else if ((y != 2000 && y != 2004 && y != 2008 && y != 2012 && y != 2016 && y != 2020 && y != 2024 && y != 2028) && m == 2) {
		yk = 28;
	}
	else {
		yk = 30;
	}



	cout << endl;
	cout << y << "年" << m << "月的月历为:" << endl;
	cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;
	int x = 1;
	for (int i = 1;i <= d;i++) {
		cout << "        ";
	}
	cout << "   ";
	for (int i = 0;i <= (6 - d);i++) {
		cout << x << "       ";
		x++;
	}
	int zj = 0;
	while (1) {
		cout << endl;
		for (int i = 0;i <= 6;i++) {
			cout << setw(4) << x << "    ";
			x++;
			if (x == yk + 1) {
				zj = 1;
				break;
			}
		}
		if (zj == 1) {
			break;
		}
	}
	cout << endl;
	return 0;
}
/*2651326 电信 王天宇*/
#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;

int zeller(int y, int m, int d) {
	if (m == 1 || m == 2) {
		m = m + 12;
		y--;
	}
	int c = (y - (y % 100)) / 100;
	y = y % 100;
	int a, b, e, f;
	a = (int)(y / 4);
	b = (int)(c / 4);
	e = (int)((13 * m + 13) / 5);
	f = y + a + b - 2 * c + e + d - 1;
	if (f >= 0) {
		f = f % 7;
	}
	else {
		f = (f % 7 + 7) % 7;
	}
	return f;
}

void calendar(int y, int m, int d) {
	cout << endl;
	cout << y << "年" << m << "月" << endl;
	cout << "======================================================" << endl;
	cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;
	cout << "======================================================" << endl;

	int yk = 0;
	if (m == 2) {
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
			yk = 29;
		}
		else {
			yk = 28;
		}
	}
	else if (m == 1 || m == 3 || m == 5 || m == 7 ||
		m == 8 || m == 10 || m == 12) {
		yk = 31;
	}
	else {
		yk = 30;
	}

	int x = 1;
	for (int i = 1; i <= d; i++) {
		cout << "        ";
	}
	for (int i = 0; i <= (6 - d); i++) {
		cout << setw(4) << x << "    ";
		x++;
	}

	int zj = 0;
	while (1) {
		cout << endl;
		for (int i = 0; i <= 6; i++) {
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
	cout << "======================================================" << endl;
}

int main() 
{
	int y, m, d = 0;
	while (1) {
		cout << "请输入年[1900-2100]、月" << endl;
		cin >> y >> m;

		if (cin.fail()) {
			cout << "输入错误，请重新输入" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}

		if (y >= 1900 && y <= 2100 && m >= 1 && m <= 12) {
			break;
		}
		else if (y < 1900 || y > 2100) {
			cout << "年份不正确，请重新输入" << endl;
		}
		else if (m < 1 || m > 12) {
			cout << "月份不正确，请重新输入" << endl;
		}
	}

	d = zeller(y, m, 1);
	calendar(y, m, d);
	return 0;
}
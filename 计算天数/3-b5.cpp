/*2651326 电信 王天宇*/
#include<iostream>
using namespace std;
int main()
{
	cout << "请输入年，月，日" << endl;
	int y, m, d, a = 1, t = 0;
	cin >> y >> m >> d;
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
		a = 0;
	}
	if (m < 1 || m>12) {
		cout << "输入错误-月份不正确" << endl;
		return 0;
	}
	if (a == 0) {
		if (m == 1) {
			if (d < 1 || d > 31) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = d;
		}
		if (m == 2) {
			if (d < 1 || d > 29) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 31+d;
		}
		if (m == 3) {
			if (d < 1 || d > 31) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 60+d;
		}
		if (m == 4) {
			if (d < 1 || d > 30) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 91+d;
		}
		if (m == 5) {
			if (d < 1 || d > 31) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 121+d;
		}
		if (m == 6) {
			if (d < 1 || d > 30) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 152+d;
		}
		if (m == 7) {
			if (d < 1 || d > 31) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 182+d;
		}
		if (m == 8) {
			if (d < 1 || d > 31) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 213+d;
		}
		if (m == 9) {
			if (d < 1 || d > 30) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 244+d;
		}
		if (m == 10) {
			if (d < 1 || d > 31) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 274+d;
		}
		if (m == 11) {
			if (d < 1 || d > 30) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 305+d;
		}
		if (m == 12) {
			if (d < 1 || d > 31) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 335+d;
		}
	}
	if (a == 1) {
		if (m == 1) {
			if (d < 1 || d > 31) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = d;
		}
		if (m == 2) {
			if (d < 1 || d > 28) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 31 + d;
		}
		if (m == 3) {
			if (d < 1 || d > 31) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 59 + d;
		}
		if (m == 4) {
			if (d < 1 || d > 30) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 90 + d;
		}
		if (m == 5) {
			if (d < 1 || d > 31) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 120 + d;
		}
		if (m == 6) {
			if (d < 1 || d > 30) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 151 + d;
		}
		if (m == 7) {
			if (d < 1 || d > 31) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 181 + d;
		}
		if (m == 8) {
			if (d < 1 || d > 31) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 212 + d;
		}
		if (m == 9) {
			if (d < 1 || d > 30) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 243 + d;
		}
		if (m == 10) {
			if (d < 1 || d > 31) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 273 + d;
		}
		if (m == 11) {
			if (d < 1 || d > 30) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 304 + d;
		}
		if (m == 12) {
			if (d < 1 || d > 31) {
				cout << "输入错误-日与月的关系非法" << endl;
				return 0;
			}
			t = 334 + d;
		}
	}
	cout << y << "-" << m << "-" << d << "是" << y << "年的第" << t << "天" << endl;
	return 0;
}

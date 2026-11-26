/*2651326 电信 王天宇*/
#include<iostream>
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

int main() 
{
	int y, m, d, a = 1;
	while (1) {
		cout << "请输入年[1900-2100]、月、日：" << endl;
		cin >> y >> m >> d;   //读入x的方式必须是 cin>>int型变量，不允许其他方式
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "输入错误，请重新输入" << endl;;
			continue;
		}
		if (y < 1900 || y > 2100) {
			cout << "年份不正确，请重新输入" << endl;
			continue;
		}
		a = 1;
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
			a = 0;
		}
		if (m < 1 || m>12) {
			cout << "月份不正确，请重新输入" << endl;
			continue;
		}
		if (a == 0) {
			if (m == 1) {
				if (d < 1 || d > 31) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 2) {
				if (d < 1 || d > 29) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 3) {
				if (d < 1 || d > 31) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 4) {
				if (d < 1 || d > 30) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 5) {
				if (d < 1 || d > 31) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 6) {
				if (d < 1 || d > 30) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 7) {
				if (d < 1 || d > 31) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 8) {
				if (d < 1 || d > 31) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 9) {
				if (d < 1 || d > 30) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 10) {
				if (d < 1 || d > 31) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 11) {
				if (d < 1 || d > 30) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 12) {
				if (d < 1 || d > 31) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
		}
		if (a == 1) {
			if (m == 1) {
				if (d < 1 || d > 31) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 2) {
				if (d < 1 || d > 28) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 3) {
				if (d < 1 || d > 31) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 4) {
				if (d < 1 || d > 30) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 5) {
				if (d < 1 || d > 31) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 6) {
				if (d < 1 || d > 30) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 7) {
				if (d < 1 || d > 31) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 8) {
				if (d < 1 || d > 31) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 9) {
				if (d < 1 || d > 30) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 10) {
				if (d < 1 || d > 31) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 11) {
				if (d < 1 || d > 30) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			if (m == 12) {
				if (d < 1 || d > 31) {
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
		}
		break;
	}

	int w = zeller(y, m, d);
	switch (w) {
	case 0:
		cout << "星期日" << endl;
		break;
	case 1:
		cout << "星期一" << endl;
		break;
	case 2:
		cout << "星期二" << endl;
		break;
	case 3:
		cout << "星期三" << endl;
		break;
	case 4:
		cout << "星期四" << endl;
		break;
	case 5:
		cout << "星期五" << endl;
		break;
	case 6:
		cout << "星期六" << endl;
		break;
	default:
		break;
	}
	return 0;
}

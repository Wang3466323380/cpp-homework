/*2651326 电信 王天宇*/
#include<iostream>
#include<limits>
using namespace std;

int min(int a, int b, int c = numeric_limits<int>::max(), int d = numeric_limits<int>::max()) {
	int yk = a < b ? a : b;
	int zj = yk < c ? yk : c;
	return (zj < d ? zj : d);
}

int main()
{
	int num, a, b, c, d, m = 1;
	while (1) {
		cout << "请输入个数num及num个正整数：" << endl;
		cin >> num;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;

		}
		if ((num < 2) || (num > 4)) {
			cout << "个数输入错误" << endl;
			return 0;
		}
		if (num == 2) {
			cin >> a >> b;
			if (cin.fail() || (a <= 0) || (b <= 0)) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;

			}
			m = min(a, b);
			break;

		}
		if (num == 3) {
			cin >> a >> b >> c;
			if (cin.fail() || (a <= 0) || (b <= 0) || (c <= 0)) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;

			}
			m = min(a, b, c);
			break;

		}
		if (num == 4) {
			cin >> a >> b >> c >> d;
			if (cin.fail() || (a <= 0) || (b <= 0) || (c <= 0) || (d <= 0)) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;

			}
			m = min(a, b, c, d);
			break;


		}

	}

	cout << "min=" << m << endl;
	return 0;
}
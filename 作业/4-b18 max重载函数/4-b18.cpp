/*2651326 电信 王天宇*/
#include<iostream>
#include<limits>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int max(int a, int b, int c)
{
	return max(max(a, b), c);
}

int max(int a, int b, int c, int d)
{
	return max(max(a, b, c), d);
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
			m = max(a, b);
			break;

		}
		if (num == 3) {
			cin >> a >> b >> c;
			if (cin.fail() || (a <= 0) || (b <= 0) || (c <= 0)) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;

			}
			m = max(a, b, c);
			break;

		}
		if (num == 4) {
			cin >> a >> b >> c >> d;
			if (cin.fail() || (a <= 0) || (b <= 0) || (c <= 0) || (d <= 0)) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;

			}
			m = max(a, b, c, d);
			break;


		}

	}

	cout << "max=" << m << endl;
	return 0;
}
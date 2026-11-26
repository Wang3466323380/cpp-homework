/*2651326 电信 王天宇*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int a, yk = 1, sj = 0;
	double x = 1, y = 1;

	while (yk == 1) {
		cout << "请输入x的值[-10 ~ +65]" << endl;
		cin >> a;
		if (a < -10 || a > 65) {
			cout << "输入非法，请重新输入" << endl;
			continue;
		}
		yk = 0;
		sj = 0;
		x = 1;
		y = 1;
		while (1) {
			sj++;
			x *= a;
			x /= sj;
			if (fabs(x) < 1e-6) {
				break;
			}
			y += x;
		}
		cout << "迭代终值 n=" << sj << " x^" << sj << "/" << sj << "!=" << setprecision(10) << x << endl;
		cout << "e^" << a << "=" << setprecision(10) << y << endl;
	}
	return 0;
}
/*2651326 电信 王天宇*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	cout << "请输入三角形的两边及其夹角(角度)" << endl;
	int a, b, c;
	const double Pi = 3.14159;
	cin >> a >> b >> c;
	float d, e;
	d = Pi / 180.0 * c;
	e = sin(d);
	cout << "三角形面积为 : " << fixed << setprecision(3) << (e * a * b / 2) << endl;
	return 0;
}
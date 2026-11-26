/*2651326 电信 王天宇*/
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "请输入一个[1..30000]间的整数:" << endl;
	cin >> x;
	int a, b, c, d, e,y;
	e = x % 10;
	y = x / 10;
	d = y % 10;
	y /= 10;
	c = y % 10;
	y /= 10;
	b = y % 10;
	y /= 10;
	a = y % 10;
	cout << "万位 : " << a << endl;
	cout << "千位 : " << b << endl;
	cout << "百位 : " << c << endl;
	cout << "十位 : " << d << endl;
	cout << "个位 : " << e << endl;
	return 0;
}
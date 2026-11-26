/*2651326 电信 王天宇*/
#include<iostream>
using namespace std;
int main() 
{
	cout << "请输入[0-100亿)之间的数字" << endl;
	double z,y,t;
	cin >> z;
	unsigned int x, a, b, c, d, e, f, g, h, i, j, k, l;
	t = z / 10;
	x = (unsigned int)t;
	y = t - x;
	l = 1000 * y + 0.5;
	k = l / 10;
	j = (int)10*y;
	i = x ;
	h = x / 10;
	g = x / 100;
	f = x / 1000;
	e = x / 10000;
	d = x / 100000;
	c = x / 1000000;
	b = x / 10000000;
	a = x / 100000000;
	cout << "十亿位 : " << a % 10 << endl;
	cout << "亿位   : " << b % 10 << endl;
	cout << "千万位 : " << c % 10 << endl;
	cout << "百万位 : " << d % 10 << endl;
	cout << "十万位 : " << e % 10 << endl;
	cout << "万位   : " << f % 10 << endl;
	cout << "千位   : " << g % 10 << endl;
	cout << "百位   : " << h % 10 << endl;
	cout << "十位   : " << i % 10 << endl;
	cout << "圆     : " << j % 10 << endl;
	cout << "角     : " << k % 10 << endl;
	cout << "分     : " << l % 10 << endl;
	return 0;
}
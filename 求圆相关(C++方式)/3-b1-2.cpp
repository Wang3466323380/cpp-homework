/*2651326 电信 王天宇*/
#include <iostream>
#include<iomanip>
using namespace std;
int main() 
{
	const double Pi = 3.14159;
	double r, h;
	cout << "请输入半径和高度" << endl;
	cin >> r >> h;
	double a = 2 * Pi * r;
	double b = Pi * r * r;
	double c = 4 * Pi * r * r;
	double d = Pi * 4 / 3 * r * r * r;
	double e = Pi * r * r * h;
	cout << fixed << setprecision(2);
	cout << "圆周长" << setw(6) << ": " << a<<endl;
	cout << "圆面积" << setw(6) << ": " << b << endl;
	cout << "圆球表面积" << setw(2) << ": " << c << endl;
	cout << "圆球体积" << setw(4) << ": " << d << endl;
	cout << "圆柱体积" << setw(4) << ": " << e << endl;
	return 0;	
}
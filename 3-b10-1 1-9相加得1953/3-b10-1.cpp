/*2651326 电信 王天宇*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <windows.h> //取系统时间
using namespace std;

int main()
{
	LARGE_INTEGER tick, begin, end;

	QueryPerformanceFrequency(&tick);	//获得计数器频率
	QueryPerformanceCounter(&begin);	//获得初始硬件计数器计数

	/* 此处是你的程序开始 */
	int a1, a2, a3, a4, a5, a6, a7, a8, a9;
	int k;
	int x = 1;
	for (int i = 100;i <= 651;i++) {
		a3 = i % 10;
		a2 = ((i - a3) / 10) % 10;
		a1 = ((i - 10 * a2 - a3) / 100) % 10;
		for (int j = 1953 - 999 - i;j <= (1953 - i) / 2;j++) {
			a6 = j % 10;
			a5 = ((j - a6) / 10) % 10;
			a4 = ((j - 10 * a5 - a6) / 100) % 10;
			k = 1953 - i - j;
			a9 = k % 10;
			a8 = ((k - a9) / 10) % 10;
			a7 = ((k - 10 * a8 - a9) / 100) % 10;
			if (i < j && a1 != a2 && a1 != a3 && a1 != a4 && a1 != a5 && a1 != a6 && a1 != a7 && a1 != a8 && a1 != a9 && a2 != a3 && a2 != a4 && a2 != a5 && a2 != a6 && a2 != a7 && a2 != a8 && a2 != a9 && a3 != a4 && a3 != a5 && a3 != a6 && a3 != a7 && a3 != a8 && a3 != a9 && a4 != a5 && a4 != a6 && a4 != a7 && a4 != a8 && a4 != a9 && a5 != a6 && a5 != a7 && a5 != a8 && a5 != a9 && a6 != a7 && a6 != a8 && a6 != a9 && a7 != a8 && a7 != a9 && a8 != a9 && a1 != 0 && a2 != 0 && a3 != 0 && a4 != 0 && a5 != 0 && a6 != 0 && a7 != 0 && a8 != 0 && a9 != 0) {
				cout << "No." << setw(3) << x << " : " << i << "+" << j << "+" << k << "=1953" << endl;
				x++;
			}
		}
	}
	cout << "total="<<x - 1 << endl;
	/* 此处是你的程序结束 */

	QueryPerformanceCounter(&end);		//获得终止硬件计数器计数

	cout << "计数器频率 : " << tick.QuadPart << "Hz" << endl;
	cout << "计数器计数 : " << end.QuadPart - begin.QuadPart << endl;
	cout << setiosflags(ios::fixed) << setprecision(6) << double(end.QuadPart - begin.QuadPart) / tick.QuadPart << "秒" << endl;

	return 0;
}

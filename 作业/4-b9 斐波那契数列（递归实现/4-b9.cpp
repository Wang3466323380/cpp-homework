/*2651326 电信 王天宇*/
#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

/**
 * @brief 返回 Fibonacci 数列的第 n 项的值
 *
 * @param n 项数，有效范围 1~46
 * @return Fibonacci 数列的第 n 项的值
 *
 * @note 不允许任何形式的循环出现
 */
int fibonacci(int n)
{
	if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 1;
	}
	return (fibonacci(n - 1) + fibonacci(n - 2));
	/* 按要求完成本函数 */
}

/**
 * @brief main函数，不允许修改
 */
int main()
{
	int n, f;
	cout << "请输入Fibonacci数列的项数[1-46]" << endl;
	cin >> n;

	LARGE_INTEGER tick, begin, end;
	QueryPerformanceFrequency(&tick);	//获得时钟频率
	QueryPerformanceCounter(&begin);	//获得初始硬件定时器计数
	f = fibonacci(n);
	cout << "Fibonacci数列第" << n << "项的值 : " << f << endl;

	QueryPerformanceCounter(&end);//获得终止硬件定时器计数
	cout << "计数器频率 : " << tick.QuadPart << "Hz" << endl;
	cout << "计数器计数 : " << end.QuadPart - begin.QuadPart << endl;
	cout << setiosflags(ios::fixed) << setprecision(6) << double(end.QuadPart - begin.QuadPart) / tick.QuadPart << "秒" << endl;

	return 0;
}

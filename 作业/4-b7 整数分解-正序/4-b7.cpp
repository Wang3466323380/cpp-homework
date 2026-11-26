/*2651326 电信 王天宇*/
#include <iostream>
using namespace std;

/* ----具体要求----
   1、不允许添加其它头文件
   2、不允许定义全局变量、静态局部变量
   3、不允许添加其它函数
   4、整个程序不允许出现任何形式的循环
   --------------------------------------------------------------------- */

   /**
	* @brief 将整数 n 分解后输出
	*
	* @param n 待分解的整数
	*
	* @note 1、函数名、形参、返回类型均不准动
	*       2、不允许使用64位整数
	*/
void convert(int n)
{
	if (n == (-2147483647 - 1)) {
		cout << char('-') << " ";
		convert(-(int)(n / 10));
		cout << char('0' + 8);
		return;
	}
	if (n < 0) {
		cout << char('-') << " ";
		convert(-n);
		return;
	}
	if (n < 10) {
		cout << char('0' + n) << " ";
		return;
	}
	convert((int)(n / 10));
	cout << char('0' + (n % 10)) << " ";
}

/**
 * @brief main函数，不准动
 */
int main()
{
	int n;
	cout << "请输入一个整数" << endl;
	cin >> n; //不考虑输入错误 

	convert(n);
	cout << endl;

	return 0;
}

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
	* @brief 判断 num 是不是 base 的幂
	*
	* @param num 待判断的整数
	* @param base 幂的底数
	* @return 0 - 不是 base 的幂
	*         1 - 是 base 的幂
	*
	* @note 函数名、形参、返回类型均不准动
	*/
int is_power(int num, int base)
{
	if (num == 1) {
		return 1;
	}
	if (num == base) {
		return 1;
	}
	if (num % base == 0) {
		return is_power(num / base, base);
	}
	else {
		return 0;
	}
}

/**
 * @brief 完成输入、调用递归函数、输出
 */
int main()
{
	int num, base;
	cout << "请输入整数num及基数base" << endl;
	cin >> num >> base;
	int a = is_power(num, base);
	if (a == 1) {
		cout << num << "是" << base << "的幂" << endl;
	}
	else {
		cout << num << "不是" << base << "的幂" << endl;
	}
	return 0;
}
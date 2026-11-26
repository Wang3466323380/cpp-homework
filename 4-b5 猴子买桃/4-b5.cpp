/*2651326 电信 王天宇*/
#include <iostream>
using namespace std;

/* ----具体要求----
   1、不允许添加其它头文件
   2、不允许定义全局变量、静态局部变量
   3、不允许添加其它函数
   4、整个程序不允许出现任何形式的循环（while、do-while、for、if-goto）
   ---------------------------------------------------------------------
*/

/**
 * @brief 递归方式求第一天的桃子数量
 * @param days 第days天的桃子数为1
 * @return 第一天的桃子数量
 *
 * @note 1、函数名、形参、返回类型均不准动
 *       2、不允许出现任何形式的循环（while、do-while、for、if-goto）
 */
int peaches(int days)
{
	if (days == 1) {
		return 1;
	}
	return((peaches(days - 1) + 1) * 2);
}

/**
 * @brief main函数，不准动
 */

int main()
{
	int days;

	cout << "请输入第几天的桃子数为1" << endl;
	cin >> days;		//输入[1-30]间的正整数即可，不考虑输入错误

	cout << "第1天买的桃子数量=" << peaches(days) << endl;

	return 0;
}


/*2651326 电信 王天宇*/
#include <iostream>
#include <iomanip>
using namespace std;

/* ----具体要求----
   1、不允许添加其它头文件
   2、不允许定义全局变量、静态局部变量
   3、不允许添加其它函数
   4、main函数处理输入，允许循环
   --------------------------------------------------------------------- */

   /**
	* @brief 打印 n 层汉诺塔的移动顺序
	*
	* @param n 层数
	* @param src 起始柱
	* @param tmp 中间柱
	* @param dst 目标柱
	*
	* @note 1、函数名、形参、返回类型均不准动
	*       2、本函数不允许出现任何形式的循环
	*/
void hanoi(int n, char src, char tmp, char dst)
{
	if (n == 0) {
		return;
	}
	hanoi(n - 1, src, dst, tmp);
	cout << setw(2) << n << "# " << src << "-->" << dst << endl;
	hanoi(n - 1, tmp, src, dst);

}
/**
 * @brief 完成输入、调用递归函数
 *
 * @note 1、处理输入错误时，允许使用循环
 *       2、为了统一检查，不再允许添加其它函数（输入起始/目标柱的代码不要求统一函数处理，均直接放在main中）
 */
int main()
{
	char chu = 'A', zhong = 'A', mo = 'A';
	int ceng = 0;
	while (1) {
		cout << "请输入汉诺塔的层数(1-16)" << endl;
		cin >> ceng;
		if (ceng >= 1 && ceng <= 16) {
			cin.clear();
			while (cin.get() != '\n' && !cin.eof()) {
			}
			break;
		}
		cin.clear();
		while (cin.get() != '\n' && !cin.eof()) {
		}
	}
	while (1) {
		cout << "请输入起始柱(A-C)" << endl;
		cin >> chu;
		if ((chu == 'A') || (chu == 'a')) {
			chu = 'A';
			cin.clear();
			while (cin.get() != '\n' && !cin.eof()) {
			}
			break;
		}
		if ((chu == 'B') || (chu == 'b')) {
			chu = 'B';
			cin.clear();
			while (cin.get() != '\n' && !cin.eof()) {
			}
			break;
		}
		if ((chu == 'C') || (chu == 'c')) {
			chu = 'C';
			cin.clear();
			while (cin.get() != '\n' && !cin.eof()) {
			}
			break;
		}
		cin.clear();
		while(cin.get() != '\n' && !cin.eof()) {
		}
	}
	while (1) {
		cout << "请输入目标柱(A-C)" << endl;
		cin >> mo;
		if ((mo == 'a' || mo == 'A') && chu == 'A') {
			cout << "目标柱(A)不能与起始柱(A)相同" << endl;
			cin.clear();
			while (cin.get() != '\n' && !cin.eof()) {
			}
			continue;
		}
		if ((mo == 'b' || mo == 'B') && chu == 'B') {
			cout << "目标柱(B)不能与起始柱(B)相同" << endl;
			cin.clear();
			while (cin.get() != '\n' && !cin.eof()) {
			}
			continue;
		}
		if ((mo == 'c' || mo == 'C') && chu == 'C') {
			cout << "目标柱(C)不能与起始柱(C)相同" << endl;
			cin.clear();
			while (cin.get() != '\n' && !cin.eof()) {
			}
			continue;
		}
		if ((mo == 'A') || (mo == 'a')) {
			mo = 'A';
			cin.clear();
			while (cin.get() != '\n' && !cin.eof()) {
			}
			break;
		}
		if ((mo == 'B') || (mo == 'b')) {
			mo = 'B';
			cin.clear();
			while (cin.get() != '\n' && !cin.eof()) {
			}
			break;
		}
		if ((mo == 'C') || (mo == 'c')) {
			mo = 'C';
			cin.clear();
			while (cin.get() != '\n' && !cin.eof()) {
			}
			break;
		}
		cin.clear();
		while (cin.get() != '\n' && !cin.eof()) {
		}
	}
	if ((chu == 'A' && mo == 'B') || (chu == 'B' && mo == 'A')) {
		zhong = 'C';
	}
	if ((chu == 'A' && mo == 'C') || (chu == 'C' && mo == 'A')) {
		zhong = 'B';
	}
	if ((chu == 'B' && mo == 'C') || (chu == 'C' && mo == 'B')) {
		zhong = 'A';
	}
	cout << "移动步骤为:" << endl;
	hanoi(ceng, chu, zhong, mo);
	return 0;
}

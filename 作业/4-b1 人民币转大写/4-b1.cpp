/*2651326 电信 王天宇*/
#include <iostream>
using namespace std;

/* 可根据需要添加相应的内容 */

/**
 * @brief 输出大写中文数字
 *
 * @param num 要转换的数字，范围为 0-9
 * @param flag_of_zero 自行思考此标记的作用
 *
 * @note 除本函数外，不允许任何函数中输出“零”-“玖”!!!!!!
 */
void daxie(int num, int flag_of_zero)
{
	/* 不允许对本函数做任何修改 */
	switch (num) {
	case 0:
		if (flag_of_zero)	//此标记什么意思请自行思考
			cout << "零";
		break;
	case 1:
		cout << "壹";
		break;
	case 2:
		cout << "贰";
		break;
	case 3:
		cout << "叁";
		break;
	case 4:
		cout << "肆";
		break;
	case 5:
		cout << "伍";
		break;
	case 6:
		cout << "陆";
		break;
	case 7:
		cout << "柒";
		break;
	case 8:
		cout << "捌";
		break;
	case 9:
		cout << "玖";
		break;
	default:
		cout << "error";
		break;
	}
}

/* 可根据需要自定义其它函数(也可以不定义) */

/**
 * @brief 函数简要介绍
 *
 * @param 参数1 说明
 * @param 参数2 说明
 * @return 返回值类型
 *
 * @note 备注
 */

int main()
{
	double a;
	cout << "请输入[0-100亿)之间的数字:" << endl;
	cin >> a;
	cout << "大写结果是:" << endl;
	double b = a / 10;
	double c = b - (int)b + 0.0005;
	int shiyi = (int)(a / 1000000000) % 10;
	int yi = (int)(a / 100000000) % 10;
	int qianwan = (int)(a / 10000000) % 10;
	int baiwan = (int)(a / 1000000) % 10;
	int shiwan = (int)(a / 100000) % 10;
	int wan = (int)(a / 10000) % 10;
	int qian = (int)(a / 1000) % 10;
	int bai = (int)(a / 100) % 10;
	int shi = (int)(a / 10) % 10;
	int yuan = (int)(c * 10);
	int jiao = (int)(c * 100) % 10;
	int fen = (int)(c * 1000) % 10;

	switch (shiyi) {
	case 0:
		break;
	case 1:
		daxie(1, 0);
		break;
	case 2:
		daxie(2, 0);
		break;
	case 3:
		daxie(3, 0);
		break;
	case 4:
		daxie(4, 0);
		break;
	case 5:
		daxie(5, 0);
		break;
	case 6:
		daxie(6, 0);
		break;
	case 7:
		daxie(7, 0);
		break;
	case 8:
		daxie(8, 0);
		break;
	case 9:
		daxie(9, 0);
		break;
	}
	if (shiyi) {
		cout << "拾";
	}

	switch (yi) {
	case 0:
		break;
	case 1:
		daxie(1, 0);
		break;
	case 2:
		daxie(2, 0);
		break;
	case 3:
		daxie(3, 0);
		break;
	case 4:
		daxie(4, 0);
		break;
	case 5:
		daxie(5, 0);
		break;
	case 6:
		daxie(6, 0);
		break;
	case 7:
		daxie(7, 0);
		break;
	case 8:
		daxie(8, 0);
		break;
	case 9:
		daxie(9, 0);
		break;
	}
	if (shiyi || yi) {
		cout << "亿";
	}
	switch (qianwan) {
	case 0:
		if ((baiwan || shiwan || wan) && (shiyi || yi))
			daxie(0, 1);
		break;
	case 1:
		daxie(1, 0);
		break;
	case 2:
		daxie(2, 0);
		break;
	case 3:
		daxie(3, 0);
		break;
	case 4:
		daxie(4, 0);
		break;
	case 5:
		daxie(5, 0);
		break;
	case 6:
		daxie(6, 0);
		break;
	case 7:
		daxie(7, 0);
		break;
	case 8:
		daxie(8, 0);
		break;
	case 9:
		daxie(9, 0);
		break;
	}
	if (qianwan) {
		cout << "仟";
	}
	switch (baiwan) {
	case 0:
		if (qianwan && (shiwan || wan))
			daxie(0, 1);
		break;
	case 1:
		daxie(1, 0);
		break;
	case 2:
		daxie(2, 0);
		break;
	case 3:
		daxie(3, 0);
		break;
	case 4:
		daxie(4, 0);
		break;
	case 5:
		daxie(5, 0);
		break;
	case 6:
		daxie(6, 0);
		break;
	case 7:
		daxie(7, 0);
		break;
	case 8:
		daxie(8, 0);
		break;
	case 9:
		daxie(9, 0);
		break;
	}
	if (baiwan) {
		cout << "佰";
	}
	switch (shiwan) {
	case 0:
		if (baiwan && wan)
			daxie(0, 1);
		break;
	case 1:
		daxie(1, 0);
		break;
	case 2:
		daxie(2, 0);
		break;
	case 3:
		daxie(3, 0);
		break;
	case 4:
		daxie(4, 0);
		break;
	case 5:
		daxie(5, 0);
		break;
	case 6:
		daxie(6, 0);
		break;
	case 7:
		daxie(7, 0);
		break;
	case 8:
		daxie(8, 0);
		break;
	case 9:
		daxie(9, 0);
		break;
	}
	if (shiwan) {
		cout << "拾";
	}
	switch (wan) {
	case 0:
		break;
	case 1:
		daxie(1, 0);
		break;
	case 2:
		daxie(2, 0);
		break;
	case 3:
		daxie(3, 0);
		break;
	case 4:
		daxie(4, 0);
		break;
	case 5:
		daxie(5, 0);
		break;
	case 6:
		daxie(6, 0);
		break;
	case 7:
		daxie(7, 0);
		break;
	case 8:
		daxie(8, 0);
		break;
	case 9:
		daxie(9, 0);
		break;
	}
	if (qianwan || baiwan || shiwan || wan) {
		cout << "万";
	}
	switch (qian) {
	case 0:
		if ((shiyi || yi || qianwan || baiwan || shiwan || wan) && (bai || shi || yuan))
			daxie(0, 1);
		break;
	case 1:
		daxie(1, 0);
		break;
	case 2:
		daxie(2, 0);
		break;
	case 3:
		daxie(3, 0);
		break;
	case 4:
		daxie(4, 0);
		break;
	case 5:
		daxie(5, 0);
		break;
	case 6:
		daxie(6, 0);
		break;
	case 7:
		daxie(7, 0);
		break;
	case 8:
		daxie(8, 0);
		break;
	case 9:
		daxie(9, 0);
		break;
	}
	if (qian) {
		cout << "仟";
	}
	switch (bai) {
	case 0:
		if (qian && (shi || yuan))
			daxie(0, 1);
		break;
	case 1:
		daxie(1, 0);
		break;
	case 2:
		daxie(2, 0);
		break;
	case 3:
		daxie(3, 0);
		break;
	case 4:
		daxie(4, 0);
		break;
	case 5:
		daxie(5, 0);
		break;
	case 6:
		daxie(6, 0);
		break;
	case 7:
		daxie(7, 0);
		break;
	case 8:
		daxie(8, 0);
		break;
	case 9:
		daxie(9, 0);
		break;
	}
	if (bai) {
		cout << "佰";
	}
	switch (shi) {
	case 0:
		if (bai && yuan)
			daxie(0, 1);
		break;
	case 1:
		daxie(1, 0);
		break;
	case 2:
		daxie(2, 0);
		break;
	case 3:
		daxie(3, 0);
		break;
	case 4:
		daxie(4, 0);
		break;
	case 5:
		daxie(5, 0);
		break;
	case 6:
		daxie(6, 0);
		break;
	case 7:
		daxie(7, 0);
		break;
	case 8:
		daxie(8, 0);
		break;
	case 9:
		daxie(9, 0);
		break;
	}
	if (shi) {
		cout << "拾";
	}
	switch (yuan) {
	case 0:
		if ((!shiyi) && (!yi) && (!qianwan) && (!baiwan) && (!shiwan) && (!wan) && (!qian) && (!bai) && (!shi) && (!jiao) && (!fen))
			daxie(0, 1);
		break;
	case 1:
		daxie(1, 0);
		break;
	case 2:
		daxie(2, 0);
		break;
	case 3:
		daxie(3, 0);
		break;
	case 4:
		daxie(4, 0);
		break;
	case 5:
		daxie(5, 0);
		break;
	case 6:
		daxie(6, 0);
		break;
	case 7:
		daxie(7, 0);
		break;
	case 8:
		daxie(8, 0);
		break;
	case 9:
		daxie(9, 0);
		break;
	}
	if ((shiyi || yi || qianwan || baiwan || shiwan || wan || qian || bai || shi || yuan) || ((!shiyi) && (!yi) && (!qianwan) && (!baiwan) && (!shiwan) && (!wan) && (!qian) && (!bai) && (!shi) && (!jiao) && (!fen))) {
		cout << "圆";
	}
	switch (jiao) {
	case 0:
		if (fen && (shiyi || yi || qianwan || baiwan || shiwan || wan || qian || bai || shi || yuan))
			daxie(0, 1);
		break;
	case 1:
		daxie(1, 0);
		break;
	case 2:
		daxie(2, 0);
		break;
	case 3:
		daxie(3, 0);
		break;
	case 4:
		daxie(4, 0);
		break;
	case 5:
		daxie(5, 0);
		break;
	case 6:
		daxie(6, 0);
		break;
	case 7:
		daxie(7, 0);
		break;
	case 8:
		daxie(8, 0);
		break;
	case 9:
		daxie(9, 0);
		break;
	}
	if (jiao) {
		cout << "角";
	}
	switch (fen) {
	case 0:
		cout << "整";
		break;
	case 1:
		daxie(1, 0);
		break;
	case 2:
		daxie(2, 0);
		break;
	case 3:
		daxie(3, 0);
		break;
	case 4:
		daxie(4, 0);
		break;
	case 5:
		daxie(5, 0);
		break;
	case 6:
		daxie(6, 0);
		break;
	case 7:
		daxie(7, 0);
		break;
	case 8:
		daxie(8, 0);
		break;
	case 9:
		daxie(9, 0);
		break;
	}
	if (fen) {
		cout << "分";
	}
	cout << endl;
	/* 按需完成 */
	return 0;
}

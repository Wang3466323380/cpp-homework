/*2651326 电信 王天宇*/

#include <cmath>

#include "bgt.h"

/**
 * 绘制 Sierpinski 三角形
 * @param x 三角形左下角的 x 坐标
 * @param y 三角形左下角的 y 坐标
 * @param length 三角形的边长
 * @param level 递归层数, 层数为 0 时绘制一个实心三角形
 *
 * @note 本函数定义不允许改动
 */
void sierpinski(double x, double y, double length, int level)
{
	double h = length * sqrt(3.0) / 2;

	if (level == 0) {
		bgt_set_color(BGT_BLACK);
		bgt_fill_triangle((int)x, (int)y, (int)(x + length), (int)y, (int)(x + length / 2), (int)(y - h));
		return;
	}

	// 左下的小三角形
	sierpinski(x, y, length / 2, level - 1);

	// 右下的小三角形
	sierpinski(x + length / 2, y,
		length / 2, level - 1);

	// 上方的小三角形
	sierpinski(x + length / 4, y - h / 2,
		length / 2, level - 1);
	// 在此填写自己的代码
}

// main 函数不允许改动
int main()
{
	const int width = 1000, height = 1000;
	const int min_level = 0, max_level = 8;

	const int base_x = 100, base_y = 900, base_length = 800;

	int level = 6;
	bgt_open_window(width, height, "Sierpinski 三角形");
	bgt_set_background(BGT_WHITE);

	while (bgt_window_is_open()) {
		if (bgt_key_just_pressed(BGT_KEY_UP)) {
			level = (level < max_level) ? level + 1 : max_level;
		}
		if (bgt_key_just_pressed(BGT_KEY_DOWN)) {
			level = (level > min_level) ? level - 1 : min_level;
		}

		bgt_draw_text(10, 10, "按 ↑ / ↓ 键调整递归层数（0 - 8 层）");
		sierpinski(base_x, base_y, base_length, level);

		bgt_update_window();
	}
}

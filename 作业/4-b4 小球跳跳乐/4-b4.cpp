/*2651326 电信 王天宇*/
#include <cmath>

#include "bgt.h"

/**
 * @brief 绘制时刻 t 的一个小球，该圆球在 y = asin(ωx) 曲线上运动，
 * 单位时间沿 x 轴移动 v 个像素，超过右边界则从画布左侧出现
 *
 * @param width 窗口宽度
 * @param height 窗口高度
 * @param a 振幅，含义见公式
 * @param omega 角频率，含义见公式
 * @param v 小球沿 x 轴的速度，单位为像素/秒
 * @param t 自程序运行以来经过的时间，单位为秒
 * @param color 圆球颜色
 *
 * @note 本函数参数不允许修改，绘制小球必须使用本函数完成，否则 0 分！！！
 */
void draw_ball_on_sin(int width, int height, double a, double omega, double v, double t, unsigned color)
{
	// 作业要求自行编写完成本函数
	const int ball_radius = 10;
	const double x = std::fmod(v * t + width / 2.0, static_cast<double>(width)) - width / 2.0;
	const double y = a * std::sin(omega * x);
	const int screen_x = static_cast<int>(width / 2.0 + x);
	const int screen_y = static_cast<int>(height / 2.0 - y);
	bgt_set_color(color);
	bgt_fill_circle(screen_x, screen_y, ball_radius);
}

/**
 * @brief 绘制时刻 t 的一个小球，半径固定为 10，该小球绕着画布中心做半径为 r 的圆周运动
 * 角速度为 ω
 *
 * @param width 窗口宽度
 * @param height 窗口高度
 * @param r 圆周运动的半径
 * @param omega 角速度，单位为弧度/秒
 * @param t 自程序运行以来经过的时间，单位为秒
 * @param color 圆球颜色
 *
 * @note 本函数仅用作参考，最终提交的作业中可以删除
 */

 /**
  * @brief 绘制一帧画面
  *
  * @param width 窗口宽度
  * @param height 窗口高度
  * @param time_elapsed 自程序运行以来经过的时间，单位为秒
  *
  * @note 该函数目前是一个示例，需要根据作业要求自行修改完成
  */
void draw_frame(int width, int height, double time_elapsed) {
	draw_ball_on_sin(width, height, 250.0, 0.045, 50.0, time_elapsed, BGT_CYAN);

	draw_ball_on_sin(width, height, 200.0, 0.02, 100.0, time_elapsed, BGT_RED);

	draw_ball_on_sin(width, height, 100.0, 0.04, 150.0, time_elapsed, BGT_BLUE);

	draw_ball_on_sin(width, height, 50.0, 0.03, 200.0, time_elapsed, BGT_GREEN);
}
int main()
{
	const int width = 800;
	const int height = 600;

	bgt_open_window(width, height, "简单动画");
	// 设置画布背景颜色为白色
	bgt_set_background(BGT_WHITE);

	/*
	 * 动画实际上就是一张张不断更新的画面（称为“帧”），当每秒看到的画面超过 24
	 * 帧时，人眼就会产生连续运动的错觉。
	 *
	 * 为了实现动画效果，程序需要在一个循环中不断绘制帧画面，并在每一帧结束时调用
	 * bgt_update_window() 更新窗口显示。
	 *
	 * 本次作业中的动画非常简单，需要显示的画面内容只与时间有关，因此我们将“绘制一帧”
	 * 这件事封装成函数 draw_frame()，并在循环中不断调用它。
	 *
	 * bgt_total_time() 可以得到自程序运行以来经过的总时间，单位为秒。
	 * 我们将它作为参数传给 draw_frame()，让它根据时间计算出当前帧的画面内容。
	 */
	while (bgt_window_is_open()) {
		// 为了和用户交互，我们可以在绘制每帧动画之前查看用户是否有键盘、鼠标操作。
		// 这次作业中，我们支持最简单的操作：按下 ESC 键就退出程序。
		// 在更复杂的场景中，我们需要根据这个阶段读取到的用户操作来改变绘制的内容。
		if (bgt_key_just_pressed(BGT_KEY_ESCAPE)) {
			break;
		}

		// 绘制当前帧画面
		draw_frame(width, height, bgt_total_time());
		// bgt 库要求：每绘制完一帧之后，都要使用 bgt_update_window() 函数更新窗口显示。
		bgt_update_window();
	};

	// bgt 库要求：程序退出前必须调用 bgt_close_window() 关闭窗口并释放资源。
	bgt_close_window();
	return 0;
}

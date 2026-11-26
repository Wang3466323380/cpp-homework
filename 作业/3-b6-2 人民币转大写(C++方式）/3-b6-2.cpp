/*2651326 µçĞÅ ÍõÌìÓî*/
#include<iostream>
using namespace std;

int main()
{
	cout << "ÇëÊäÈë[0-100ÒÚ)Ö®¼äµÄÊı×Ö:\n";

	double z, y, t;

	cin >> z;
	cout << "´óĞ´½á¹ûÊÇ:\n";

	unsigned int x, a, b, c, d, e, f, g, h, i, billion, sb, nb;
	int need_zero = 0;
	int printed = 0;

	x = (unsigned int)(z / 100000000.0);
	billion = x / 10;
	a = x % 10;

	t = z - x * 100000000.0;

	x = (unsigned int)(t / 10000.0);
	b = x / 1000;
	c = x / 100 % 10;
	d = x / 10 % 10;
	e = x % 10;

	y = t - x * 10000.0;

	x = (unsigned int)y;
	f = x / 1000;
	g = x / 100 % 10;
	h = x / 10 % 10;
	i = x % 10;

	x = (unsigned int)((y - x) * 100.0 + 0.5);
	sb = x / 10;
	nb = x % 10;

	x = billion * 10 + a;

	if (x != 0)
	{
		if (billion != 0)
		{
			if (billion == 1)
			{
				cout << "Ò¼";
			}
			else if (billion == 2)
			{
				cout << "·¡";
			}
			else if (billion == 3)
			{
				cout << "Èş";
			}
			else if (billion == 4)
			{
				cout << "ËÁ";
			}
			else if (billion == 5)
			{
				cout << "Îé";
			}
			else if (billion == 6)
			{
				cout << "Â½";
			}
			else if (billion == 7)
			{
				cout << "Æâ";
			}
			else if (billion == 8)
			{
				cout << "°Æ";
			}
			else if (billion == 9)
			{
				cout << "¾Á";
			}

			cout << "Ê°";
		}

		if (a != 0)
		{
			if (a == 1)
			{
				cout << "Ò¼";
			}
			else if (a == 2)
			{
				cout << "·¡";
			}
			else if (a == 3)
			{
				cout << "Èş";
			}
			else if (a == 4)
			{
				cout << "ËÁ";
			}
			else if (a == 5)
			{
				cout << "Îé";
			}
			else if (a == 6)
			{
				cout << "Â½";
			}
			else if (a == 7)
			{
				cout << "Æâ";
			}
			else if (a == 8)
			{
				cout << "°Æ";
			}
			else if (a == 9)
			{
				cout << "¾Á";
			}
		}

		cout << "ÒÚ";
		printed = 1;
	}

	x = b * 1000 + c * 100 + d * 10 + e;

	if (x != 0)
	{
		if (printed && b == 0)
		{
			cout << "Áã";
		}

		need_zero = 0;

		if (b != 0)
		{
			if (b == 1)
			{
				cout << "Ò¼";
			}
			else if (b == 2)
			{
				cout << "·¡";
			}
			else if (b == 3)
			{
				cout << "Èş";
			}
			else if (b == 4)
			{
				cout << "ËÁ";
			}
			else if (b == 5)
			{
				cout << "Îé";
			}
			else if (b == 6)
			{
				cout << "Â½";
			}
			else if (b == 7)
			{
				cout << "Æâ";
			}
			else if (b == 8)
			{
				cout << "°Æ";
			}
			else if (b == 9)
			{
				cout << "¾Á";
			}

			cout << "Çª";
		}

		if (c != 0)
		{
			if (need_zero)
			{
				cout << "Áã";
				need_zero = 0;
			}

			if (c == 1)
			{
				cout << "Ò¼";
			}
			else if (c == 2)
			{
				cout << "·¡";
			}
			else if (c == 3)
			{
				cout << "Èş";
			}
			else if (c == 4)
			{
				cout << "ËÁ";
			}
			else if (c == 5)
			{
				cout << "Îé";
			}
			else if (c == 6)
			{
				cout << "Â½";
			}
			else if (c == 7)
			{
				cout << "Æâ";
			}
			else if (c == 8)
			{
				cout << "°Æ";
			}
			else if (c == 9)
			{
				cout << "¾Á";
			}

			cout << "°Û";
		}
		else if (b != 0)
		{
			need_zero = 1;
		}

		if (d != 0)
		{
			if (need_zero)
			{
				cout << "Áã";
				need_zero = 0;
			}

			if (d == 1)
			{
				cout << "Ò¼";
			}
			else if (d == 2)
			{
				cout << "·¡";
			}
			else if (d == 3)
			{
				cout << "Èş";
			}
			else if (d == 4)
			{
				cout << "ËÁ";
			}
			else if (d == 5)
			{
				cout << "Îé";
			}
			else if (d == 6)
			{
				cout << "Â½";
			}
			else if (d == 7)
			{
				cout << "Æâ";
			}
			else if (d == 8)
			{
				cout << "°Æ";
			}
			else if (d == 9)
			{
				cout << "¾Á";
			}

			cout << "Ê°";
		}
		else if (b != 0 || c != 0)
		{
			need_zero = 1;
		}

		if (e != 0)
		{
			if (need_zero)
			{
				cout << "Áã";
				need_zero = 0;
			}

			if (e == 1)
			{
				cout << "Ò¼";
			}
			else if (e == 2)
			{
				cout << "·¡";
			}
			else if (e == 3)
			{
				cout << "Èş";
			}
			else if (e == 4)
			{
				cout << "ËÁ";
			}
			else if (e == 5)
			{
				cout << "Îé";
			}
			else if (e == 6)
			{
				cout << "Â½";
			}
			else if (e == 7)
			{
				cout << "Æâ";
			}
			else if (e == 8)
			{
				cout << "°Æ";
			}
			else if (e == 9)
			{
				cout << "¾Á";
			}
		}

		cout << "Íò";
		printed = 1;
	}

	x = f * 1000 + g * 100 + h * 10 + i;

	if (x != 0)
	{
		if (printed && f == 0)
		{
			cout << "Áã";
		}

		need_zero = 0;

		if (f != 0)
		{
			if (f == 1)
			{
				cout << "Ò¼";
			}
			else if (f == 2)
			{
				cout << "·¡";
			}
			else if (f == 3)
			{
				cout << "Èş";
			}
			else if (f == 4)
			{
				cout << "ËÁ";
			}
			else if (f == 5)
			{
				cout << "Îé";
			}
			else if (f == 6)
			{
				cout << "Â½";
			}
			else if (f == 7)
			{
				cout << "Æâ";
			}
			else if (f == 8)
			{
				cout << "°Æ";
			}
			else if (f == 9)
			{
				cout << "¾Á";
			}

			cout << "Çª";
		}

		if (g != 0)
		{
			if (need_zero)
			{
				cout << "Áã";
				need_zero = 0;
			}

			if (g == 1)
			{
				cout << "Ò¼";
			}
			else if (g == 2)
			{
				cout << "·¡";
			}
			else if (g == 3)
			{
				cout << "Èş";
			}
			else if (g == 4)
			{
				cout << "ËÁ";
			}
			else if (g == 5)
			{
				cout << "Îé";
			}
			else if (g == 6)
			{
				cout << "Â½";
			}
			else if (g == 7)
			{
				cout << "Æâ";
			}
			else if (g == 8)
			{
				cout << "°Æ";
			}
			else if (g == 9)
			{
				cout << "¾Á";
			}

			cout << "°Û";
		}
		else if (f != 0)
		{
			need_zero = 1;
		}

		if (h != 0)
		{
			if (need_zero)
			{
				cout << "Áã";
				need_zero = 0;
			}

			if (h == 1)
			{
				cout << "Ò¼";
			}
			else if (h == 2)
			{
				cout << "·¡";
			}
			else if (h == 3)
			{
				cout << "Èş";
			}
			else if (h == 4)
			{
				cout << "ËÁ";
			}
			else if (h == 5)
			{
				cout << "Îé";
			}
			else if (h == 6)
			{
				cout << "Â½";
			}
			else if (h == 7)
			{
				cout << "Æâ";
			}
			else if (h == 8)
			{
				cout << "°Æ";
			}
			else if (h == 9)
			{
				cout << "¾Á";
			}

			cout << "Ê°";
		}
		else if (f != 0 || g != 0)
		{
			need_zero = 1;
		}

		if (i != 0)
		{
			if (need_zero)
			{
				cout << "Áã";
				need_zero = 0;
			}

			if (i == 1)
			{
				cout << "Ò¼";
			}
			else if (i == 2)
			{
				cout << "·¡";
			}
			else if (i == 3)
			{
				cout << "Èş";
			}
			else if (i == 4)
			{
				cout << "ËÁ";
			}
			else if (i == 5)
			{
				cout << "Îé";
			}
			else if (i == 6)
			{
				cout << "Â½";
			}
			else if (i == 7)
			{
				cout << "Æâ";
			}
			else if (i == 8)
			{
				cout << "°Æ";
			}
			else if (i == 9)
			{
				cout << "¾Á";
			}
		}

		printed = 1;
	}

	if (printed == 0)
	{
		if (sb == 0 && nb == 0)
		{
			cout << "ÁãÔ²";
		}
	}
	else
	{
		cout << "Ô²";
	}

	if (sb == 0 && nb == 0)
	{
		cout << "Õû\n";
	}
	else
	{
		if (sb == 0)
		{
			if (printed != 0)
			{
				cout << "Áã";
			}
		}
		else
		{
			if (sb == 1)
			{
				cout << "Ò¼";
			}
			else if (sb == 2)
			{
				cout << "·¡";
			}
			else if (sb == 3)
			{
				cout << "Èş";
			}
			else if (sb == 4)
			{
				cout << "ËÁ";
			}
			else if (sb == 5)
			{
				cout << "Îé";
			}
			else if (sb == 6)
			{
				cout << "Â½";
			}
			else if (sb == 7)
			{
				cout << "Æâ";
			}
			else if (sb == 8)
			{
				cout << "°Æ";
			}
			else if (sb == 9)
			{
				cout << "¾Á";
			}

			cout << "½Ç";
		}

		if (nb == 0)
		{
			cout << "Õû\n";
		}
		else
		{
			if (nb == 1)
			{
				cout << "Ò¼";
			}
			else if (nb == 2)
			{
				cout << "·¡";
			}
			else if (nb == 3)
			{
				cout << "Èş";
			}
			else if (nb == 4)
			{
				cout << "ËÁ";
			}
			else if (nb == 5)
			{
				cout << "Îé";
			}
			else if (nb == 6)
			{
				cout << "Â½";
			}
			else if (nb == 7)
			{
				cout << "Æâ";
			}
			else if (nb == 8)
			{
				cout << "°Æ";
			}
			else if (nb == 9)
			{
				cout << "¾Á";
			}

			cout << "·Ö\n";
		}
	}

	return 0;
}
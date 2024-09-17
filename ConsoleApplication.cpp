/**************************************************
 * Автор:    Арестова Е.Е.                        *
 * Дата:     17.09.2024                           *
 * Название: Программирование линейных алгоритмов *
 * Вариант:  2                                    *
 **************************************************/

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
	double a = 0.52;
	double b = -3.552;
	double c = 3.24;
	double P, g, A, x1, x2, x3;

	P = b / a;
	g = c / a;
	A = acos(fabs(g / (2 * sqrt(pow(-(P / 3), 3)))));

	x1 = 2 * sqrt(-(P / 3)) * cos(A / 3);
	x2 = -2 * sqrt(-(P / 3)) * cos((A + M_PI) / 3);
	x3 = -2 * sqrt(-(P / 3)) * cos((A - M_PI) / 3);

	cout.precision(7);
	cout << x3 << "; " << x2 << "; " << x1;
}


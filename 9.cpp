//用牛顿迭代法求方程在某处的跟

#include<iostream>
#include<cmath>

using namespace std;

int main9()
{
	float f, f1, xn, xn1;
	cout << "请输入要求跟的附近值：";
	cin >> xn1;

	do
	{
		xn = xn1;
		f = xn * (xn * (3 * xn - 4) - 5) + 13;
		f1 = xn * (9 * xn - 8) - 5;
		xn1 = xn - f / f1;

	} while (fabs(xn1 - xn) >= 1e-6); //精度要求

	cout << xn1;

	system("pause");
	return 0;
}
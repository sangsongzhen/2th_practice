//��ţ�ٵ������󷽳���ĳ���ĸ�

#include<iostream>
#include<cmath>

using namespace std;

int main9()
{
	float f, f1, xn, xn1;
	cout << "������Ҫ����ĸ���ֵ��";
	cin >> xn1;

	do
	{
		xn = xn1;
		f = xn * (xn * (3 * xn - 4) - 5) + 13;
		f1 = xn * (9 * xn - 8) - 5;
		xn1 = xn - f / f1;

	} while (fabs(xn1 - xn) >= 1e-6); //����Ҫ��

	cout << xn1;

	system("pause");
	return 0;
}
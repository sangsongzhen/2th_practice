//根据韦达定理做起来太难，直接上求根公式
#include<iostream>
#include<cmath>

using namespace std;

int main2()
{
	float a = 0;
	float b = 0;
	float c = 0;
	float x1 = 0;
	float x2 = 0;
	float delta = 0;

	cout << "请分别输入方程的三个系数a、b、c (a不为0)：";
	cin >> a >> b >> c;

	delta = sqrt((b * b) - (4 * a * c));  //跟判别式

	if (delta > 0)
	{
		x1 = (-b + delta) / (2 * a);
		x2 = (-b - delta) / (2 * a);

		cout << "方程的两根分别是：" << x1 << x2 << endl;
	}
	else if (delta == 0)
	{
		x1 = -b / (a * 2);

		cout << "方程只有一个跟：" << x1 << endl;
	}
	else
	{
		cout << "输入的系数不正确，构成的方程无解！" << endl;
	}
	system("pause");
	return 0;
}
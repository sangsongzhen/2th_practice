//调用cmath头文件，使用库中的平方根函数
//定义变量时全部使用了float
#include<iostream>
#include<cmath>

using namespace std;

int main1()
{
	float area = 0;
	float s = 0;
	float a = 0;
	float b = 0;
	float c = 0;
	cin >> a >> b >> c;

	if ((a + b) > c && (b + c) > a && (a + c) > b)
	{
		s = (a + b + c) / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		cout << "三角形的面积是：" << area << endl;
	}
	else
	{
		cout << "不能构成三角形！" << endl;
	}

	system("pause");
	return 0;
}
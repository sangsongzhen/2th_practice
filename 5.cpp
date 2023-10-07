//输入一个正整数，求该数的阶乘
#include<iostream>

using namespace std;

int main5()
{
	long double num = 0;  //最大范围
	cout << "请输入一个整数：";
	cin >> num;
	long double i = num;
	
	while (--i)
	{
		num = num * i;
	}

	cout << "该数的阶乘为：" << num << endl;

	system("pause");
	return 0;
}
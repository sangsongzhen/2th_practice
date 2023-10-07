//求1000以内所有的完数
//完数：等于它的所有的因子之和
#include<iostream>

using namespace std;

int main7()
{
	for (int i = 0; i < 1000; i++)
	{
		int num = 0;
		int j = i / 2;

		for (; j > 0; j--)
		{
			if (i % j == 0)
			{
				num = num + j;
			}
		}

		if (num == i) //判断是否是完数
		{
			cout << num << "---->" << j << endl;//输出所有可行的j值
		}
	}

	system("pause");
	return 0;
}
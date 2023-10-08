//求1000以内所有的完数
//完数：等于它的所有的因子之和
#include<iostream>

using namespace std;

int main()
{
	for (int i = 1; i < 1000; i++)
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
			cout << num << "---->";//输出所有可行的j值

			//接下来输出num所有的因子就行了
			for (int k = 1; k < num; k++)
			{
				if ((num % k) == 0)
				{
					cout << k;
					if (k < (num / 2)) //要让最后一项的后面没有逗号
					{
						cout << ",";
					}
				}
			}
			cout << endl;  //没输出一个完数，换一次行
		}

	}

	system("pause");
	return 0;
}
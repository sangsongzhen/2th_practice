//输出菱形图案
//总行数通过键盘输入，行数不同，菱形大小不同
#include<iostream>

using namespace std;

int main()
{
	int num = 0; //定义输入值行数
	int n = 1;  //定义第一行
	cout << "请输入菱形的行数：";
	cin >> num;

	int i = num / 2 + 1;
	for (; i > 0; i--)
	{
		for (int j = i; j > 1; j--)
		{
			cout << " ";  //缩进
		}
		for (int k = 1; k < 2 * n; k++) //输出个数
		{
			cout << "*";  //菱形因子
		}
		cout << endl;  //单行输出完成
		n++;  //行数自加
	}
	 
	n -= 1;
	for (int i = 1; i < (num / 2 + 1); i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";  //缩进
		}
		for (int k = 1; k < 2 * n - 2; k++)
		{
			cout << "*";
		}
		cout << endl;
		n--;
	}
	
	system("pause");
	return 0;
}
#include<iostream>

using namespace std;

int main3()
{
	int cost = 0;
	cout << "请输入购物款数：";
	cin >> cost;

	switch (cost / 1000)
	{
	case 0:
		cout << "没有优惠！" << endl;
		break;
	case 1:
		cost = cost * 0.95;
		break;
	case 2:
		cost = cost * 0.9;
		break;
	case 3:
		cost = cost * 0.85;
		break;
	default:
		cost = cost * 0.8;
		break;
	}
	cout << "优惠完以后应付：" << cost << endl;

	system("pause");
	return 0;
}
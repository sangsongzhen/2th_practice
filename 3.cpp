#include<iostream>

using namespace std;

int main3()
{
	int cost = 0;
	cout << "�����빺�������";
	cin >> cost;

	switch (cost / 1000)
	{
	case 0:
		cout << "û���Żݣ�" << endl;
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
	cout << "�Ż����Ժ�Ӧ����" << cost << endl;

	system("pause");
	return 0;
}
//�������ͼ��
//������ͨ���������룬������ͬ�����δ�С��ͬ
#include<iostream>

using namespace std;

int main()
{
	//int num = 0;
	int n = 1;
	//cout << "���������ε�������";
	//cin >> num;

	for (int i = 5; i > 0; i--)
	{
		for (int j = i; j > 1; j--)
		{
			cout << " ";
		}
		for (int k = 1; k < 2 * n; k++)
		{
			cout << 1;
		}
		cout << endl;
		n++;
	}
	for (int i = 1; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int k = n; k >= 0; k--)
		{
			cout << 1; 
		}
		cout << endl;
		n-=2;
	}
	
	system("pause");
	return 0;
}
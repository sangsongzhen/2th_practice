//�������ͼ��
//������ͨ���������룬������ͬ�����δ�С��ͬ
#include<iostream>

using namespace std;

int main()
{
	int num = 0; //��������ֵ����
	int n = 1;  //�����һ��
	cout << "���������ε�������";
	cin >> num;

	int i = num / 2 + 1;
	for (; i > 0; i--)
	{
		for (int j = i; j > 1; j--)
		{
			cout << " ";  //����
		}
		for (int k = 1; k < 2 * n; k++) //�������
		{
			cout << "*";  //��������
		}
		cout << endl;  //����������
		n++;  //�����Լ�
	}
	 
	n -= 1;
	for (int i = 1; i < (num / 2 + 1); i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";  //����
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
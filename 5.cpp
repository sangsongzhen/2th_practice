//����һ����������������Ľ׳�
#include<iostream>

using namespace std;

int main5()
{
	long double num = 0;  //���Χ
	cout << "������һ��������";
	cin >> num;
	long double i = num;
	
	while (--i)
	{
		num = num * i;
	}

	cout << "�����Ľ׳�Ϊ��" << num << endl;

	system("pause");
	return 0;
}
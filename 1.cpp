//����cmathͷ�ļ���ʹ�ÿ��е�ƽ��������
//�������ʱȫ��ʹ����float
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
		cout << "�����ε�����ǣ�" << area << endl;
	}
	else
	{
		cout << "���ܹ��������Σ�" << endl;
	}

	system("pause");
	return 0;
}
//����Τ�ﶨ��������̫�ѣ�ֱ���������ʽ
#include<iostream>
#include<cmath>

using namespace std;

int main2()
{
	float a = 0;
	float b = 0;
	float c = 0;
	float x1 = 0;
	float x2 = 0;
	float delta = 0;

	cout << "��ֱ����뷽�̵�����ϵ��a��b��c (a��Ϊ0)��";
	cin >> a >> b >> c;

	delta = sqrt((b * b) - (4 * a * c));  //���б�ʽ

	if (delta > 0)
	{
		x1 = (-b + delta) / (2 * a);
		x2 = (-b - delta) / (2 * a);

		cout << "���̵������ֱ��ǣ�" << x1 << x2 << endl;
	}
	else if (delta == 0)
	{
		x1 = -b / (a * 2);

		cout << "����ֻ��һ������" << x1 << endl;
	}
	else
	{
		cout << "�����ϵ������ȷ�����ɵķ����޽⣡" << endl;
	}
	system("pause");
	return 0;
}
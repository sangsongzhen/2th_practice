//��1000�������е�����
//�����������������е�����֮��
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

		if (num == i) //�ж��Ƿ�������
		{
			cout << num << "---->" << j << endl;//������п��е�jֵ
		}
	}

	system("pause");
	return 0;
}
//��1000�������е�����
//�����������������е�����֮��
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

		if (num == i) //�ж��Ƿ�������
		{
			cout << num << "---->";//������п��е�jֵ

			//���������num���е����Ӿ�����
			for (int k = 1; k < num; k++)
			{
				if ((num % k) == 0)
				{
					cout << k;
					if (k < (num / 2)) //Ҫ�����һ��ĺ���û�ж���
					{
						cout << ",";
					}
				}
			}
			cout << endl;  //û���һ����������һ����
		}

	}

	system("pause");
	return 0;
}
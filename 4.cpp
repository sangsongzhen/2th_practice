//������������£��жϸ��µ�����
//���꣬�ܱ�4�������ܱ�100�����������ܱ�400����
#include<iostream>

using namespace std;

int main4()
{
	int year = 0;
	int month = 0;

	cout << "��ֱ��������£��м�ո����������";
	cin >> year >> month;

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		cout << "�������31�죡" << endl;
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		cout << "�������30�죡" << endl;
	}
	if (month == 2)
	{
		if ((year % 4 == 0) && (year % 10 != 0) || (year % 400 == 0))
		{
			cout << "�������29�죡" << endl;
		}
		else
		{
			cout << "�������28�죡" << endl;
		}
	}

	if (month > 12 || month < 1)
	{
		cout << "��������ȷ���·ݣ�" << endl;
	}

	system("pause");
	return 0;
}
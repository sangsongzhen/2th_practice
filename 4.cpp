//根据输入的年月，判断该月的天数
//闰年，能被4整除不能被100整除，或者能被400整除
#include<iostream>

using namespace std;

int main4()
{
	int year = 0;
	int month = 0;

	cout << "请分别输入年月（中间空格符隔开）：";
	cin >> year >> month;

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		cout << "这个月有31天！" << endl;
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		cout << "这个月有30天！" << endl;
	}
	if (month == 2)
	{
		if ((year % 4 == 0) && (year % 10 != 0) || (year % 400 == 0))
		{
			cout << "这个月有29天！" << endl;
		}
		else
		{
			cout << "这个月有28天！" << endl;
		}
	}

	if (month > 12 || month < 1)
	{
		cout << "请输入正确的月份！" << endl;
	}

	system("pause");
	return 0;
}
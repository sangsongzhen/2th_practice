#include<iostream>
#include<cmath>

using namespace std;

int main6()
{
	//double num = 1;
	double num1 = 0;
	double PI=1.00;

	int i = 2;
	do
	{	
		if (i % 2 == 0)
		{
			num1 = -1.0 / (2 * i - 1);
			PI += num1;
		}
		else
		{
			num1 = 1.0 / (2 * i - 1);
			PI += num1;
		}
		i++;
	} while (fabs(num1) > 0.00000001);

	cout << PI << endl;

	system("pause");
	return 0;
}
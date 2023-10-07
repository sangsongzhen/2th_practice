#include<iostream>

using namespace std;

int main8()
{
	int x, y, z;
	cout << "公猴数\t" << "母猴数\t" << "小猴数\t" << endl;
	for (x = 1; x <= 8; x++)
	{
		for (y = 1; y <= 10; y++)
		{
			z = 20 - x - y;
			if (5*x + 4*y + 2*z == 50)
			{
				cout << x << "\t" << y << "\t" << z << "\t" << endl;
			}
		}
	}

	system("pause");
	return 0;
}
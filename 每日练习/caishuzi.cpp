#include <iostream>

using namespace std;

int main()
{
	int a = 0;//一共多少个数
	for (int i = 1; i < 5; i++)//百
	{
		for (int j=1;j<5;j++)//十
		{
			for (int k=1;k<5;k++)//个
			{
				if (i!=j&&i!=k&&j!=k)
				{
					cout << i << j << k << " ";
				}
			}
		}
	}

	return 0;
}

//题目：对10个数进行排序。
//程序分析：可以利用选择法，即从后9个比较过程
//中，选择一个最小的与第一个元素交换， 下次类
//推，即用第二个元素与后8个进行比较，并进行交换。
#include <iostream>

using namespace std;

int main()
{
	cout << "按从小到大排序。请输入你要排序的10个数：";
	int num[10] = { 0 };
	for (int i=0;i<10;i++)
	{
		cin >> num[i];
	}
	
	for (int i=0;i<9;i++)
	{
		for (int j=0;j<9-i;j++)
		{
			if (num[j]>num[j+1])
			{
				int a = 0;
				a = num[j];
				num[j] = num[j + 1];
				num[j + 1] = a;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << num[i]<<" ";
	}

	return 0;
}

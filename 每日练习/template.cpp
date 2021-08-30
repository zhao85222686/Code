#include <iostream>
#include <vector>

using namespace std;
template<class T>
void mySwap(T &a,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void mySort(T arr, int len)
{
	for (int i = 0; i < len; i++)
	{	
		int max = i;
		for (int j=i+1;j<len;j++)
		{
			if (arr[max]<arr[j])
			{
				max = j;//交换最大值下标
			}
		}
		if (max!=i)//如果假设与实际不等，交换最大值
		{
			mySwap(arr[max], arr[i]);
		}
	}
}

template<class T>
void PrintfArr(T arr,int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	char charArr[] = "asdfgtey";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	PrintfArr(charArr, num);
}

void test02()
{
	int charArr[] ={ 2,5,8,6,7,54,9,485,285};
	int num = sizeof(charArr) / sizeof(int);
	mySort(charArr, num);
	PrintfArr(charArr, num);
}

int main()
{
	test01();
	test02();

	return 0;
}

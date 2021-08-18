#include<iostream>

using namespace std;

int main() {
	int a[10] = { 5,7,6,9,8,1,2,3,0,4 };
	cout << "请按从最大到最小的顺序排列：" << endl;

	for (int i = 9; i >= 0; i--) {
		for (int j = 0,k; j < i; j++) 
		{
			if (a[j] < a[j + 1])
			{
				k = a[j + 1];
				a[j + 1] = a[j];
				a[j] = k;
			}
		}
	}
	for (int i = 0; i <= 9; i++) {
		cout << "a[" << i << "]=" << a[i] << endl;
	}
	return 0;
}

#include<iostream>
#include<Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int sum = 0;
	double prev1 = 1;
	double prev2 = 1;
	int n = 0;

	cout << "请问你要求计算第几个斐波那契数:" ;
	cin >> n;

	while (n-2) {
		sum = prev1 + prev2;
		prev1 = prev2;
		prev2 = sum;
		n--;
	}
	cout << "这个斐波那契数是：" << prev2 << endl;
	cout << "他们的比是：" << prev2 / prev1 << endl;


	system("pause");
	return 0;
}

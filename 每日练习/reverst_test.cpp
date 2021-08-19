#include<iostream>
#include<Windows.h>	
#include<string>

using namespace std;

/*
输入：  &123 45 6789 +
先出：  + 9876 54 321&
再出：  + 6789 45 123&
*/

int main(void) {
	string line;
	string str;
	
	cout << "输入一句话，然后把以单词为单位，逆转输出。" << endl;
	cout << "请输入这句话（英文）：";
	//输入一句话
	getline(cin, line);
	str = line;

	//先把这句话所有的反过来输出
	for (int i = line.length() - 1, j = 0; i >= 0; i--,j++) {
		str[j] = line[i];
	}
	//cout << str << endl;
	
	//把单词继续反过来
	for (int i = line.length() - 1, j = 0; i >= 0;) {
		if (!((str[j] >= 65 && str[j] <= 90) || (str[j] >= 97 && str[j] <= 122))) {
			i--;
			j++;
			continue;
		}
		else if ((str[j] >= 65 && str[j] <= 90) || (str[j] >= 97 && str[j] <= 122)) {
			int k = 0;
			while((str[j] >= 65 && str[j] <= 90) || (str[j] >= 97 && str[j] <= 122)) {
				line[k] = str[j];
				i--;
				j++;
				k++;
			}
			while (k-1 >= 0) {
				str[j - k] = line[k-1];
				k--;
			}
		}
	}
	cout << str << endl;

	system("pause");
	return 0;
}

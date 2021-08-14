#include <iostream>
#include <string>

using namespace std;

void test(char* p)
{
	char s[] = "Tims";

	const char* pc = s;
	//pc[3] = 'g';//错误：pc指向常量
	pc = p;

	char *const cp = s;
	cp[3] = 'a';
	//cp = p;//错误：cp是一个常量
	
	const char *const cpc = s;
	//cpc[3] = 'a';//错误：cpc指向常量
	//cpc = p;//错误：cpc本身是一个常量
}

int main()
{
	
	return 0;
}


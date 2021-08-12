#include <iostream>

using namespace std;

class Student
{
	char name[20];
	int age;
public:
	static int teacher;
};

int Student::teacher = 1;

int main()
{
	
	Student a;
	Student b;
	Student c;

	a.teacher = 10;
	cout << "B:" << b.teacher << endl;
	b.teacher = 13;
	cout << "C:" << c.teacher << endl;

	return 0;
}

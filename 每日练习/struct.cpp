#include <iostream>

using namespace std;

struct Date
{
	int year, month, day;
};

struct Person
{
	Date Dt;
	char Name[20];
	int age;
};

int main()
{
	Person s1 = { {1987,11,18},"张三",10 };
	Person s2 = { {1986,9,18},"李四",11 };
	Person s3 = { {1985,10,18},"王五",9 };
	cout << "姓名：" << s1.Name << "，年龄：" << s1.age << ",出生日期:"
		<< s1.Dt.year << "," << s1.Dt.month << "," << s1.Dt.day << endl;
	cout << "姓名：" << s2.Name << "，年龄：" << s2.age << ",出生日期:"
		<< s2.Dt.year << "," << s2.Dt.month << "," << s2.Dt.day << endl;
	cout << "姓名：" << s3.Name << "，年龄：" << s3.age << ",出生日期:"
		<< s3.Dt.year << "," << s3.Dt.month << "," << s3.Dt.day << endl;

	return 0;
}

***********************************************************************************************************
#include <iostream>

using namespace std;

struct Vector
{
	int sz;
	double* elem;
};

void vector_init(Vector& v, int s)
{
	v.elem = new double[s];
	v.sz = s;
}

double read_and_sum(int s)
{
	Vector v;
	vector_init(v, s);
	for (int i=0;i<s;i++)
	{
		cin >> v.elem[i];
	}
	double sum = 0;
	for (int i=0;i<s;i++)
	{
		sum += v.elem[i];
	}
	return sum;
}

class	Vector_v
{
public:
	Vector_v(int s):elem{new double[s]},sz{s}{}
	double& operator[](int i) { return elem[i]; }
	int size() { return sz; }
private:
	double* elem;
	int sz;
};

int main()
{
	

	return 0;
}

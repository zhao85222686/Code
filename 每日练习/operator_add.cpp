#include<iostream>
#include <string>

using namespace std;

class Person
{
public:

	int m_A;
	int m_B;

	//Person operator+(Person &p)
	//{
	//	Person temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}
};

Person operator+(Person &p1, Person & p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

void test01()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 20;
	Person p2;
	p2.m_A = 30;
	p2.m_B = 40;

	Person p3 = p1 + p2;
}

void test02()
{
	Person p3;
	p3.m_A = 10;
	p3.m_B = 20;
	Person p4;
	p4.m_A = 30;
	p4.m_B = 40;

	Person p5 = p3 + p4;

}

int main()
{
	test01();
	test02();
	return 0;
}

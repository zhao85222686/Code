#include<iostream>
#include <string>

using namespace std;

class Person
{
public:

	//this 指针的本质是指针常量，指针的指向是不可以修改的
	//const Person *const this;
	void showPerson() const
	{
		this->m_B = 12;
		//this->m_Age = 10;//
		//this = NULL;//this指针不可以修改指针的指向
	}

	void fun()
	{
		m_Age = 100;
	}

	int m_Age;
	mutable int m_B;//特殊变量，加关键字mutable，可以修改这个值
};

void test01()
{
	Person p;
	p.showPerson();
}

void test02()
{
	const Person p1;//在对象前加const，变为常对象
	//m_Age = 13;//不能修改
	p1.m_B = 13;

	//常对象只能调用常函数
	p1.showPerson();
	//p.fun();常对象不可以调用普通成员函数
}

int main()
{
	test01();
	test02();

	return 0;
}

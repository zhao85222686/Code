#include<iostream>
#include <string>

using namespace std;

//房屋类
class Building
{
	//goodGay全局函数是Building好朋友，可以访问Building中的私有成员
	friend void goodGay(Building *p);
public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}




public:
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室

};

//全局函数
void goodGay(Building *p)
{
	cout << "好基友全局函数正在访问：" << p->m_SittingRoom << endl;
	cout << "好基友全局函数正在访问：" << p->m_BedRoom << endl;
}

void test01()
{
	Building p;
	goodGay(&p);
}




int main()
{
	test01();

	return 0;
}

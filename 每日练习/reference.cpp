#include <iostream>

using namespace std;

int main()
{
	int rats = 1;
	int &rodents = rats;

	cout << "rats= " << rats << endl;
	cout << "rodents= " << rodents << endl;

	cout << "rats address = " << &rats << endl;
	cout << "rodents address = " << &rodents << endl;

	int bun = 4;
	rodents = bun;
	rats++;
	cout << "rats= " << rats << endl;
	cout << "rodents= " << rodents << endl;
	cout << "bun= " << bun << endl;
	
	cout << "rats address = " << &rats << endl;
	cout << "rodents address = " << &rodents << endl;
	cout << "bun address = " << &bun << endl;

	return 0;
}

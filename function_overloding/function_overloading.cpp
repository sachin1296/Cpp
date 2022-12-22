#include <iostream>
using namespace std;

int sum (int value1, int value2)
{
	cout << "two value sum" << endl;
	return value1 + value2;
}

int sum (int value1, int value2, int value3)
{
	cout << "three value sum" << endl;
	return value1 + value2 +value3;
}

int main()
{
	cout << sum(10, 20) <<endl;
	cout << sum(10,20,30) << endl;
}

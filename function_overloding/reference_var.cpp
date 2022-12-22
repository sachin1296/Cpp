#include <iostream>
using namespace std;

int main()
{
	int value=10;
	int &value_ref = value;

	cout << "value without change " << value << endl;
	cout << "reference value without change " << value_ref << endl;

	value = 20;
	cout << "value change by only variable " << value << endl;
	cout << "reference value " << value_ref << endl;

	value_ref = 30;
	cout << "value change using reference variable " << value_ref << endl;
	cout << "reference value " << value_ref << endl;
}

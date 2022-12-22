#include <iostream>
using namespace std;
int value = 100;
int main()
{
	int value = 200;

	cout << "local value " << value << endl;
	cout << "global value " << ::value << endl;
}

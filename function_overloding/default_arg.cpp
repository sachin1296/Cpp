#include <iostream>
using namespace std;

int sum (int value1, int value2, int value3=0 )
{
	if (0 == value3)
	{
		cout << "two value given" << endl;
		
	}
	else
	{
		cout << "three value given"<< endl;
	}
	return value1 + value2 + value3; 

}



int main ()
{
	cout << sum(10,20) << endl;
	cout << sum(10,20,30) << endl;


}

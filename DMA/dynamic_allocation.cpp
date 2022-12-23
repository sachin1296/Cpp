#include<iostream>
using namespace std;

int main ()
{
	int *intPtr;
	intPtr = new int;
	*intPtr = 10;
	cout << "int pointer value " << *intPtr << endl;
	delete intPtr;

	char *charPtr;
	charPtr = new char;
	*charPtr = 20;
	cout << "char ptr value " << *charPtr << endl;
	delete charPtr;

	{
	int *int_array;
	int_array = new int[10];

	for(int i=0;i<10;i++)
	{
		int_array[i] = i;
	}
	for(int i=0;i<10;i++)
	{
		cout << "int_array["<<i<<"] "<< int_array[i] << endl;
	}

	delete []int_array;
	}
	/* array initialization during array creation */

	int * int_array;
	int_array = new int[10] {11,2,3,4,5,6};
	for(int i=0;i<10;i++)
	{
		cout << "array[" << i << "] " << int_array[i] << endl;
	}
	delete []int_array;

	//memory for array of string
	 
	char ** array_string;
	
	array_string = new char*[5];

	for (int i=0;i<5;i++)
	{
		array_string[i] = new char[20];
	}


	for(int i = 0; i<5 ;i++)
	{
		cin>>array_string[i];
	}
	
	for(int  i=0 ;i<5 ;i++)
	{
		cout << array_string[i] <<endl;
	}

	
	for(int i = 0;i<5 ;i++)
	{
		delete []array_string[i];
	}
	delete []array_string;
	//new allocate memory by claering it 
	int *var = new int;
	cout << "value " << *var << endl;


}

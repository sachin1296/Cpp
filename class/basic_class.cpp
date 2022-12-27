#include <iostream>
using namespace std;

class basic_class 
{

	private:
		void print_private()
		{
			cout << "print private data" << endl;
		}
		void private_fun();

	public:
		void print()
		{
			cout << "well come to class" << endl;
			print_private();
			private_fun();

		}	
};

class device_info
{
	private:
		char device_name[20];
		char device_version[20];
		char dom[20];

	public:
		void set_device_information();
		void print_device_information();

};

void device_info :: set_device_information()
{
	cout << " enter device name :";
	cin>> device_name;

	cout  << "enter device version :";
	cin >> device_version;

	cout << "enter data of manufacturing :";
	cin >> dom;	
}

void device_info :: print_device_information()
{
	cout << "device name : " << device_name << endl;
	cout << "device version : " << device_version << endl;
	cout << "device DOM : " << dom << endl;
}
void basic_class ::private_fun()
{

	cout << "private function called" << endl;
}	

int main()
{
	basic_class a;
	a.print();
	cout << "size of empty class " << sizeof(a) << endl;
	cout << "basic class " << endl;
	device_info objDeviceInfo;

	objDeviceInfo.set_device_information();
	objDeviceInfo.print_device_information();

	cout  << "size of class : " << sizeof(objDeviceInfo)<<endl;
}

#include <iostream>
using namespace std;

class closet
{
	private:
		int lock;
	public:
	int no_cloth;
	int no_selve;

	void set_value()
	{
		lock = 1;
		no_cloth = 10;
		no_selve = 6;
	}
	friend void print_class_data(closet my_closet);
};

void print_class_data(closet my_closet)
{
	cout << " lock : "<< my_closet.lock << endl;
	cout << " no_cloth : " << my_closet.no_cloth << endl;
	cout << " no_selve : " << my_closet.no_selve << endl; 
}
int main()
{
	closet my_closet;
	my_closet.set_value();
	print_class_data(my_closet);
}

#include <iostream>
using namespace std;

class my_class
{
	private:
		int x;
		int y;

	public:
		void set_value(int x, int y)
		{
			this->x = x;
			this->y = y;

		       // x = a;
			//y = b;
		//	x = x;
		//	y = y;
			cout << "addr this->x : " << &this->x << endl;
			cout << "addr this->y : " << &this->y << endl;

			cout << "addr x : " << &x << endl;
			cout << "addr y : " << &y << endl;
		}
		void print_value()
		{
			cout << "x : " << x << endl;
			cout << "y : " << y << endl;
		}

	
};

int main ()
{
	my_class var_class;

	var_class.set_value(10,20);
	var_class.print_value();

}

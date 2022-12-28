#include <iostream>
using namespace std;

class complex
{
	public:

		int real;
		int img; 
		void complex_addition(complex obj1, complex obj2)
		{
			real = obj1.real + obj2.real;
			img = obj1.img + obj2.img;
		}

		complex complex_addition(complex obj1)
		{
			complex rtn;

			rtn.real = this->real + obj1.real;
			rtn.img = this->img + obj1.img;

			return rtn;
		}
};

int main()
{
	complex obj_complex_1, obj_complex_2, obj_complex_3, obj_complex_4;
	obj_complex_1.real = 10;
	obj_complex_1.img = 20;
	obj_complex_2.real = 20;
	obj_complex_2.img = 30;

	obj_complex_3.complex_addition(obj_complex_1, obj_complex_2);

	cout << " real = " << obj_complex_3.real << endl;
	cout << " img = "<< obj_complex_3.img << endl;

	obj_complex_4 = obj_complex_3.complex_addition(obj_complex_2);

	cout << obj_complex_4.real << " + i" << obj_complex_4.img << endl;
}

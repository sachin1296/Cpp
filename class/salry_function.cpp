#include <iostream>
using namespace std;

class wife;
class husbond
{
	int salary;
	friend void tax_need_to_pay(husbond val1, wife val2);

	public:
	void set_salary(void)
	{
		salary = 40000;
	}
};

class wife 
{
	int salary;
	friend void tax_need_to_pay(husbond val1, wife val2);
	public:
	void set_salary(void)
	{
		salary = 30000;
	}
};

void tax_need_to_pay(husbond val1, wife val2)
{
	if (val1.salary + val2.salary > 70000)
	{
		cout << "Tax need to pay " << endl;
	}
	else
	{
		cout << "No need to pay tax" << endl;
	}
}

int main()
{

	husbond val1;
	wife val2;
	val1.set_salary();
	val2.set_salary();
	tax_need_to_pay(val1, val2);


}

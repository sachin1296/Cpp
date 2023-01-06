#include <iostream>
using namespace std;
class paras;
class sachin
{
	int salary;
	friend paras;
	public:
	void set_value(void)
	{
		salary = 20;
	}
};
class paras
{
	int salary;

	public:
	void set_value(void)
	{
		salary = 30;
	}
	void display(sachin data)
	{
		cout << "paras salary : " << salary << endl;
		cout << "sachin salary : " << data.salary << endl;
	}
};
int main(void)
{

	sachin data;
	paras data_1;
	data.set_value();
	data_1.set_value();
	data_1.display(data);

}

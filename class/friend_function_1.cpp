#include <iostream>
using namespace std;

class microDevice
{
	friend void microDeviceDetails(class microDevice);
	friend int main(void);
	int noInstruction;
	public:
	int noLeg;
	int noUART;

	void setMicroDeviceDetails()
	{
		noInstruction = 50;
		noLeg = 24;
		noUART= 3;
	}


};

void microDeviceDetails(microDevice device)
{
	cout << "No instruction "<< device.noInstruction << endl;
	cout << "No lef " << device.noLeg << endl;
	cout << "No UART "<< device.noUART << endl;

}
int main (void)
{

	microDevice mc_8051;
	mc_8051.setMicroDeviceDetails();
	
	microDeviceDetails(mc_8051);
	cout << "No instruction "<< mc_8051.noInstruction << endl;
        cout << "No lef " << mc_8051.noLeg << endl;
        cout << "No UART "<< mc_8051.noUART << endl;

	return 0;
}

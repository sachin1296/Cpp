#include <iostream>
using namespace std;

namespace maruti_800
{
	int speed;
	int noSeat;
}

namespace beleno
{
	int speed;
	int noSeat;
}

//using beleno::speed; // declarative has higher priority when it local

int main ()
{
/*	maruti_800::speed = 120;
	beleno::speed = 140;
	cout << "maruti_800 speed " << maruti_800::speed << endl;
	cout << "beleno speed " << beleno::speed << endl;

	{
		using namespace maruti_800;
		speed = 120;
		cout <<"maruti speed " << speed << endl;
	}
	{
	        using namespace beleno;
		speed = 140;
		cout << "beleno speed " << speed <<endl;
	}	
*/

	maruti_800::speed = 120;
	beleno::speed = 140;
	using namespace maruti_800;
	//using beleno::speed; // declarative has higher priority when using directiv and declarative both local
	//if declarative is global and using directive is local or global compiler always generate error

	cout << "speed " << speed << endl;
}

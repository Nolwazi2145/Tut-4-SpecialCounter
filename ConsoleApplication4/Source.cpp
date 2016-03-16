#include <iostream>
#include "SpecialCounter.h"
using namespace std;


int main()
{
	SpecialCounter count, count1, count2;
	count.Start(20);
	count.Stop(210);
	count.stepIncrement(3);
	count.stepDecrement(3);
	count1 = count;
	count2 = count;
	cout << "Counting up\n" << count1.getStarter() << endl;
	
	{
		count1.plus1();
		cout << count1.getStarter() << endl;
	}

	cout << "\n\n Counting Down\n" << count2.getStopper() << endl;
	
	{
		count2.minus1();
		cout << count2.getStopper() << endl;
	}
}
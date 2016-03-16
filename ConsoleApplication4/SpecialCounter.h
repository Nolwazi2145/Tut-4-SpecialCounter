#include<iostream>

using namespace std;

class SpecialCounter
{
private:
	int starter;
	int stopper;
	int StepIncrement;
	int StepDecrement;
public:
	SpecialCounter();
	void Start();
	void Stop();
	void stepIncrement();
	void stepDecrement();
	SpecialCounter operator + (SpecialCounter);
	SpecialCounter operator - (SpecialCounter);
	int getStarter();
	int getStopper();
	void plus1();
	void minus1();
	~SpecialCounter();
};
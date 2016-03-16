#include<iostream>

using namespace std;

class SpecialCount
{
private:
	int starter;
	int stopper;
	int StepIncrement;
	int StepDecrement;
public:
	SpecialCount();
	void Start(int start);
	void Stop(int stop);
	void stepIncrement(int stepSize);
	void stepDecrement(int stepSize);
	SpecialCount operator + (SpecialCount);
	SpecialCount operator - (SpecialCount);
	int getStarter();
	int getStopper();
	void plus1();
	void minus1();
	~SpecialCount();
};
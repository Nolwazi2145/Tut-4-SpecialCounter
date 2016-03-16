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
	void Start(int start);
	void Stop(int stop);
	void stepInc(int stepSize);
	void stepDec(int stepSize);
	SpecialCounter operator + (SpecialCounter);
	SpecialCounter operator - (SpecialCounter);
	int getStarting();
	int getStoping();
	void plus1();
	void minus1();
	~SpecialCounter();
};

int SpecialCounter::getStarting()
{
	return starter;
}

int SpecialCounter::getStoping()
{
	return stopper;
}
SpecialCounter::SpecialCounter()
{
	starter = 0;
	stopper = 255;
	StepIncrement = 1;
	StepDecrement = 1;
}

void SpecialCounter::Start(int start)
{
	starter = start;
}

void SpecialCounter::Stop(int stop)
{
	stopper = stop;
}

void SpecialCounter::stepInc(int Stepsize)
{
	StepIncrement = Stepsize;
}

void SpecialCounter::stepDec(int Stepsize)
{
	StepDecrement = Stepsize;
}

SpecialCounter operator + (SpecialCounter count)
{
	int value = count.getStarting();
	value = +1;
	count.Start(value);
	return count;
}

SpecialCounter operator - (SpecialCounter count)
{
	int value = count.getStarting();
	value = -1;
	count.Start(value);
	return count;
}

void SpecialCounter::plus1()
{
	starter += StepIncrement;
}
void SpecialCounter::minus1()
{
	stopper -= StepDecrement;
}
SpecialCounter::~SpecialCounter()
{
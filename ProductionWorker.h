#pragma once
#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H
#include "Employee.h"

class ProductionWorker : protected Employee
{
private:
	int shift;
	double payRate;
public:
	//default constructor
	ProductionWorker()
	{
		shift = 0;
		payRate = 0.0;
	}
	//constructor
	ProductionWorker(int shift, double payRate) 
	{
		shift = shift;
		payRate = payRate;
	}
	//mutator functions
	void setShift(int shift) 
	{
		shift = shift;
	}
	void setPayRate(double rate)
	{
		payRate = rate;
	}
	//accessor functions 
	double getPayRate() const
	{
		return payRate;
	}
	int getShift() const
	{
		return shift;
	}
};
#endif

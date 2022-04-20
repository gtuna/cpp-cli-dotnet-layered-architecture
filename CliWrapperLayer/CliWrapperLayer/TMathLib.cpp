#include "pch.h"

#include "TMathLib.h"

#include "../../CPlusPlusLayer/CPlusPlusLayer/framework.h"


TMathLib::TMCalculator::TMCalculator()
{

	refClass = (void*) new TCalculator();
}

TMathLib::TMCalculator::!TMCalculator()
{

}

TMathLib::TMCalculator::~TMCalculator()
{
	this->!TMCalculator();
}


int TMathLib::TMCalculator::Sum(int a, int b)
{
	return  ((TCalculator*)refClass)->Sum(a,b);
}



#include "Vistor.h"

#include <iostream>

namespace dp {

ConcreteVistorA::ConcreteVistorA()
{
}

ConcreteVistorA::~ConcreteVistorA()
{

}

void ConcreteVistorA::VisteConcreteElementA(IElement* el)
{
	std::cout << "Now VistorA has the pointer of the ElementA, so can call " 
		"ElementA's function here  to do something" << std::endl;
	std::cout << "now we see the num of ElementA is above Zero or not?" << std::endl;

	if (CalElementNumAboveZero(el)) {
		std::cout << "Above" << std::endl;
	} else {
		std::cout << "Below" << std::endl;
	}
}


void ConcreteVistorA::VisteConcreteElementB(IElement* el)
{
	std::cout << "Now VistorA has the pointer of the ElementB, so can call " 
		"ElementB's function here  to do something" << std::endl;
	std::cout << "now we see the num of ElementB is above Zero or not?" << std::endl;

	if (CalElementNumAboveZero(el)) {
		std::cout << "Above" << std::endl;
	} else {
		std::cout << "Below" << std::endl;
	}
}



bool ConcreteVistorA::CalElementNumAboveZero(IElement* el)
{
	return (el->GetNum()>0) ? true:false;
}


ConcreteVistorB::ConcreteVistorB()
{

}


ConcreteVistorB::~ConcreteVistorB()
{

}

void ConcreteVistorB::VisteConcreteElementA(IElement* el)
{
	std::cout << "Now VistorB has the pointer of the ElementA, so can call " 
		"ElementA's function here  to do something" << std::endl;
	std::cout << "now we see the num of ElementA is odd or even?" << std::endl;
	if (el->GetNum() % 2 == 0) {
		std::cout << "even" << std::endl;
	} else {
		std::cout << "odd" << std::endl;
	}
}

void ConcreteVistorB::VisteConcreteElementB(IElement* el)
{
	std::cout << "Now VistorB has the pointer of the ElementB, so can call " 
		"ElementB's function here  to do something" << std::endl;
	std::cout << "now we see the num of ElementB is odd or even?" << std::endl;
	if (el->GetNum() % 2 == 0) {
		std::cout << "even" << std::endl;
	} else {
		std::cout << "odd" << std::endl;
	}
}

bool ConcreteVistorB::CalElementNumAboveZero(IElement* el)
{
	return (el->GetNum()>0) ? true:false;
}

ConcreteElementA::ConcreteElementA()
{

}

ConcreteElementA::~ConcreteElementA()
{

}

void ConcreteElementA::Accept(IVistor* vs)
{
	vs->VisteConcreteElementA(this);
}

void ConcreteElementA::SetNum(int nNum)
{
	num_ = nNum;
}

int ConcreteElementA::GetNum()
{
	return num_;
}


ConcreteElementB::ConcreteElementB()
{

}

ConcreteElementB::~ConcreteElementB()
{

}

void ConcreteElementB::Accept(IVistor* vs)
{
	vs->VisteConcreteElementB(this);
}

void ConcreteElementB::SetNum(int nNum)
{
	num_ = nNum;
}

int ConcreteElementB::GetNum()
{
	return num_;
}

} //namespace dp
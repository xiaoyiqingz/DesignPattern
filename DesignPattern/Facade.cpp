#include "Facade.h"

#include <iostream>

namespace dp {

void SubSystemA::OperationA()
{
	std::cout << "OperationA..." << std::endl;
}


void SubSystemB::OperationB()
{
	std::cout << "OperationB..." << std::endl;
}


Facade::Facade()
{
	subA_ = new SubSystemA();
	subB_ = new SubSystemB();
}

Facade::~Facade()
{
	delete subA_;
	delete subB_;
}

void Facade::Operation()
{
	subA_->OperationA();
	subB_->OperationB();
}

} //namespace dp
#include "Adapter.h"

#include <iostream>

namespace dp{

Adaptee::Adaptee()
{
}

Adaptee::~Adaptee()
{

}

void Adaptee::SpecificRequest()
{
	std::cout << "Adaptee: SpecificRequest..." << std::endl;
}

Target::Target()
{
}

Target::~Target()
{
}

void Target::Request()
{
	std::cout << "Target: Request..." << std::endl;
}

AdapterA::AdapterA()
{
}

AdapterA::~AdapterA()
{
}

void AdapterA::Request()
{
	std::cout << "AdapterA: Request..." << std::endl;
	SpecificRequest();
	std::cout << "---------------------"<< std::endl;
}

AdapterB::AdapterB() 
	:ad_(new Adaptee)
{
}

AdapterB::AdapterB(Adaptee* ad)
{
	ad_ = ad;
}

AdapterB::~AdapterB()
{
}

void AdapterB::Request()
{
	std::cout << "AdapterB: Request..." << std::endl;
	ad_->SpecificRequest();
	std::cout << "-------------------" << std::endl;
}

} //namespace dp
#include "Mediator.h"

#include <iostream>

namespace dp {

Colleage::Colleage()
{
}

Colleage::Colleage(Mediator* md)
{
	md_ = md;
}

Colleage::~Colleage()
{
}

ConcreteColleageA::ConcreteColleageA()
{
}

ConcreteColleageA::ConcreteColleageA(Mediator* mt)
	: Colleage(mt)
{

}

ConcreteColleageA::~ConcreteColleageA()
{
}

void ConcreteColleageA::DoAction()
{
	md_->DoActionFromAToB();
	std::cout << GetState() << "..." << std::endl;	
}

void ConcreteColleageA::SetState(const std::string& st)
{
	st_ = st;
}

std::string ConcreteColleageA::GetState()
{
	return st_;
}

ConcreteColleageB::ConcreteColleageB()
{
}

ConcreteColleageB::ConcreteColleageB(Mediator* mt)
	: Colleage(mt)
{

}

ConcreteColleageB::~ConcreteColleageB()
{
}

void ConcreteColleageB::DoAction()
{
	md_->DoActionFromBToA();
	std::cout << GetState() << "..." << std::endl;
}

void ConcreteColleageB::SetState(const std::string& st)
{
	st_ = st;
}

std::string ConcreteColleageB::GetState()
{
	return st_;
}

Mediator::Mediator()
{

}

Mediator::~Mediator()
{

}


ConcreteMediator::ConcreteMediator()
{

}

ConcreteMediator::ConcreteMediator(Colleage* clgA, Colleage* clgB)
	: clgA_(clgA), clgB_(clgB)
{

}

ConcreteMediator::~ConcreteMediator()
{

}

void ConcreteMediator::DoActionFromAToB()
{
	clgB_->SetState(clgA_->GetState());
}

void ConcreteMediator::DoActionFromBToA()
{
	clgA_->SetState(clgB_->GetState());
}

void ConcreteMediator::SetConcreteColleageA(Colleage* clgA)
{
	clgA_ = clgA;
}

void ConcreteMediator::SetConcreteColleageB(Colleage* clgB)
{
	clgB_ = clgB;
}

Colleage* ConcreteMediator::GetConcreteColleageA()
{
	return clgA_;
}

Colleage* ConcreteMediator::GetConcreteColleageB()
{
	return clgB_;
}

void ConcreteMediator::IntroColleage(Colleage* clgA, Colleage* clgB)
{
	clgA_ = clgA;
	clgB_ = clgB;
}

} // namespace dp

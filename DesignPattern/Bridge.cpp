#include "Bridge.h"

#include <iostream>

namespace dp {

Abstraction::Abstraction()
{
}

Abstraction::~Abstraction()
{
}


RedifinedAbstractionA::RedifinedAbstractionA(AbstractionImplement* imp)
{
	imp_ = imp;
}

RedifinedAbstractionA::~RedifinedAbstractionA()
{
	delete imp_;
	imp_ = NULL;
}

void RedifinedAbstractionA::Operation()
{
	std::cout << "RedifinedAbstractionA Operation..." << std::endl;
	imp_->Operation();
}

RedifinedAbstractionB::RedifinedAbstractionB(AbstractionImplement* imp)
{
	imp_ = imp;
}

RedifinedAbstractionB::~RedifinedAbstractionB()
{
	delete imp_;
	imp_ = NULL;
}

void RedifinedAbstractionB::Operation()
{
	std::cout << "RedifinedAbstractionB Operation..." << std::endl;
	imp_->Operation();
}


ConcreteAbstractionImpA::ConcreteAbstractionImpA()
{
}

ConcreteAbstractionImpA::~ConcreteAbstractionImpA()
{
}

void ConcreteAbstractionImpA::Operation()
{
	std::cout << "ConcreteAbstractionImpA Operation..." << std::endl;
}


ConcreteAbstractionImpB::ConcreteAbstractionImpB()
{
}

ConcreteAbstractionImpB::~ConcreteAbstractionImpB()
{
}

void ConcreteAbstractionImpB::Operation()
{
	std::cout << "ConcreteAbstractionImpB Operation..." << std::endl;
}


AbstractionImplement::AbstractionImplement()
{
}

AbstractionImplement::~AbstractionImplement()
{
}

} //namespace dp
#include "Strategy.h"

#include <iostream>

namespace dp {

Strategy::Strategy(void)
{
}


Strategy::~Strategy(void)
{
	std::cout << "~Strategy..." << std::endl;
}


ConcreteStrategyA::~ConcreteStrategyA()
{
	std::cout << "~ConcreteStategyA..." << std::endl;
}

void ConcreteStrategyA::AlgrithmInterface()
{
	std::cout << "Alg  Concrete Strategy A" << std::endl;
}


ConcreteStrategyB::~ConcreteStrategyB()
{
	std::cout << "~ConcreteStrategyB..." << std::endl;
}

void ConcreteStrategyB::AlgrithmInterface()
{
	std::cout << "Alg Concrete Strategy B" << std::endl;
}


Context::Context(Strategy* st)
{
	st_ = st;
}

Context::~Context()
{
	if (st_ != NULL) {
		delete st_;
		st_ = NULL;
	}
}

void Context::DoAction()
{
	st_->AlgrithmInterface();
}

}  //namesoace dp
#include "Proxy.h"

#include <iostream>

namespace dp{

void ConcreteSubject::Request()
{
	std::cout << "ConcreteSubject Request..." << std::endl;
}

Proxy::Proxy(void)
	: sb_(NULL)
{
}

Proxy::Proxy(Subject* sb)
	: sb_(sb)
{
}

Proxy::~Proxy(void)
{
}

void Proxy::Request()
{
	if (sb_ == NULL)
		return;

	std::cout << "Proxy Request..." << std::endl;
	sb_->Request();
}

}
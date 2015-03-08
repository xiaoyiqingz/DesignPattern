#include "Prototype.h"

#include <iostream>

namespace dp {

Prototype::Prototype()
{
	std::cout << "Construct Prototype..." << std::endl;
}

Prototype::~Prototype()
{
	std::cout << "Destruct Prototype..." << std::endl;
}


ConcretePrototypeA::ConcretePrototypeA()
{
	std::cout << "Construct ConcretePrototypA..." << std::endl;
}

ConcretePrototypeA::ConcretePrototypeA(const ConcretePrototypeA& ty)
{
	std::cout << "Copy ConcretePrototypeA..." << std::endl;
}

ConcretePrototypeA::~ConcretePrototypeA()
{
	std::cout << "Destruct ConcretePrototypeA..." << std::endl;
}

Prototype* ConcretePrototypeA::Clone() const
{
	return new ConcretePrototypeA(*this);
}


ConcretePrototypeB::ConcretePrototypeB()
{
	std::cout << "Construct ConcretePrototypeB..." << std::endl;
}

ConcretePrototypeB::ConcretePrototypeB(const ConcretePrototypeB& ty)
{
	std::cout << "Copy ConcretePrototypeB..." << std::endl;
}

ConcretePrototypeB::~ConcretePrototypeB()
{
	std::cout << "Destruct ConcretePrototypeB..." << std::endl;
}

Prototype* ConcretePrototypeB::Clone() const
{
	return new ConcretePrototypeB(*this);
}

}  //namespace dp
#include "AbsProduct.h"
#include <iostream>

namespace dp {

AbstractProductA::AbstractProductA()
{

}

AbstractProductA::~AbstractProductA()
{

}

AbstractProductB::AbstractProductB()
{

}

AbstractProductB::~AbstractProductB()
{

}

ProductA1::ProductA1()
{
	std::cout << "ProduceA1...." << std::endl;
}

ProductA1::~ProductA1()
{
	std::cout << "Destructor ProduceA1...." << std::endl;
}

ProductA2::ProductA2()
{
	std::cout << "ProduceA2...." << std::endl;
}

ProductA2::~ProductA2()
{
	std::cout << "Destructor ProduceA2...." << std::endl;
}

ProductB1::ProductB1()
{
	std::cout << "ProduceB1...." << std::endl;
}

ProductB1::~ProductB1()
{
	std::cout << "Destructor ProduceB1...." << std::endl;
}

ProductB2::ProductB2()
{
	std::cout << "ProduceB2...." << std::endl;
}

ProductB2::~ProductB2()
{
	std::cout << "Destructor ProduceB2...." << std::endl;
}

} // namespace dp
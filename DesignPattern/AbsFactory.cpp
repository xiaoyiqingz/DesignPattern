#include <iostream>

#include "AbsFactory.h"
#include "AbsProduct.h"

namespace dp {

AbsFactory::AbsFactory()
{

}

AbsFactory::~AbsFactory()
{

}


Factory1::Factory1()
{
	std::cout << "Factory1..." << std::endl;	
}

Factory1::~Factory1()
{
	std::cout << "Destructor Factory1..." << std::endl;
}

AbstractProductA* Factory1::CreateProductA()
{
	std::cout << "new ProductA1" << std::endl;
	return new ProductA1();
}

AbstractProductB* Factory1::CreateProductB()
{
	std::cout << "new ProductB1" << std::endl;
	return new ProductB1();
}

Factory2::Factory2()
{
	std::cout << "Factory2..." << std::endl;
}

Factory2::~Factory2()
{
	std::cout << "Destructor Factory1..." << std::endl;
}

AbstractProductA* Factory2::CreateProductA()
{
	std::cout << "new ProductA2" << std::endl;
	return new ProductA2();
}

AbstractProductB* Factory2::CreateProductB()
{
	std::cout << "new ProductB2" << std::endl;
	return new ProductB2();
}

} //namespace dp
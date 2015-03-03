#include "Factory.h"
#include "Product.h"
#include <iostream>

namespace dp {

Factory::Factory()
{
	std::cout<< "Factory...." <<std::endl;
}

Factory::~Factory()
{
	std::cout<< "Destructor Factory...." <<std::endl;
}

ConcreateFactory::ConcreateFactory()
{
	std::cout<< "ConcreateFactory...." <<std::endl;
}

ConcreateFactory::~ConcreateFactory()
{
	std::cout<< "Destructor ConcreateFactory...." <<std::endl;
}

Product* ConcreateFactory::CreateProduct()
{
	return new ConcreateProduct();
}

} // namespace dp
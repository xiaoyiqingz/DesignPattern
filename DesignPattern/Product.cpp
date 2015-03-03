#include "Product.h"

#include "Product.h"
#include <iostream>

namespace dp {

Product::Product()
{
	std::cout<< "Product..."<<std::endl;
}

Product::~Product()
{
	std::cout<< "Destructor Product..."<<std::endl;
}

ConcreateProduct::ConcreateProduct()
{
	std::cout<< "ConcreateProduct..."<<std::endl;
}

ConcreateProduct::~ConcreateProduct()
{
	std::cout<< "Destructor ConcreateProduct..."<<std::endl;
}

} //namespace dp
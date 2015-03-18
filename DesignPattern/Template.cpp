#include "Template.h"

#include <iostream>

namespace dp {

void AbstractClass::TemplateMethod()
{
	PrimitiveOperation1();
	PrimitiveOperation2();
}


void ConcreteClass1::PrimitiveOperation1()
{
	std::cout << "Concrete Class1 Operation1..." << std::endl;
}

void ConcreteClass1::PrimitiveOperation2()
{
	std::cout << "Concrete Class1 Operation2..." << std::endl;
}


void ConcreteClass2::PrimitiveOperation1()
{
	std::cout << "Concrete Class2 Operation1..." << std::endl;
}

void ConcreteClass2::PrimitiveOperation2()
{
	std::cout << "Concrete Class2 Operation2..." << std::endl;
}

} //namespace dp
#include "Builder.h"
#include "BuilderProduct.h"

namespace dp{

Builder::Builder()
{
}

Builder::~Builder()
{
}


ConcreteBuilderA::ConcreteBuilderA()
{
	m_pProduct = new BuilderProduct();
}

ConcreteBuilderA::~ConcreteBuilderA()
{
	delete m_pProduct;
	m_pProduct = NULL;
}

void ConcreteBuilderA::BuildPartA()
{
	m_pProduct->SetPartA("1");
}

void ConcreteBuilderA::BuildPartB()
{
	m_pProduct->SetPartB("1");
}

void ConcreteBuilderA::BuildPartC()
{
	m_pProduct->SetPartC("1");
}

BuilderProduct* ConcreteBuilderA::GetProduct()
{
	return m_pProduct;
}


ConcreteBuilderB::ConcreteBuilderB()
{
	m_pProduct = new BuilderProduct();
}

ConcreteBuilderB::~ConcreteBuilderB()
{
	delete m_pProduct;
	m_pProduct = NULL;
}

void ConcreteBuilderB::BuildPartA()
{
	m_pProduct->SetPartA("2");
}

void ConcreteBuilderB::BuildPartB()
{
	m_pProduct->SetPartB("2");
}

void ConcreteBuilderB::BuildPartC()
{
	m_pProduct->SetPartC("2");
}

BuilderProduct* ConcreteBuilderB::GetProduct()
{
	return m_pProduct;
}

} //namespace dp
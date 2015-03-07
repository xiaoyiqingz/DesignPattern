#include "BuilderProduct.h"
#include <iostream>

namespace dp {

BuilderProduct::BuilderProduct(void)
{
}


BuilderProduct::~BuilderProduct(void)
{
}

void BuilderProduct::SetPartA(const std::string& partA)
{
	m_sPartA = partA;
}

void BuilderProduct::SetPartB(const std::string& partB)
{
	m_sPartB = partB;
}

void BuilderProduct::SetPartC(const std::string& partC)
{
	m_sPartC = partC;
}

void BuilderProduct::ShowInfo()
{
	std::cout << m_sPartA << m_sPartB << m_sPartC << std::endl;
}

} // namespace dp
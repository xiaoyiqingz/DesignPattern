#include "Flyweight.h"

namespace dp {

Flyweight::Flyweight(int nNum)
{
	nNum_ = nNum;
	char tmp[8];
	_itoa_s(nNum, tmp, 10);
	sNum_ = tmp;
}

FlyweightFactory::FlyweightFactory()
{
}

FlyweightFactory::~FlyweightFactory()
{
	for (auto iter = m_flyweight.begin(); iter != m_flyweight.end(); iter++) {
		delete (*iter);
		(*iter) = NULL;
	}
	m_flyweight.clear();
}

std::string FlyweightFactory::GetFlyweightString(int nNum)
{
	for (auto iter = m_flyweight.begin(); iter != m_flyweight.end(); iter++) {
		if ((*iter)->GetNum() == nNum) {
			return (*iter)->GetString();
		} 
	}	

	Flyweight* pFlyweight = new ConcreteFlyweight(nNum);
	m_flyweight.push_back(pFlyweight);
	return pFlyweight->GetString();
}

} //namespace dp
#include "Composite.h"

#include <string>

namespace dp{

void Composite::Operation()
{
	std::cout << "Composite(" << sName_ << "):Operation..." << std::endl;

	for (auto iter = m_ComVec.begin(); iter != m_ComVec.end(); iter++) {
		(*iter)->Operation();
	}
}

void Composite::Add(ComponentEx* cp)
{
	std::cout << "Add(" << *(cp->GetName())  << ")..." <<std::endl;
	m_ComVec.push_back(cp);
}

void Composite::Remove(ComponentEx* cp)
{
	for (auto iter = m_ComVec.begin(); iter != m_ComVec.end(); iter++) {
		if (*iter == cp) {
			std::cout << "Remove(" << *(cp->GetName())  << ")..." <<std::endl;
			m_ComVec.erase(iter);
			delete cp;
			break;
		}
	}
}

ComponentEx* Composite::GetChild(int index)
{
	if (index >= (int)m_ComVec.size() || index < 0) {
		return NULL;
	}

	return m_ComVec.at(index);
}

std::string* Composite::GetName() 
{
	return &sName_;
}

void Leaf::Operation()
{
	std::cout << "Leaf(" << sName_ <<"): Operation..." << std::endl;
}

std::string* Leaf::GetName()
{
	return &sName_;
}

} //namesapce dp
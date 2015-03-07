#pragma once

#include <string>

namespace dp {

class BuilderProduct
{
public:
	BuilderProduct(void);
	~BuilderProduct(void);
	
	void SetPartA(const std::string& partA);
	void SetPartB(const std::string& partB);
	void SetPartC(const std::string& partC);

	void ShowInfo();
private:
	std::string m_sPartA;
	std::string m_sPartB;
	std::string m_sPartC;
};
} //namespace dp
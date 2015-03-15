#pragma  once

#include <iostream>
#include <vector>

namespace dp{

class Flyweight
{
public:
	virtual ~Flyweight(){};
	std::string GetString() {return sNum_;} 
	int GetNum() {return nNum_;}
protected:
	Flyweight(int nNum);

private:
	std::string sNum_;
	int nNum_;
};

class  ConcreteFlyweight : public Flyweight
{
public:
	ConcreteFlyweight(int nNum) : Flyweight(nNum){};
	~ConcreteFlyweight(){};
};

class FlyweightFactory
{
public:
	FlyweightFactory();
	~FlyweightFactory();

	std::string GetFlyweightString(int nNum);

private:
	std::vector<Flyweight*> m_flyweight;
};

} // namespace dp

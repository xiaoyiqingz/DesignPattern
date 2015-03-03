#pragma once

namespace dp {

class AbstractProductA;
class AbstractProductB;

class AbsFactory
{
public:
	~AbsFactory();
	virtual AbstractProductA* CreateProductA()=0;
	virtual AbstractProductB* CreateProductB()=0;
	
	//virtual void DestroyProductA()=0;
	//virtual void DestroyProductB()=0;

protected:
	AbsFactory();
};

class Factory1 : public AbsFactory
{
public:
	Factory1();
	~Factory1();

	virtual AbstractProductA* CreateProductA();
	virtual AbstractProductB* CreateProductB();
};

class Factory2 : public AbsFactory
{
public:
	Factory2();
	~Factory2();

	virtual AbstractProductA* CreateProductA();
	virtual AbstractProductB* CreateProductB();
};

} //namespace dp

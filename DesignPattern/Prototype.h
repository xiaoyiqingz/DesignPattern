#pragma once

namespace dp{

class Prototype 
{
public:
	~Prototype();

	virtual Prototype* Clone() const = 0;

protected:
	Prototype();
};

class ConcretePrototypeA : public Prototype
{
public:
	ConcretePrototypeA();
	ConcretePrototypeA(const ConcretePrototypeA& ty);  //类成员变量中不存在指针变量  不需要实现拷贝构造函数
	~ConcretePrototypeA();

	virtual Prototype* Clone() const;
};

class ConcretePrototypeB : public Prototype
{
public:
	ConcretePrototypeB();
	ConcretePrototypeB(const ConcretePrototypeB& ty);
	~ConcretePrototypeB();
	

	virtual Prototype* Clone() const;
};

}  //namespace dp
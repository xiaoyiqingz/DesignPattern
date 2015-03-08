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
	ConcretePrototypeA(const ConcretePrototypeA& ty);  //���Ա�����в�����ָ�����  ����Ҫʵ�ֿ������캯��
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
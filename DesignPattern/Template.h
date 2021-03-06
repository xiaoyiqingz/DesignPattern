#pragma once 

namespace dp {

class AbstractClass
{
public:
	virtual ~AbstractClass() {};
	void TemplateMethod();

protected:
	AbstractClass() {} ;
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
};

class ConcreteClass1 : public AbstractClass
{
public:
	ConcreteClass1() {} ;
	~ConcreteClass1() {} ;

protected:
	void PrimitiveOperation1();
	void PrimitiveOperation2();
};

class ConcreteClass2 : public AbstractClass
{
public:
	ConcreteClass2() {} ;
	~ConcreteClass2() {} ;

protected:
	void PrimitiveOperation1();
	void PrimitiveOperation2();
};

} //namespace dp
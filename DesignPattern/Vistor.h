#pragma  once

namespace dp {

class IElement;
class ConcreteElementA;
class ConcreteElementB;

class IVistor
{
public:
	virtual ~IVistor() {};
	virtual void VisteConcreteElementA(IElement* el) = 0;
	virtual void VisteConcreteElementB(IElement* el) = 0;
	virtual bool CalElementNumAboveZero(IElement* el) = 0;

protected:
	IVistor() {} ;
};

class ConcreteVistorA : public IVistor
{
public:
	ConcreteVistorA();
	virtual ~ConcreteVistorA();
	virtual void VisteConcreteElementA(IElement* el);
	virtual void VisteConcreteElementB(IElement* el);
	virtual bool CalElementNumAboveZero(IElement* el);
};

class ConcreteVistorB : public IVistor
{
public:
	ConcreteVistorB();
	virtual ~ConcreteVistorB();
	virtual void VisteConcreteElementA(IElement* el);
	virtual void VisteConcreteElementB(IElement* el);
	virtual bool CalElementNumAboveZero(IElement* el);
};

class IElement
{
public:
	virtual ~IElement(){};
	virtual void Accept(IVistor* vs) = 0;
	virtual void SetNum(int nNum) = 0;
	virtual int GetNum() = 0;

protected:
	IElement() {} ;
	int num_;
};

class ConcreteElementA : public IElement
{
public:
	ConcreteElementA();
	virtual ~ConcreteElementA();
	virtual void Accept(IVistor* vs);
	virtual void SetNum(int nNum);
	virtual int GetNum();
};

class ConcreteElementB : public IElement
{
public:
	ConcreteElementB();
	virtual ~ConcreteElementB();
	virtual void Accept(IVistor* vs);
	virtual void SetNum(int nNum);
	virtual int GetNum();
};

} //namespace dp







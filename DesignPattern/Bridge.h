#pragma  once

namespace dp{

class AbstractionImplement;

class Abstraction
{
public:
	virtual ~Abstraction();
	virtual void Operation() = 0;  //定义接口，表示该类所支持的操作

protected:
	Abstraction();
};

class RedifinedAbstractionA : public Abstraction
{
public:
	RedifinedAbstractionA(AbstractionImplement* imp);
	virtual ~RedifinedAbstractionA();
	virtual void Operation();

private:
	AbstractionImplement* imp_;
};

class RedifinedAbstractionB : public Abstraction
{
public:
	RedifinedAbstractionB(AbstractionImplement* imp);
	virtual ~RedifinedAbstractionB();
	virtual void Operation();

private:
	AbstractionImplement* imp_;
};

class AbstractionImplement
{
public:
	virtual ~AbstractionImplement();
	virtual void Operation() = 0;  //定义操作接口

protected:
	AbstractionImplement();
};

// 继承自AbstractionImplement,是AbstractionImplement的不同实现之一
class ConcreteAbstractionImpA : public AbstractionImplement
{
public:
	ConcreteAbstractionImpA();
	virtual ~ConcreteAbstractionImpA();
	virtual void Operation();
};

class ConcreteAbstractionImpB : public AbstractionImplement
{
public:
	ConcreteAbstractionImpB();
	virtual ~ConcreteAbstractionImpB();
	virtual void Operation();
};

} // namespace dp
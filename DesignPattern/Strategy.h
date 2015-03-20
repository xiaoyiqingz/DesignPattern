#pragma once

namespace dp {

class Strategy
{
public:
	Strategy(void);
	virtual ~Strategy(void);

	virtual void AlgrithmInterface() = 0;
};

class ConcreteStrategyA : public Strategy
{
public:
	ConcreteStrategyA() {};
	virtual ~ConcreteStrategyA();
	void AlgrithmInterface();
};

class ConcreteStrategyB : public Strategy
{
public:
	ConcreteStrategyB() {};
	virtual ~ConcreteStrategyB();
	void AlgrithmInterface();
};

/**
这个类是 Strategy 模式的关键， 也是 Strategy模式和 Template 模式的根本区别所在。
Strategy 通过“组合”（委托） 方式实现算法（实现）的异构，而 Template 模式则采取的
是继承的方式。
这两个模式的区别也是继承和组合两种实现接口重用的方式的区别
*/
class Context 
{
public:
	Context(Strategy* st);
	~Context();

	void DoAction();
private:
	Strategy* st_;
};

}  //namespace dp

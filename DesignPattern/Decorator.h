#pragma once

namespace dp {

class Component
{
public:
	virtual ~Component();
	virtual void Operation();

protected:
	Component();
};

class ConcreteComponent : public Component
{
public:
	ConcreteComponent();
	virtual ~ConcreteComponent();
	virtual void Operation();

};

class Decorator : public Component
{
public:
	Decorator(void);
	Decorator(Component* cp);
	virtual ~Decorator(void);
	virtual void Operation();

//¼Ì³Ð¸ø×ÓÀà
protected:
	Component* cp_;
};

class ConcreteDecoratorA : public Decorator
{
public:
	ConcreteDecoratorA();
	ConcreteDecoratorA(Component* cp);
	virtual ~ConcreteDecoratorA();
	
	void Operation();
	void AddedBehaviorA();
};

class ConcreteDecoratorB : public Decorator
{
public:
	ConcreteDecoratorB();
	ConcreteDecoratorB(Component* cp);
	virtual ~ConcreteDecoratorB();

	void Operation();
	void AddedBehaviorB();
};

} //namespace dp


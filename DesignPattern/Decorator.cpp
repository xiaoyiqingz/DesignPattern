#include "Decorator.h"

#include <iostream>

namespace dp {

Component::Component()
{
}	

Component::~Component()
{
}

void Component::Operation()
{
	std::cout << "Component Operation..." << std::endl;
}

ConcreteComponent::ConcreteComponent()
{
}

ConcreteComponent::~ConcreteComponent()
{
}

void ConcreteComponent::Operation()
{
	std::cout << "ConcreteComponent Operation..." << std::endl;
}

Decorator::Decorator(void)
{
}

Decorator::Decorator(Component* cp)
	: cp_(cp)
{
}

Decorator::~Decorator(void)
{
}

void Decorator::Operation()
{
	std::cout << "Decorator Operation..."  << std::endl;
}

ConcreteDecoratorA::ConcreteDecoratorA()
{
}

ConcreteDecoratorA::ConcreteDecoratorA(Component* cp)
	: Decorator(cp)
{
}

ConcreteDecoratorA::~ConcreteDecoratorA()
{
}

void ConcreteDecoratorA::Operation()
{
	std::cout << "ConcreteDecoratorA Operation..." << std::endl;

	cp_->Operation();
	this->AddedBehaviorA();
}

void ConcreteDecoratorA::AddedBehaviorA()
{
	std::cout << "ConcreteDecoratorA AddedBehaviorA..." << std::endl;
}

ConcreteDecoratorB::ConcreteDecoratorB()
{
}

ConcreteDecoratorB::ConcreteDecoratorB(Component* cp)
	: Decorator(cp)
{
}

ConcreteDecoratorB::~ConcreteDecoratorB()
{
}

void ConcreteDecoratorB::Operation()
{
	std::cout << "ConcreteDecoratorB Operation..." << std::endl;
	cp_->Operation();
	this->AddedBehaviorB();
}

void ConcreteDecoratorB::AddedBehaviorB()
{
	std::cout << "ConcreteDecoratorB AddBehaviorB..." << std::endl;
}

} //namespace dp



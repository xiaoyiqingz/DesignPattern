// DesignPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//01
#include "Factory.h"
#include "Product.h"

//02
#include "AbsFactory.h"
#include "AbsProduct.h"

//03
#include "Singleton.h"

//04
#include "BuilderProduct.h"
#include "Builder.h"
#include "Director.h"

//05
#include "Prototype.h"

//06
#include "Bridge.h"

//07
#include "Adapter.h"

//08
#include "Decorator.h"

void FuncFactory();
void FuncAbstractFactory();
void FuncSingleton();
void FuncBuilder();
void FuncPrototype();

void FuncBridge();
void FuncAdapter();
void FuncDecorator();

using namespace dp;

int _tmain(int argc, _TCHAR* argv[])
{
	//FuncFactory();
	//FuncAbstractFactory();
	//FuncSingleton();
	//FuncBuilder();
	//FuncPrototype();
	
	//FuncBridge();
	//FuncAdapter();
	FuncDecorator();

	return 0;
}

void FuncFactory()
{
	Factory* fac = new ConcreateFactory();
	Product* p = fac->CreateProduct();

	delete p;
	delete fac;
	p = NULL;
	fac = NULL;
}

void FuncAbstractFactory()
{
	AbsFactory* factory1 = new Factory1();
	factory1->CreateProductA();
	factory1->CreateProductB();

	AbsFactory* factory2 = new Factory2();
	factory2->CreateProductA();
	factory2->CreateProductB();
}

void FuncSingleton()
{
	Singleton* singleton1 = Singleton::GetInstance();
	singleton1->Print();

	Singleton* singleton2 = Singleton::GetInstance();
	singleton2->Print();
}

void FuncBuilder()
{
	//也可以给 construct 传参数，这样 只需要一种ConcreateBuilder即可
	Director* pDirector1 = new Director(new ConcreteBuilderA());
	BuilderProduct* pProduct1 = pDirector1->Construct();
	pProduct1->ShowInfo();

	Director* pDirector2 = new Director(new ConcreteBuilderB());
	BuilderProduct* pProduct2 = pDirector2->Construct();
	pProduct2->ShowInfo();
}

void FuncPrototype()
{
	Prototype* type1 = new ConcretePrototypeA();
	Prototype* type2 = new ConcretePrototypeB();
	Prototype* typeA = type1->Clone();
	Prototype* typeB = type2->Clone();

	delete typeA;
	delete type1;
	delete typeB;
	delete type2;
}

void FuncBridge()
{
/* 将抽象部分与它的实现部分分离，使得它们可以独立地变化

1、抽象Abstraction与实现AbstractionImplement分离;

2、抽象部分Abstraction可以变化，如new RefinedAbstractionA(imp)、new RefinedAbstractionB(imp2);

3、实现部分AbstractionImplement也可以变化，如new ConcreteAbstractionImplementA()、new ConcreteAbstractionImplementB();
*/

	AbstractionImplement* imp1 = new ConcreteAbstractionImpA();   //实现部分ConcreteAbstractionImplementA
	Abstraction* abs1 = new RedifinedAbstractionA(imp1);   //抽象部分RefinedAbstractionA
	abs1->Operation();

	AbstractionImplement* imp2 = new ConcreteAbstractionImpB();
	Abstraction* abs2 = new RedifinedAbstractionA(imp2);
	abs2->Operation();

	AbstractionImplement* imp3 = new ConcreteAbstractionImpA();
	Abstraction* abs3 = new RedifinedAbstractionB(imp3);
	abs3->Operation();

	AbstractionImplement* imp4 = new ConcreteAbstractionImpB();
	Abstraction* abs4 = new RedifinedAbstractionB(imp4);
	abs4->Operation();
}

void FuncAdapter()
{
	//类模式Adapter
	Target* ada = new AdapterA();
	ada->Request();

	//对象模式Adapter
	Adaptee* ade = new Adaptee();
	Target* adb = new AdapterB(ade);
	adb->Request();

	delete ada;
	delete ade;
	delete adb;
}

void FuncDecorator()
{
	Component* cp = new ConcreteComponent();

	Decorator* de1 = new ConcreteDecoratorA(cp);
	de1->Operation();

	Decorator* de2 = new ConcreteDecoratorB(cp);
	de2->Operation();

	delete cp;
	delete de1;
	delete de2;
}
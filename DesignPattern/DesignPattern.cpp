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

void FuncFactory();
void FuncAbstractFactory();
void FuncSingleton();
void FuncBuilder();

void FuncPrototype();

using namespace dp;

int _tmain(int argc, _TCHAR* argv[])
{
	//FuncFactory();
	//FuncAbstractFactory();
	//FuncSingleton();
	//FuncBuilder();
	FuncPrototype();

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
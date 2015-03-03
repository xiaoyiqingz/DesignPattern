// DesignPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Factory.h"
#include "Product.h"
#include "AbsFactory.h"
#include "AbsProduct.h"

#include "Singleton.h"

void FuncFactory();
void FuncAbstractFactory();
void FuncSingleton();

using namespace dp;

int _tmain(int argc, _TCHAR* argv[])
{
	FuncFactory();
	FuncAbstractFactory();
	FuncSingleton();

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
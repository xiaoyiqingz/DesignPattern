// DesignPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Factory.h"
#include "Product.h"

#include "Singleton.h"

void FuncFactory();
void FuncSingleton();

int _tmain(int argc, _TCHAR* argv[])
{
	FuncFactory();
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

void FuncSingleton()
{
	Singleton* singleton1 = Singleton::GetInstance();
	singleton1->Print();

	Singleton* singleton2 = Singleton::GetInstance();
	singleton2->Print();
}
#include "Singleton.h"

#include <iostream>

//1.static Singleton instance;

//Singleton Singleton::instance;
Singleton* Singleton::pinstance = NULL;
int Singleton::num = 1;   //how  to initialize the static member #int #Singleton 

Singleton::Singleton()
{
	std::cout << "Singleton...." << std::endl;
}

Singleton::~Singleton()
{
	std::cout << "Destructor Singleton...." << std::endl;
}


Singleton* Singleton::GetInstance()
{
	//注：静态函数里面使用类的非静态变量需要将类对象以指针形式传进来，而静态成员变量可直接使用
	num++;

	//1.return &instance;

	//2.static Singleton instance;
	//2.return &instance;
	
	if (pinstance == NULL) {
		pinstance = new Singleton();
	}

	return pinstance;
}

void Singleton::Print()
{
	num = num+1;
	std::cout << "Print...." << num << std::endl;
}

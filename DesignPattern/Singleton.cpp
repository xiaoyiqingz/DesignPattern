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
	//ע����̬��������ʹ����ķǾ�̬������Ҫ���������ָ����ʽ������������̬��Ա������ֱ��ʹ��
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

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

//09
#include "Composite.h"

//10
#include "Flyweight.h"

//11
#include "Facade.h"

//12
#include "Proxy.h"

//13
#include "Template.h"

//14
#include "Strategy.h"

//15
#include "State.h"

//16
#include "Oberver.h"

//17
#include "Memento.h"

//18
#include "Mediator.h"

//19
#include "Command.h"

//20
#include "Vistor.h"

//21
#include "Handle.h"

//22 
#include "Iterator.h"

void FuncFactory();
void FuncAbstractFactory();
void FuncSingleton();
void FuncBuilder();
void FuncPrototype();

void FuncBridge();
void FuncAdapter();
void FuncDecorator();
void FuncComposite();
void FuncFlyweight();
void FuncFacade();
void FuncProxy();

void FuncTemplate();
void FuncStrategy();
void FuncState();
void FuncObserver();
void FuncMemento();
void FuncMediator();
void FuncCommand();
void FuncVistor();
void FuncHandle();
void FuncIterator();

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
	//FuncDecorator();
	//FuncComposite();
	//FuncFlyweight();
	//FuncFacade();
	//FuncProxy();

	//FuncTemplate();
	//FuncStrategy();
	//FuncState();
	//FuncObserver();
	//FuncMemento();
	//FuncMediator();
	//FuncCommand();
	//FuncVistor();
	//FuncHandle();
	FuncIterator();


	getchar();
	 _CrtDumpMemoryLeaks(); 
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

void FuncComposite()
{
	Composite* pRoot = new Composite("Root");
	pRoot->Add(new Leaf("Leaf"));
	
	pRoot->Add(new Composite("Son"));
	ComponentEx* pFirstCom = pRoot->GetChild(1);
	Leaf* pLeaf1 = new Leaf("Leaf1");
	Leaf* pLeaf2 = new Leaf("Leaf2");

	pFirstCom->Add(pLeaf1);
	pFirstCom->Add(pLeaf2);

	pFirstCom->GetChild(1)->Operation();

	pFirstCom->Remove(pLeaf2);
	pFirstCom->Remove(pLeaf1);

	pRoot->Remove(pFirstCom);
	pRoot->Remove(pRoot->GetChild(0));

	delete pRoot;
}

void FuncFlyweight()
{
	FlyweightFactory* pFwFac = new FlyweightFactory();
	std::string str1 = pFwFac->GetFlyweightString(0);
	std::string str2 = pFwFac->GetFlyweightString(0);
	std::string str3 = pFwFac->GetFlyweightString(0);
	
	std::string str4 = pFwFac->GetFlyweightString(1);
	std::string str5 = pFwFac->GetFlyweightString(2);
	std::string str6 = pFwFac->GetFlyweightString(0);

	delete pFwFac;
}

void FuncFacade()
{
	Facade* fd = new Facade();
	fd->Operation();

	delete fd;
}

void FuncProxy()
{
	Subject* sb = new ConcreteSubject();
	
	Proxy* pr = new Proxy(sb);

	pr->Request();

	delete pr;
	pr = NULL;

	sb->Request();
	delete sb;
	sb = NULL;
}

void FuncTemplate()
{
	AbstractClass* ac1 = new ConcreteClass1();
	AbstractClass* ac2 = new ConcreteClass2();

	ac1->TemplateMethod();
	ac2->TemplateMethod();

	delete ac2;
	delete ac1;
}

void FuncStrategy()
{
	Strategy* st = new ConcreteStrategyA();

	Context* ct = new Context(st);

	ct->DoAction();

	if (ct != NULL) {
		delete ct;
		ct = NULL;
	}
}

void FuncState()
{
	State* st = new ConcreteStateA();

	ContextS* ct = new ContextS(st);

	ct->Request();
	ct->Request();
	ct->Request();
	ct->Request();

	delete ct;
	delete st;
	ct = NULL;
	st = NULL;
}

void FuncObserver()
{
	ConcreteObserverA* ob_a = new ConcreteObserverA();
	ConCreteObserverB* ob_b = new ConCreteObserverB();

	Notifyer* nt = new ConcreteNotifyer();
	nt->Attach(ob_a);
	nt->Attach(ob_b);
	nt->Attach(ob_a);

	nt->SetState("state1");
	nt->Notify();

	nt->SetState("state2");
	nt->Notify();

	nt->Detach(ob_a);
	nt->Detach(ob_b);

	delete nt;
	delete ob_b;
	delete ob_a;
}

void FuncMemento()
{
	Originator* og = new Originator();
	og->SetState("State1");
	og->PrintState();

	Memento* mt = og->CreateMemento();
	og->SetMemento(mt);

	og->SetState("state2");
	og->PrintState();

	og->RestoreToMemento(mt);
	og->PrintState();

	delete og;
}

void FuncMediator()
{
	ConcreteMediator* md = new ConcreteMediator();

	ConcreteColleageA* clgA = new ConcreteColleageA(md);
	ConcreteColleageB* clgB = new ConcreteColleageB(md);

	md->IntroColleage(clgA, clgB);

	clgA->SetState("clgA");
	clgB->SetState("clgB");
	clgA->DoAction();
	clgB->DoAction();

	std::cout << std::endl;
	clgA->SetState("new");
	clgA->DoAction();
	clgB->DoAction();
	std::cout << std::endl;

	clgB->SetState("old");
	clgB->DoAction();
	clgA->DoAction();

	delete clgB;
	delete clgA;
	delete md;
}

void FuncCommand()
{
	Receiver* rc = new Receiver();
	Command* cmd = new ConcreteCommand(rc);
	Invoker* iv = new Invoker(cmd);

	iv->Invoke();
	
	delete iv;
	delete cmd;
	delete rc;
}

void FuncVistor()
{
	IVistor* vs_a = new ConcreteVistorA();
	IVistor* vs_b = new ConcreteVistorB();
	IElement* el_a = new ConcreteElementA();
	IElement* el_b = new ConcreteElementB();

	el_a->SetNum(20);
	el_a->Accept(vs_a);

	el_b->SetNum(-1);
	el_b->Accept(vs_a);

	el_a->Accept(vs_b);
	el_b->Accept(vs_b);

	delete el_b;
	delete el_a;
	delete vs_b;
	delete vs_a;
}

void FuncHandle()
{
	Handle* hd1 = new ConcreteHandleA();
	Handle* hd2 = new ConcreteHandleB(hd1);
	Handle* hd3 = new ConcreteHandleA(hd2);
	hd3->HandleRequest();

	std::cout << std::endl;

	Handle* hd4 = new ConcreteHandleB();
	Handle* hd5 = new ConcreteHandleA();
	Handle* hd6 = new ConcreteHandleB();
	hd5->SetSuccessor(hd6);
	hd4->SetSuccessor(hd5);
	hd4->HandleRequest();

	delete hd6;
	delete hd5;
	delete hd4;
	delete hd3;
	delete hd2;
	delete hd1;
}

void FuncIterator()
{
	IAggregate* ag = new ConcreteAggregate();
	Iterator* iter = new ConcreteIterator(ag);

	for (; !iter->IsDone(); iter->Next()) {
		std::cout << iter->CurrentItem() << std::endl;
	}

}
#include "Handle.h"

#include <iostream>

namespace dp{

Handle::Handle()
	: hd_(NULL)
{
}

Handle::Handle(Handle* hd)
	: hd_(hd)
{
}

Handle::~Handle()
{
}

void Handle::SetSuccessor(Handle* hd)
{
	hd_ = hd;
}

Handle* Handle::GetSuccessor()
{
	return hd_;
}


ConcreteHandleA::ConcreteHandleA()
{

}

ConcreteHandleA::ConcreteHandleA(Handle* hd)
	: Handle(hd)
{

}

ConcreteHandleA::~ConcreteHandleA()
{

}

void ConcreteHandleA::HandleRequest()
{
	std::cout << "HandleA Begin Handle the Request:" << std::endl;
	if (GetSuccessor() != NULL) {
		std::cout << "GetSuccessor is not null, i will let Successor node"
			" handle the request" << std::endl;
		GetSuccessor()->HandleRequest();
	} else {
		std::cout << "GetSuccessor is null, i will handle the Request" << std::endl;
	}
}


ConcreteHandleB::ConcreteHandleB()
{
}

ConcreteHandleB::ConcreteHandleB(Handle* hd)
	: Handle(hd)
{
}

ConcreteHandleB::~ConcreteHandleB()
{

}

void ConcreteHandleB::HandleRequest()
{
	std::cout << "HandleB Begin Handle the Request:" << std::endl;
	if (GetSuccessor() != NULL) {
		std::cout << "GetSuccessor is not null, i will let Successor node"
			" handle the request" << std::endl;
		GetSuccessor()->HandleRequest();
	} else {
		std::cout << "GetSuccessor is null, i will handle the Request" << std::endl;
	}
}

} //namespace dp
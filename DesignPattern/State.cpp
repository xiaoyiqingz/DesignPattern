#include "State.h"

#include <iostream>
#include <assert.h>

namespace dp {

//ִ�и�״̬����Ϊ���ı�״̬
void ConcreteStateA::Handle(ContextS* ct)
{
	std::cout << "Do Some thing in StateA and change state to B" << std::endl;
	ct->ChangeState(new ConcreteStateB());
}

//ִ�и�״̬����Ϊ���ı�״̬
void ConcreteStateB::Handle(ContextS* ct)
{
	std::cout << "Do some thing in StateB and change state to C" << std::endl;
	ct->ChangeState(new ConcreteStateC());
}

//ִ�и�״̬����Ϊ���ı�״̬
void ConcreteStateC::Handle(ContextS* ct)
{
	std::cout << "Do Some thing in StateC and change state to A" << std::endl;
	ct->ChangeState(new ConcreteStateA());
}

void ContextS::Request()
{
	assert(st_ != NULL);

	if (st_ == NULL)
		return;

	st_->Handle(this);
}

void ContextS::ChangeState(State* st)
{
	State* st_old;
	st_old = st_;
	st_ = st;
	
	/*Memory Leaks*/
	delete st_old;
	st_old = NULL;
}

} //namespace dp

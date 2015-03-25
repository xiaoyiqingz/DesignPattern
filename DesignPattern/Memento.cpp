#include "Memento.h"

#include <iostream>

namespace dp {

typedef std::string State;

Originator::Originator()
	: mt_(NULL), st_("\0")
{
}

Originator::Originator(const State& st)
	: mt_(NULL), st_(st)
{
}

Originator::~Originator()
{
	if (mt_ = NULL) {
		delete mt_;
	}
}

Memento* Originator::CreateMemento()
{
	Memento* mt = new Memento(st_);
	SetMemento(mt);
	return  mt;
}

void Originator::SetMemento(Memento* mt)
{
	mt_ = mt;
}

void Originator::RestoreToMemento(Memento* mt)
{
	st_ = mt->GetState();
}

void Originator::RestoreToMemtnto()
{
	st_ = mt_->GetState();
}


void Originator::SetState(const State& st)
{
	st_ = st;
}

State Originator::GetState()
{
	return st_;
}

void Originator::PrintState()
{
	std::cout << st_ << "..." << std::endl;
}

Memento::Memento(const State& st)
	: st_(st)
{

}

Memento::~Memento()
{

}

void Memento::SetState(const State& st)
{
	st_ = st;
}

State Memento::GetState()
{
	return st_;
}

} // namespace dp
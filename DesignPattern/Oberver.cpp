#include "Oberver.h"

#include <algorithm>
#include <iostream>
#include <string>

namespace dp {

using namespace std;

Notifyer::~Notifyer()
{
}

void Notifyer::Attach(Observer* ob)
{
	auto iter = find(m_observer.begin(), m_observer.end(), ob);
	if (iter == m_observer.end()) {
		m_observer.push_back(ob);
	}
}

void Notifyer::Detach(Observer* ob)
{
	auto iter = find(m_observer.begin(), m_observer.end(), ob);
	if (iter != m_observer.end()) {
		m_observer.erase(iter);
	}
}

void Notifyer::Notify()
{
	for (auto iter = m_observer.begin(); iter != m_observer.end(); iter++) {
		(*iter)->Update(this);
	}
}

void ConcreteNotifyer::SetState(const NState& st)
{
	st_ = st;
}

NState ConcreteNotifyer::GetState()
{
	return st_;
}


void ConcreteObserverA::Update(Notifyer* nt)
{
	st_ = nt->GetState();

	std::cout << "Concrete ObserverA" << st_ << std::endl;
}

void ConCreteObserverB::Update(Notifyer* nt)
{
	st_ = nt->GetState();
	std::cout << "Concrete ObserverB" << st_ << std::endl;
}

} //namespace dp
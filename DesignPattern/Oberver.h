#pragma  once

#include <vector>

namespace dp {
typedef  std::string  NState;

class Observer;

class  Notifyer
{
public:
	virtual ~Notifyer();
	virtual void Attach(Observer* ob);
	virtual void Detach(Observer* ob);
	virtual void Notify();
	virtual void SetState(const NState& st) = 0;
	virtual NState GetState() = 0;

protected:
	Notifyer() {};

private:
	std::vector<Observer*>  m_observer;
};

class ConcreteNotifyer : public Notifyer
{
public:
	ConcreteNotifyer() { st_ ="\0"; }
	virtual ~ConcreteNotifyer() {} ;
	virtual void SetState(const NState& st);
	virtual NState GetState();

private:
	NState st_;
};

class Observer
{
public:
	virtual ~Observer(){};
	virtual void Update(Notifyer* nt) = 0;

protected:
	Observer(){};
	NState  st_;
};

class ConcreteObserverA : public Observer
{
public:
	ConcreteObserverA() {};
	virtual ~ConcreteObserverA() {};
	virtual void Update(Notifyer* nt);
};

class ConCreteObserverB : public Observer
{
public:
	ConCreteObserverB() {} ;
	virtual ~ConCreteObserverB() {} ;
	virtual void Update(Notifyer* nt);
};

} //namespace dp
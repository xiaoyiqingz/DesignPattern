#pragma  once 

namespace dp {

class ContextS;

class State
{
public:
	State() {} ;
	virtual ~State() {};

	virtual void Handle(ContextS* ct) = 0;
};

class ConcreteStateA : public State
{
public:
	ConcreteStateA() {};
	virtual ~ConcreteStateA() {};

	virtual void Handle(ContextS* ct);
};

class ConcreteStateB : public State
{
public:
	ConcreteStateB() {} ;
	virtual ~ConcreteStateB() {};

	virtual void Handle(ContextS* ct);
};

class ConcreteStateC : public State
{
public:
	ConcreteStateC() {};
	virtual ~ConcreteStateC() {} ;

	virtual void Handle(ContextS* ct);
};


class ContextS
{
public:
	ContextS(State* st) {st_ = st;}
	~ContextS() {};

	void Request();
	void ChangeState(State* st);

private:
	State* st_;
};

} //namespace dp






#pragma once

#include <string>

namespace dp {

class Mediator;

class Colleage
{
public:
	virtual ~Colleage();
	virtual void DoAction() = 0;
	virtual void SetState(const std::string& st) = 0;
	virtual std::string GetState() = 0;
protected:
	Colleage();
	Colleage(Mediator* md);
	Mediator* md_;
};

class ConcreteColleageA : public Colleage
{
public:
	ConcreteColleageA();
	ConcreteColleageA(Mediator* mt);
	virtual ~ConcreteColleageA();
	virtual void DoAction();
	virtual void SetState(const std::string& st);
	virtual std::string GetState();

private:
	std::string st_;
};

class ConcreteColleageB : public Colleage
{
public:
	ConcreteColleageB();
	ConcreteColleageB(Mediator* mt);
	virtual ~ConcreteColleageB();
	virtual void DoAction();
	virtual void SetState(const std::string& st);
	virtual std::string GetState();

private:
	std::string st_;
};


class Mediator
{
public:
	virtual ~Mediator();
	virtual void DoActionFromAToB() = 0;
	virtual void DoActionFromBToA() = 0;

protected:
	Mediator();
};

class ConcreteMediator : public Mediator
{
public:
	ConcreteMediator();
	ConcreteMediator(Colleage* clgA, Colleage* clgB);
	~ConcreteMediator();

	virtual void DoActionFromAToB();
	virtual void DoActionFromBToA();

	void SetConcreteColleageA(Colleage* clgA);
	void SetConcreteColleageB(Colleage* clgB);
	void IntroColleage(Colleage* clgA, Colleage* clgB);
	Colleage* GetConcreteColleageA();
	Colleage* GetConcreteColleageB();

private:
	Colleage* clgA_;
	Colleage* clgB_;
};




} // namespace dp
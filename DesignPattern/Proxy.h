#pragma once

namespace dp {

class Subject
{
public:
	virtual ~Subject(){};
	virtual void Request() = 0;

protected:
	Subject(){};
};

class ConcreteSubject : public Subject
{
public:
	ConcreteSubject(){};
	~ConcreteSubject(){};

	void Request();
};

class Proxy
{
public:
	Proxy(void);
	Proxy(Subject* sb);
	~Proxy(void);

	void Request();

private:
	Subject* sb_;
};

} //namespace dp
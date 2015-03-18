#pragma once

namespace dp {

class SubSystemA
{
public:
	SubSystemA() {};
	~SubSystemA() {};

	void OperationA();
};

class SubSystemB
{
public:
	SubSystemB() {};
	~SubSystemB() {};

	void OperationB();
};

class Facade
{
public:
	Facade();
	~Facade();

	void Operation();

private:
	SubSystemA* subA_;
	SubSystemB* subB_;
};

} //namespace dp
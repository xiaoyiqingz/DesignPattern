#pragma  once

namespace dp {

class Receiver
{
public:
	Receiver() {};
	~Receiver() {};

	void DoAction();
};

class Command
{
public:
	virtual ~Command(){};
	virtual void Execute() = 0;

protected:
	Command(){};
};

class ConcreteCommand : public Command
{
public:
	ConcreteCommand(Receiver* rc);
	virtual ~ConcreteCommand();
	virtual void Execute();

private:
	Receiver* rc_;
};

class Invoker
{
public:
	Invoker(Command* cmd);
	~Invoker();
	void Invoke();

private:
	Command* cmd_;
};

} // namespace dp
#pragma  once

namespace dp {

class Handle
{
public:
	virtual ~Handle();
	virtual void HandleRequest() = 0;
	void SetSuccessor(Handle* hd);
	Handle* GetSuccessor();

protected:
	Handle();
	Handle(Handle* hd);

private:
	Handle* hd_;
};


class ConcreteHandleA : public Handle
{
public:
	ConcreteHandleA();
	ConcreteHandleA(Handle* hd);
	virtual ~ConcreteHandleA();
	virtual void HandleRequest();
};

class ConcreteHandleB : public Handle
{
public:
	ConcreteHandleB();
	ConcreteHandleB(Handle* hd);
	virtual ~ConcreteHandleB();
	virtual void HandleRequest();
};

} //namespace dp
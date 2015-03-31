#pragma once 

#include<Windows.h>

typedef int Object;

namespace dp {

class Iterator;
class IAggregate
{
public:
	virtual ~IAggregate() {} ;
	virtual Iterator* CreateIterator() = 0;
	virtual Object GetItem(int nItem) = 0;
	virtual int GetSize() = 0;

protected:
	IAggregate() {};
};

class ConcreteAggregate : public IAggregate
{
public:
	enum {SIZE=3};
	ConcreteAggregate();
	virtual ~ConcreteAggregate();
	virtual Iterator* CreateIterator();
	virtual Object GetItem(int nIndex);
	virtual int GetSize();

private:
	Object obj_[SIZE];
};

class Iterator
{
public:
	virtual ~Iterator() {} ;
	virtual void First() = 0;
	virtual void Next() = 0;
	virtual BOOL IsDone() = 0;
	virtual Object CurrentItem() = 0;

protected:
	Iterator() {} ;
};

class ConcreteIterator : public Iterator
{
public:
	ConcreteIterator(IAggregate* ag, int nIndex = 0);
	virtual ~ConcreteIterator();
	virtual void First();
	virtual void Next();
	virtual BOOL IsDone();
	virtual Object CurrentItem();

private:
	IAggregate* ag_;
	int  index_;
};

} //namespace dp
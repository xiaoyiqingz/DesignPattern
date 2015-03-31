#include "Iterator.h"

namespace dp {

ConcreteAggregate::ConcreteAggregate()
{
	for (int i=0; i < SIZE; i++) {
		obj_[i] = i;
	}
}

ConcreteAggregate::~ConcreteAggregate()
{

}

Iterator* ConcreteAggregate::CreateIterator()
{
	return new ConcreteIterator(this);
}

Object ConcreteAggregate::GetItem(int nIndex)
{
	if (nIndex < GetSize())
		return obj_[nIndex];

	else 
		return -1;
}

int ConcreteAggregate::GetSize()
{
	return SIZE;
}


ConcreteIterator::ConcreteIterator(IAggregate* ag, int nIndex)
	: ag_(ag) , index_(nIndex)
{

}

ConcreteIterator::~ConcreteIterator()
{

}

void ConcreteIterator::First()
{
	index_ = 0;
}

void ConcreteIterator::Next()
{
	if (index_ < ag_->GetSize())
		index_++;
}

Object ConcreteIterator::CurrentItem()
{
	return ag_->GetItem(index_);
}

BOOL ConcreteIterator::IsDone()
{
	return (index_ == ag_->GetSize());
}

} //namesapce dp
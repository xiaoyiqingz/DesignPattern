#include "Director.h"
#include "Builder.h"

namespace dp {

Director::Director(Builder* bd) :
	bd_(bd)
{
}


Director::~Director(void)
{
}

BuilderProduct* Director::Construct()
{
	bd_->BuildPartA();
	bd_->BuildPartB();
	bd_->BuildPartC();

	return bd_->GetProduct();
}

} // namespace dp
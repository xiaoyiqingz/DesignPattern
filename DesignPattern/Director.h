#pragma once

/************************************************************************
/*doirector: 指挥者，构建一个使用Builder接口的对象                            */
/************************************************************************/

namespace dp {
	class BuilderProduct;
	class Builder;

class Director
{
public:
	Director(Builder* bd);
	~Director(void);

	BuilderProduct* Construct();
private: 
	Builder* bd_;
};

} // namespace dp
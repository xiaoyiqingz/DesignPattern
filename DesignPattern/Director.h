#pragma once

/************************************************************************
/*doirector: ָ���ߣ�����һ��ʹ��Builder�ӿڵĶ���                            */
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
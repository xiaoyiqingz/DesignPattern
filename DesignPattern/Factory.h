#pragma once

class Product;

class Factory
{
public:
	virtual ~Factory()=0;
	virtual Product* CreateProduct() = 0;

protected:
	Factory();
};

class ConcreateFactory : public Factory
{
public:
	~ConcreateFactory();
	ConcreateFactory();
	 
	virtual Product* CreateProduct();
};

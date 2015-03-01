#pragma once

class Product
{
public:
	virtual ~Product() = 0;
protected:
	Product();
};

class ConcreateProduct : public Product
{
public:
	~ConcreateProduct();
	ConcreateProduct();
};


#pragma  once 

/************************************************************************
/*Builder: 是为创建一个Product对象的各个部件指定的抽象接口                     
  ConcreateBuilder： 具体建造者，实现Builder接口，构造和装配各个部件，每种建造者
					有自己的实现
*/
/************************************************************************/

namespace dp{

class BuilderProduct;

class Builder 
{
public:
	virtual ~Builder();
	virtual void BuildPartA()=0;
	virtual void BuildPartB()=0;
	virtual void BuildPartC()=0;

	virtual BuilderProduct* GetProduct()=0;

protected:
	Builder();
};

class ConcreteBuilderA : public Builder
{
public:
	ConcreteBuilderA();
	~ConcreteBuilderA();

	void BuildPartA();
	void BuildPartB();
	void BuildPartC();
	
	BuilderProduct* GetProduct();

private:
	BuilderProduct* m_pProduct;
};

class ConcreteBuilderB : public Builder
{
public:
	ConcreteBuilderB();
	~ConcreteBuilderB();

	void BuildPartA();
	void BuildPartB();
	void BuildPartC();

	BuilderProduct* GetProduct();

private:
	BuilderProduct* m_pProduct;
};

} //namesapce dp

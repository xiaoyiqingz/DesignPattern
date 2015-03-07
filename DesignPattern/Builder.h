#pragma  once 

/************************************************************************
/*Builder: ��Ϊ����һ��Product����ĸ�������ָ���ĳ���ӿ�                     
  ConcreateBuilder�� ���彨���ߣ�ʵ��Builder�ӿڣ������װ�����������ÿ�ֽ�����
					���Լ���ʵ��
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

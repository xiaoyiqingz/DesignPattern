#pragma once

namespace dp {

class Singleton
{
public:
	~Singleton();

	static Singleton* GetInstance();
	
	void Print();

protected:
	Singleton();  //singleton不可以被实例化  所以声明为procted 或private

public: 
//	static Singleton instance; //要用指针
	static Singleton* pinstance;
	static int num;
};

} // namespace dp
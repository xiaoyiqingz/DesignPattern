#pragma once

class Singleton
{
public:
	~Singleton();

	static Singleton* GetInstance();
	
	void Print();

protected:
	Singleton();  //singleton�����Ա�ʵ����  ��������Ϊprocted ��private

public: 
//	static Singleton instance; //Ҫ��ָ��
	static Singleton* pinstance;
	static int num;
};
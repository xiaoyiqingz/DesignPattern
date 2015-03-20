#pragma once

namespace dp {

class Strategy
{
public:
	Strategy(void);
	virtual ~Strategy(void);

	virtual void AlgrithmInterface() = 0;
};

class ConcreteStrategyA : public Strategy
{
public:
	ConcreteStrategyA() {};
	virtual ~ConcreteStrategyA();
	void AlgrithmInterface();
};

class ConcreteStrategyB : public Strategy
{
public:
	ConcreteStrategyB() {};
	virtual ~ConcreteStrategyB();
	void AlgrithmInterface();
};

/**
������� Strategy ģʽ�Ĺؼ��� Ҳ�� Strategyģʽ�� Template ģʽ�ĸ����������ڡ�
Strategy ͨ������ϡ���ί�У� ��ʽʵ���㷨��ʵ�֣����칹���� Template ģʽ���ȡ��
�Ǽ̳еķ�ʽ��
������ģʽ������Ҳ�Ǽ̳к��������ʵ�ֽӿ����õķ�ʽ������
*/
class Context 
{
public:
	Context(Strategy* st);
	~Context();

	void DoAction();
private:
	Strategy* st_;
};

}  //namespace dp

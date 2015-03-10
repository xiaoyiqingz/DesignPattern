#pragma once

namespace dp {

//��Ҫ�������
class Adaptee 
{
public:
	Adaptee();
	virtual ~Adaptee();

	void SpecificRequest();
};

//Ŀ��ӿ��࣬�ͻ���Ҫ�Ľӿ�
class Target
{
public:
	Target();
	virtual ~Target();
	virtual void Request();  //�����׼�ӿ�
};

//��ģʽ���������࣬ͨ��public�̳л�ýӿڼ̳е�Ч����ͨ��private�̳л��ʵ�ּ̳е�Ч��
class AdapterA : public Target, private Adaptee
{
public:
	AdapterA();
	~AdapterA();

	void Request(); //ʵ��Target�����Request�ӿ�
};

//����ģʽ���������࣬�̳�Target�࣬������ϵķ�ʽʵ��Adaptee�ĸ���
class AdapterB : public Target
{
public:
	AdapterB(Adaptee* ad);
	~AdapterB();
	AdapterB();

	void Request(); //ʵ��Target�����Request�ӿ�
private:
	Adaptee* ad_;
};

}
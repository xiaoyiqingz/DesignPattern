#pragma once

#include <vector>
#include <iostream>

namespace dp {

 /*
 Component������࣬Ϊ����еĶ��������ӿ�,�������๲�нӿڵ�ȱʡ��Ϊ(�������Add,Remove,GetChild����),
 ����һ���ӿں������Է���Component�������.
*/
class ComponentEx
{
public:
	virtual ~ComponentEx(){};

	virtual void Operation() = 0;
	inline virtual void Add(ComponentEx* cp){std::cout << "Add ... " << std::endl;};
	inline virtual void Remove(ComponentEx* cp){std::cout << "Remove ... " << std::endl; } 
	inline virtual ComponentEx* GetChild(int){ return NULL; }
	inline virtual std::string* GetName() {return NULL; }

protected:
	ComponentEx(){};
};

class Leaf : public ComponentEx
{
public:
	virtual void Operation();
	Leaf(std::string sName) : sName_(sName) {};
	std::string* GetName();
	~Leaf(){};

protected:
	Leaf() : sName_("Null") {};

private:
	std::string sName_;
};

class Composite : public ComponentEx
{
public:
	Composite(std::string sName) : sName_(sName){};
	~Composite(){};

	virtual void Operation();
	virtual void Add(ComponentEx* cp);
	virtual void Remove(ComponentEx* cp);
	virtual ComponentEx* GetChild(int index);
	std::string* GetName();

protected:
	Composite() : sName_("Null"){};

private: 
	std::string sName_;
	std::vector<ComponentEx*> m_ComVec;
};

} //namespace dp

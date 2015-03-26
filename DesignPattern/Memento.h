#pragma once

#include <string>

namespace dp {

class Memento;

class Originator
{
public:
	typedef std::string State;
	Originator();
	Originator(const State& st_);
	~Originator();
	
	//Create a Memento to save the st_
	Memento* CreateMemento();
	
	//save the Memento 
	//and you also can set it private and call it in CreateMemento 
	void SetMemento(Memento* mt);
	
	//use a Memento From outside
	void RestoreToMemento(Memento* mt);
	
	//use a Memento From inside;
	void RestoreToMemtnto();

	void SetState(const State& st);
	State GetState();
	void PrintState();

private:
	Memento* mt_;
	State  st_;
};

class Memento
{
private:
	typedef std::string State;
	friend class Originator;
	Memento(const State& st);
	~Memento();
	void SetState(const State& st);
	State GetState();

	State st_;
};


} // namespace dp
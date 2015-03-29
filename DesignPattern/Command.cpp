#include "Command.h"

#include <iostream>

namespace dp {
	 
void Receiver::DoAction()
{
	std::cout << " Receiver Action..." << std::endl;
}



ConcreteCommand::ConcreteCommand(Receiver* rc)
	: rc_(rc)
{
}

ConcreteCommand::~ConcreteCommand()
{

}

void ConcreteCommand::Execute()
{
	rc_->DoAction();
}


Invoker::Invoker(Command* cmd)
	: cmd_(cmd)
{
}

Invoker::~Invoker()
{

}

void Invoker::Invoke()
{
	cmd_->Execute();
}

} //namespace dp
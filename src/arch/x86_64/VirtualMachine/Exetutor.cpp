#include <definitions.h>

#include <iostream>
#include <stack>
#include <Block.h>
#include <Instruction.h>
#include <Executor.h>
#include <Types.h>

using namespace std;

void printobjectstack(stack<BaseObject *> s){
	cout<<"stack--> ";
	while(!s.empty()){
		cout<<s.top()->__repr__()<<"  ";
		s.pop();		
	}
	cout<<endl;
}

ExecutionUnit::ExecutionUnit(){

}

void ExecutionUnit::Execute(){

	if(this->blockstack.empty()){
		this->blockstack.push(this->blocks[0]);
	}

	stack<BaseObject *> s;
	for(Instruction instruction : this->blockstack.top()->bytecode){
		if(DEBUG){cout<<"now executing:"<<instruction.InstructionCode<<", arg:"<<instruction.InstructionArgument<<endl;}
		switch(instruction.InstructionCode){
			case NOP: 
				break;
			case STOP_EXECUTION:
				if(DEBUG){cout<<"exiting program"<<endl;}
				exit(0);
				break;
			case LOAD_CONST:
				s.push(
					this->blockstack.top()->constants[
						instruction.InstructionArgument
						]
					);
				break;	
			case BINARY_ADD:
				BaseObject * a = s.top();
				s.pop();
				BaseObject * b = s.top();
				s.pop();
				s.push(
					b->__add__(a)
					);
				break;	
		}
		if(DEBUG){printobjectstack(s);}
	}
}

void ExecutionUnit::AddBlock(Block * block){
	this->blocks.push_back(block);
}




















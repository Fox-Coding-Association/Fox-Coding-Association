
#ifndef EXECUTOR_H
#define EXECUTOR_H

#include <iostream>
#include <vector>
#include <stack>
#include <Block.h>
#include <Instruction.h>
#include <Types.h>

using namespace std;

class ExecutionUnit{
	private:
		stack<Block *> blockstack;
		vector<Block *> blocks;

	public:
		ExecutionUnit();
		void Execute();
		void AddBlock(Block * block);
};


#endif
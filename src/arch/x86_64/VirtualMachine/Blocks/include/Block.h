
#ifndef BLOCK_H
#define BLOCK_H

#include <iostream>
#include <vector>
#include <stack>
#include <Instruction.h>

using namespace std;


struct Block{
	public:
		vector<Instruction> bytecode;
		vector<unsigned char> constants;
		vector<unsigned char> names;
};

#endif


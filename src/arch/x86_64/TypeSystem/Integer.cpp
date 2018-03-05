#include <iostream>
#include <string>
using namespace std;

#include <Integer.h>

Integer::Integer(int val){
	this->val = val;
}

string Integer::__type__(){
	return "Integer";
}
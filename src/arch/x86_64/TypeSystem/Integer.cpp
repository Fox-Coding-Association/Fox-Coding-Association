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

BaseObject * Integer::__add__(BaseObject * other){return new Integer();}
BaseObject * Integer::__sub__(BaseObject * other){return new Integer();}
BaseObject * Integer::__mul__(BaseObject * other){return new Integer();}
BaseObject * Integer::__div__(BaseObject * other){return new Integer();}
BaseObject * Integer::__pow__(BaseObject * other){return new Integer();}
BaseObject * Integer::__mod__(BaseObject * other){return new Integer();}
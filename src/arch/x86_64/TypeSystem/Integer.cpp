#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#include <Float.h>
#include <Integer.h>

Integer::Integer(int val){
	this->val = val;
}

string Integer::__type__(){
	return "Integer";
}

BaseObject * Integer::__add__(BaseObject * other){
	if(other->__type__() == "Integer"){
		return new Integer(this->val + dynamic_cast<Integer *>(other)->val);
	}else if(other->__type__() == "Float"){
		return new Float(this->val + (double)(dynamic_cast<Float *>(other)->val));
	}else{
		exit(1); //error handler
	}
}
BaseObject * Integer::__sub__(BaseObject * other){
	if(other->__type__() == "Integer"){
		return new Integer(this->val - dynamic_cast<Integer *>(other)->val);
	}else if(other->__type__() == "Float"){
		return new Float(this->val - (double)(dynamic_cast<Float *>(other)->val));
	}else{
		exit(1); //error handler
	}
}

BaseObject * Integer::__mul__(BaseObject * other){
	if(other->__type__() == "Integer"){
		return new Integer(this->val * dynamic_cast<Integer *>(other)->val);
	}else if(other->__type__() == "Float"){
		return new Float(this->val * (double)(dynamic_cast<Float *>(other)->val));
	}else{
		exit(1); //error handler
	}
}

BaseObject * Integer::__div__(BaseObject * other){
	if(other->__type__() == "Integer"){
		return new Integer(this->val / dynamic_cast<Integer *>(other)->val);
	}else if(other->__type__() == "Float"){
		return new Float(this->val / (double)(dynamic_cast<Float *>(other)->val));
	}else{
		exit(1); //error handler
	}
}

BaseObject * Integer::__pow__(BaseObject * other){	
	if(other->__type__() == "Integer"){
		return new Integer(pow(this->val, dynamic_cast<Integer *>(other)->val));
	}else if(other->__type__() == "Float"){
		return new Float(pow(this->val, (double)(dynamic_cast<Float *>(other)->val)));
	}else{
		exit(1); //error handler
	}
}

BaseObject * Integer::__mod__(BaseObject * other){
	if(other->__type__() == "Integer"){
		return new Integer( this->val % dynamic_cast<Integer *>(other)->val);
	}else if(other->__type__() == "Float"){
		exit(1); //error handler
	}else{
		exit(1); //error handler
	}
}

BaseObject * Integer::__copy__(){
	return new Integer(this->val);
}
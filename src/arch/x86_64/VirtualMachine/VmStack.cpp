#include <iostream>
using namespace std;
#include <VmStack.h>

VmStack::VmStack(){

}

VmStack::push(T item){
	VmStack * vmsi = new VmStack_Item();
	vmsi->next = this->HEAD;
	this->HEAD->item = item;
	this->HEAD = vmsi;
}

T VmStack::pop(int pos = 0){
	if(this->HEAD == NULL){
		exit(1);
	}
	T vmsi = this->HEAD->item;
	this->HEAD = this->HEAD->item;
	return vmsi;
}
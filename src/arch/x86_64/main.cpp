#include <iostream>
#include <BaseObject.h>
#include <Integer.h>
#include <Float.h>

#include <VmStack.h>

using namespace std;

int main(int argc, char *argv[]){
	BaseObject * a = new Integer(3);
	BaseObject * b = new Float(3.5);
	BaseObject * c = a->__pow__(b);

	VmStack<BaseObject *> * s = new VmStack<BaseObject *>();
	s->push(c);
	s->push(a);

	s->print();

	cout << dynamic_cast<Float *>(s->top())->val << endl;

	s->pop();
	s->pop();
}
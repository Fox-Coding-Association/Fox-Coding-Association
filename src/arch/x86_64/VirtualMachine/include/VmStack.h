#ifndef VMSTACK_H
#define VMSTACK_H

#include <iostream>
using namespace std;

template <class T>
struct VmStack_item{
	struct VmStack_item<T> * next;
	T item;
};

template <class T>
class VmStack{
	private:
		struct VmStack_item<T> * HEAD = NULL;
	public:
		VmStack();
		void push(T item);
		T pop(int pos = 0);
		T top(int pos = 0);
};



#endif

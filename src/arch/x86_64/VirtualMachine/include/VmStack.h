#ifndef VMSTACK_H
#define VMSTACK_H

#include <iostream>
using namespace std;

template <class T>
struct VmStack_Item{
	struct VmStack_Item<T> * next;
	T item;
};

template <class T>
class VmStack{
	private:
		struct VmStack_Item<T> * HEAD = NULL;
	public:
		VmStack(){}
		void push(T item){
			struct VmStack_Item<T> * vmsi = new VmStack_Item<T>();
			vmsi->next = this->HEAD;
			vmsi->item = item;
			this->HEAD = vmsi;
		}

		T pop(int pos = 0){


			if(this->HEAD == NULL){
				exit(1); //error handler
			}
			struct VmStack_Item<T> TEMPHEAD = *this->HEAD;
			for (int i = 0; i < pos; ++i)
			{
				TEMPHEAD = *TEMPHEAD.next;
			}
			T vmsi = TEMPHEAD.item;
			this->HEAD = TEMPHEAD.next;
			return vmsi;
		}

		T top(int pos = 0){
			struct VmStack_Item<T> TEMPHEAD = *this->HEAD;
			for (int i = 0; i < pos; ++i)
			{
				TEMPHEAD = *TEMPHEAD.next;
			}
			cout<<">>"<<TEMPHEAD.item->__repr__()<<endl;
			return TEMPHEAD.item;
		}

		void print(){
			struct VmStack_Item<T> TEMPHEAD = *this->HEAD;
			while(true){
				cout << TEMPHEAD.item->__repr__()<<",";
				if (TEMPHEAD.next == NULL){
					break;
				}
				TEMPHEAD = *TEMPHEAD.next;
			}
			cout<<endl;
		}
};



#endif

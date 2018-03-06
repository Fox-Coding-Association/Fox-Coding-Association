#include <iostream>
#include <BaseObject.h>
#include <Integer.h>
#include <Float.h>

using namespace std;

int main(int argc, char *argv[]){
	BaseObject * a = new Integer(3);
	BaseObject * b = new Float(3.5);
	BaseObject * c = a->__sub__(b);

	cout << dynamic_cast<Float *>(c)->val << endl;
}
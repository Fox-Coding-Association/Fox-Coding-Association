
#ifndef BASEOBJECT_H
#define BASEOBJECT_H

//every type in the language will be a class inheriting from this one. this ensures that every object can be saved
//on the stack (using pointers to the BaseObject).

class BaseObject{
	public:
		BaseObject();
};



#endif


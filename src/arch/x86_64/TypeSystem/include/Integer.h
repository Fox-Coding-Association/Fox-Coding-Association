
#ifndef INTEGER_H
#define INTEGER_H

#include <BaseObject.h>
#include <string>

class Integer : public BaseObject{
	public:
		int val = 0;
		Integer(int val);
		virtual BaseObject * __add__(BaseObject * A, BaseObject * B);
		virtual BaseObject * __sub__(BaseObject * A, BaseObject * B);
		virtual BaseObject * __mul__(BaseObject * A, BaseObject * B);
		virtual BaseObject * __div__(BaseObject * A, BaseObject * B);
		virtual BaseObject * __pow__(BaseObject * A, BaseObject * B);
		virtual BaseObject * __mod__(BaseObject * A, BaseObject * B);

		virtual std::string __type__();

};

#endif
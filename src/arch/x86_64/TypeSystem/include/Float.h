
#ifndef FLOAT_H
#define FLOAT_H

#include <BaseObject.h>
#include <string>

class Float : public BaseObject{
	public:
		double val = 0;
		Float(double val = 0);
		virtual BaseObject * __add__(BaseObject * other);
		virtual BaseObject * __sub__(BaseObject * other);
		virtual BaseObject * __mul__(BaseObject * other);
		virtual BaseObject * __div__(BaseObject * other);
		virtual BaseObject * __pow__(BaseObject * other);
		virtual BaseObject * __mod__(BaseObject * other);

		virtual std::string __type__();
		virtual BaseObject * __copy__();

};

#endif
#ifndef DICT_H
#define DICT_H

#include <BaseObject.h>
#include <string>
#include <map>

class Dict : public BaseObject{
	public:
		std::map<BaseObject *,BaseObject *> val;
		Dict(std::map<BaseObject *,BaseObject *> val);
		virtual BaseObject * __add__(BaseObject * other);
		virtual BaseObject * __sub__(BaseObject * other);
		virtual BaseObject * __mul__(BaseObject * other);
		virtual BaseObject * __div__(BaseObject * other);
		virtual BaseObject * __pow__(BaseObject * other);
		virtual BaseObject * __mod__(BaseObject * other);

		virtual BaseObject * __copy__();
		virtual std::string __type__();
		virtual std::string __repr__();
};

#endif
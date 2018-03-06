
#ifndef JSONOBJECT_H
#define JSONOBJECT_H

#include <iostream>
#include <map>
#include <Types.h>

using namespace std;

class JSON{
	public:

		JSON();
		static JSON * decode(string json);
		static string encode(JSON * );

};

#endif

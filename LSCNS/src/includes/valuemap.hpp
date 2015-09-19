
#ifndef VALUEMAP_HPP
#define VALUEMAP_HPP

#include <map>
#include <iostream>
#include "err.hpp"
#include "strmap.hpp"


using namespace std;

class ValueMap
{
	public:
		ValueMap();
		static int getValueId(string str, STR_ID &value);

};

#endif

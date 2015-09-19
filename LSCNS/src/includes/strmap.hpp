
#ifndef STRMAP_HPP
#define STRMAP_HPP

#include <map>
#include <iostream>
#include "err.hpp"

using namespace std;
typedef void* STR_ID;

class StrMap
{
	private:
		map<string, STR_ID> strmap;

	public:
		StrMap();
		int getStr(string str, STR_ID &id);
};

extern StrMap strmapdata;

#endif

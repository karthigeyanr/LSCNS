
#include "strmap.hpp"
#include <string.h>

StrMap strmapdata;

StrMap::StrMap()
{
	strmap.clear();
}

int StrMap::getStr(string str, STR_ID &id)
{
	map<string, STR_ID>::iterator it;
	if((it = strmap.find(str)) == strmap.end())
	{
		char *tmp = strdup(str.c_str());
		id = (STR_ID)tmp;
		strmap.insert(pair<string, STR_ID>(str, id));
	}
	else
	{
		id = it->second;
	}
	return APP_OK;
}


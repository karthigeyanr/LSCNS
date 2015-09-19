
#include "valuemap.hpp"

ValueMap::ValueMap()
{
}

int ValueMap::getValueId(string str, STR_ID &value)
{
	STR_ID id;
	if(strmapdata.getStr(str, id) != APP_OK)
		return APP_ERR;
	value = id;
	return APP_OK;
}

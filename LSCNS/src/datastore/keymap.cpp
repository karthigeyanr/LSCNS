
#include "keymap.hpp"

KeyMap::KeyMap()
{
}

int KeyMap::getKeyId(string str, STR_ID &key)
{
	STR_ID id;
	if(strmapdata.getStr(str, id) != APP_OK)
		return APP_ERR;
	key = id;
	return APP_OK;
}


#ifndef KEYMAP_HPP
#define KEYMAP_HPP

#include <map>
#include <iostream>
#include "err.hpp"
#include "strmap.hpp"


using namespace std;

class KeyMap
{
	public:
		KeyMap();
		static int getKeyId(string str, STR_ID &key);

};

#endif

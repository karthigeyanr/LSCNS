
#ifndef ITEMMGR_HPP
#define ITEMMGR_HPP


class ItemMgr
{
	public:
		static int checkItem(uint64_t itemId);
		static int addItem(uint64_t itemId);
		static int setItemAttr(uint64_t itemId, string key, string value);
};

#endif


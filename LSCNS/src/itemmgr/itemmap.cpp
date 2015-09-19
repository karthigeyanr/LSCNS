
typedef uint64_t ITEMID;
typedef void* ATTRID_TYPE;
typedef void* ATTRVALUE_TYPE;

typedef map<ATTRID_TYPE, ATTRVALUE_TYPE> ATTRLIST;

class ItemAttr
{
	public:
		ITEMID itemId;
		ATTRLIST attr;
};

ItemAttr::ItemAttr()
{
	itemId = -1;
	attr.clear();
}

class ItemMap
{
	private:
		map<ITEMID, ItemAttr *> itemMap;
};



ItemAttr* ItemMap::addItem(ITEMID itemId)
{
	ItemAttr *attr = new ItemAttr();
	attr->itemId = itemId;
	Map.insert(pair<ITEMID, ItemAttr *>(itemId, attr));

	return attr;
}

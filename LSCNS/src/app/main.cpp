
#include <iostream>
#include "wch.hpp"
#include "keymap.hpp"
#include "valuemap.hpp"

using namespace std;

int main(int argc, char *argv[])
{
	//Watcher w;
	//cout<<w.init((char *)"../../shared/", NULL)<<endl;
	//w.watch();

	STR_ID id;
	printf("%d\n", KeyMap::getKeyId("sample", id));
	printf("%p\t%s\n", (void *)id, (char *)id);
	printf("%d\n", KeyMap::getKeyId("sample", id));
	printf("%p\t%s\n", (void *)id, (char *)id);
	printf("%d\n", KeyMap::getKeyId("sample test", id));
	printf("%p\t%s\n", (void *)id, (char *)id);
	printf("%d\n", KeyMap::getKeyId("sample test", id));
	printf("%p\t%s\n", (void *)id, (char *)id);
	return 0;
}

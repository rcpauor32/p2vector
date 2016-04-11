#include "dynarray.h"
#include <stdio.h>

int main() {
	DynArray<int> intvect1;
	DynArray<char> charvect1(4);
	DynArray<int> intvect2(intvect1);

	getchar();
	return 0;
}
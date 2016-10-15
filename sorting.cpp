/*
* test sorting
*/

#include <iostream>
#include "sorting.h"
using namespace std;

int main()
{
	int a[] = {3,34,2,5,30,1,11,22,4,8};
  //	insertionAort(a,10);
  //	shellAort(a,10);
  //	heapAort(a,10);
  //	mergeAort(a,10);
	quickAort(a,10);
	for (int i=0; i!=10; ++i)
  	cout << a[i] << " ";
	cout << '\n';
	return 0;
}

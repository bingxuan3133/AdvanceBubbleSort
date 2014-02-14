#include "BubbleSort.h"

void compareAndSwap(int *first, int *second) {
	int temp;
	
	if(*first > *second) {
		temp = *second;
		*second = *first;
		*first = temp;
	}
}


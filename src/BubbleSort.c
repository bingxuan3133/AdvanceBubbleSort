#include "BubbleSort.h"
#include "CSInt.h"
#include "CSDouble.h"

void compareAndSwap(void *first, 
							void *second, 
							int (*isGreater)(void*, void*), 
							void (*swap)(void*, void*)) {
	void *temp;
	
	if(isGreater(first, second)) {
		swap(first, second);
	}

}

/**
 *	Do single iteration of bubble sorting.
 *
 *	Input:
 *		array	contains array of elements to sort
 *		length	is the length of array
 *		size	is the size of each element in the array
 *		isGreater	is a function that compares if the first 
 *					is greater than the second
 *		swap	is a function that swaps elements
 */
void sortLargestToRightMost(void *array, 
							int length, 
							int size,
							int (*isGreater)(void*, void*), 
							void (*swap)(void*, void*)) {
	int i;
	
	char *arrayOfChar = (char *)array;
	
	for(i = 0; i < length - 1; i ++) {
		compareAndSwap(&arrayOfChar[i * size],
						&arrayOfChar[(i+1) * size],
						isGreater,
						swap);
	}
}

void bubbleSort(void *array, 
				int length, 
				int size,
				int (*isGreater)(void*, void*), 
				void (*swap)(void*, void*)) {
	for(; length >= 2; length--) {
		sortLargestToRightMost(array, length, size, isGreater, swap);
	}
}
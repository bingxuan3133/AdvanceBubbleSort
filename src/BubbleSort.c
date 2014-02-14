#include "BubbleSort.h"

void compareAndSwap(int *first, int *second) {
	int temp;
	
	if(*first > *second) {
		temp = *second;
		*second = *first;
		*first = temp;
	}
}

void sortLargestToRightMost(int *array, int size) {
	// compareAndSwap(&array[0], &array[1]);
	// compareAndSwap(&array[1], &array[2]);
	int i;
	
	for(i = 0; i < size - 1; i++) {
		compareAndSwap(&array[i], &array[i+1]);
	}
}

void bubbleSort(int *array, int size) {
	// sortLargestToRightMost(array, size);
	// sortLargestToRightMost(array, size-1);
	
	for(size; size >= 2; size--) {
		sortLargestToRightMost(array, size);
	}
}





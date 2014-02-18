#ifndef __BUBBLE_SORT_H__
#define __BUBBLE_SORT_H__

void compareAndSwapIfLarger(int *first, int *second);
void sortLargestToRightMost(int *array, int size);
void bubbleSortAscendingly(int *array, int size);

void compareAndSwapIfSmaller(int *first, int *second);
void sortSmallestToRightMost(int *array, int size);
void bubbleSortDescendingly(int *array, int size);

#endif	//	__BUBBLE_SORT_H__
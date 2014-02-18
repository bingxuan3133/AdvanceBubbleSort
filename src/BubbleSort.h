#ifndef __BUBBLE_SORT_H__
#define __BUBBLE_SORT_H__

void compareAndSwapIfLarger(int *first, int *second);
void sortLargestToRightMost(int *array, int size);
void bubbleSort(int *array, int size);

void compareAndSwapIfSmaller(int *first, int *second);

#endif	//	__BUBBLE_SORT_H__
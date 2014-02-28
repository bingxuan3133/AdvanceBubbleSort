#ifndef __BUBBLE_SORT_H__
#define __BUBBLE_SORT_H__

// Function Prototype
void compareAndSwap(void *first, 
					void *second, 
					int (*isGreater)(void*, void*), 
					void (*swap)(void*, void*));

void sortLargestToRightMost(void *array, 
							int length, 
							int size,
							int (*isGreater)(void*, void*), 
							void (*swap)(void*, void*));

void bubbleSort(void *array, 
				int length, 
				int size,
				int (*isGreater)(void*, void*), 
				void (*swap)(void*, void*));
							
#endif	//	__BUBBLE_SORT_H__
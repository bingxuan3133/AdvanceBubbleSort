#ifndef __CS_DOUBLE_H__
#define __CS_DOUBLE_H__

#define bubbleSortDouble(array, length)	\
				bubbleSort(array,				\
							length,				\
							sizeof(double),		\
							compareDouble,	\
							swapDouble);

// Function Prototype
int compareDouble(void *value1, void *value2);
void swapDouble(void*, void*);

#endif	//	 __CS_DOUBLE_H__
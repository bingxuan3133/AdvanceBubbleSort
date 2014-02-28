#ifndef __CS_INT_H__
#define __CS_INT_H__

#define bubbleSortInt(array, length)	\
				bubbleSort(array,			\
							length,			\
							sizeof(int),	\
							compareInt,		\
							swapInt);

// Function Prototype
int compareInt(void *value1, void *value2);
void swapInt(void*, void*);

#endif	//	__CS_INT_H__
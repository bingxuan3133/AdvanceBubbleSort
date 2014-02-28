#include "CSInt.h"

int compareInt(void *value1, void *value2) {
	int *value1Int, *value2Int;
	
	value1Int = (int *)value1;
	value2Int = (int *)value2;
	
	return *value1Int > *value2Int;
}

void swapInt(void *value1, void *value2) {
	int *value1Int, *value2Int, temp;
	
	value1Int = (int *)value1;
	value2Int = (int *)value2;
	
	temp = *value1Int;
	*value1Int = *value2Int;
	*value2Int = temp;
}

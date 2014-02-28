#include "CSDouble.h"

int compareDouble(void *value1, void *value2) {
	double *value1Double, *value2Double;
	
	value1Double = (double *)value1;
	value2Double = (double *)value2;
	
	return *value1Double  > *value2Double;
}

void swapDouble(void *value1, void *value2) {
	double *value1Double, *value2Double, temp;
	
	value1Double = (double *)value1;
	value2Double = (double *)value2;
	
	temp = *value1Double;
	*value1Double = *value2Double;
	*value2Double = temp;
}
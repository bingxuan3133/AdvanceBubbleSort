#ifndef __CS_PERSON_H__
#define __CS_PERSON_H__

#define bubbleSortPersonByName(array, length)	\
				bubbleSort(array,				\
							length,				\
							sizeof(Person),		\
							comparePersonName,	\
							swapPerson);

typedef struct {
	char *name;
	int age;
	double weight;	
} Person;

// Function Prototype
int comparePersonName(void *value1, void *value2);
int comparePersonWeight(void *value1, void *value2);
void swapPerson(void*, void*);

#endif	//	__CS_PERSON_H__
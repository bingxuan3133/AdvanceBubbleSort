#include "CSPerson.h"

int comparePersonName(void *value1, void *value2) {
	Person *person1, *person2;
	
	person1 = (Person *)value1;
	person2 = (Person *)value2;
	
	return strcmp(person1->name, person2->name) > 0 ? 1 : 0;
}

int comparePersonWeight(void *value1, void *value2) {
	Person *person1, *person2;
	
	person1 = (Person *)value1;
	person2 = (Person *)value2;
	
	return compareDouble(&person1->weight, &person2->weight);
}

void swapPerson(void *value1, void *value2) {
	Person *person1, *person2, temp;
	
	person1 = (Person *)value1;
	person2 = (Person *)value2;
	
	temp = *person1;
	*person1 = *person2;
	*person2 = temp;
}
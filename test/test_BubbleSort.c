#include "unity.h"
#include "BubbleSort.h"
#include "CSInt.h"
#include "CSDouble.h"
#include "CSPerson.h"

void setUp() {}
void tearDown() {}

// Bubble Sort Integer

void test_compareAndSwap_should_swap_two_integers() {
	int arrayOfInt[] = {7, 3};
		
	compareAndSwap(&arrayOfInt[0], &arrayOfInt[1], compareInt, swapInt);
	
	TEST_ASSERT_EQUAL(3, arrayOfInt[0]);
	TEST_ASSERT_EQUAL(7, arrayOfInt[1]);
}

void test_compareAndSwap_should_not_swap_two_integers() {
	int arrayOfInt[] = {1, 9};
		
	compareAndSwap(&arrayOfInt[0], &arrayOfInt[1], compareInt, swapInt);
	
	TEST_ASSERT_EQUAL(1, arrayOfInt[0]);
	TEST_ASSERT_EQUAL(9, arrayOfInt[1]);
}

// Bubble Sort Double

void test_compareAndSwap_should_swap_two_doubles() {
	double arrayOfDouble[] = {10.10, 9.9};
		
	compareAndSwap(&arrayOfDouble[0], &arrayOfDouble[1], compareDouble, swapDouble);
	
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 9.9, arrayOfDouble[0]);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 10.10, arrayOfDouble[1]);
}

void test_bubbleSortDouble_should_swap_to_ascending_order() {
	#undef ARRAY_SIZE
	#define ARRAY_SIZE sizeof(arrayOfDouble) / sizeof(double)
	double arrayOfDouble[] = {4.56, 12.76, 1234.78, 6.42, 9.0, 2.84};

	bubbleSortDouble(arrayOfDouble, ARRAY_SIZE);
	
	TEST_ASSERT_FLOAT_WITHIN(0.0001f, 2.84, 	arrayOfDouble[0]);
	TEST_ASSERT_FLOAT_WITHIN(0.0001f, 4.56, 	arrayOfDouble[1]);
	TEST_ASSERT_FLOAT_WITHIN(0.0001f, 6.42, 	arrayOfDouble[2]);
	TEST_ASSERT_FLOAT_WITHIN(0.0001f, 9.0, 		arrayOfDouble[3]);
	TEST_ASSERT_FLOAT_WITHIN(0.0001f, 12.76, 	arrayOfDouble[4]);
	TEST_ASSERT_FLOAT_WITHIN(0.0001f, 1234.78, 	arrayOfDouble[5]);
}

void test_bubbleSortInt_should_swap_to_ascending_order() {
	#undef ARRAY_SIZE
	#define ARRAY_SIZE sizeof(arrayOfInt) / sizeof(int)
	int arrayOfInt[] = {5, 6, 45, 2, 1, -4, 8};

	bubbleSortInt(arrayOfInt, ARRAY_SIZE);
	
	TEST_ASSERT_EQUAL(-4, 	arrayOfInt[0]);
	TEST_ASSERT_EQUAL(1, 	arrayOfInt[1]);
	TEST_ASSERT_EQUAL(2, 	arrayOfInt[2]);
	TEST_ASSERT_EQUAL(5, 	arrayOfInt[3]);
	TEST_ASSERT_EQUAL(6, 	arrayOfInt[4]);
	TEST_ASSERT_EQUAL(8, 	arrayOfInt[5]);
	TEST_ASSERT_EQUAL(45, 	arrayOfInt[6]);
}

// Bubble Sort Person

void test_comparePersonName_should_return_1() {
	Person person1 = {.name = "ali"};
	Person person2 = {.name = "ali"};
	Person person3 = {.name = "muthu"};
	int result;
	
	result = comparePersonName(&person1, &person2);
	TEST_ASSERT_EQUAL(0, result);
	result = comparePersonName(&person1, &person3);
	TEST_ASSERT_EQUAL(0, result);
}

void test_swapPerson_should_swap_2_persons() {
	Person person1 = {.name = "ali", .age = 23, .weight = 80.12};
	Person person2 = {.name = "muthu", .age = 12, .weight = 42.50};
	
	swapPerson(&person1, &person2);
	
	TEST_ASSERT_EQUAL_STRING("muthu", person1.name);
	TEST_ASSERT_EQUAL(12, person1.age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 42.50, person1.weight);

}

void test_compareAndSwap_should_swap_2_persons_according_to_their_name() {
	Person person1 = {.name = "muthu", .age = 23, .weight = 80.12};
	Person person2 = {.name = "ali", .age = 12, .weight = 42.50};
	
	compareAndSwap(&person1, &person2, comparePersonName, swapPerson);
	
	TEST_ASSERT_EQUAL_STRING("ali", person1.name);
	TEST_ASSERT_EQUAL(12, person1.age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 42.50, person1.weight);
	
	TEST_ASSERT_EQUAL_STRING("muthu", person2.name);
	TEST_ASSERT_EQUAL(23, person2.age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 80.12, person2.weight);
}

void test_compareAndSwap_should_not_swap_2_persons_according_to_their_name() {
	Person person1 = {.name = "ali", .age = 12, .weight = 42.50};
	Person person2 = {.name = "muthu", .age = 23, .weight = 80.12};
		
	compareAndSwap(&person1, &person2, comparePersonName, swapPerson);
	
	TEST_ASSERT_EQUAL_STRING("ali", person1.name);
	TEST_ASSERT_EQUAL(12, person1.age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 42.50, person1.weight);
	
	TEST_ASSERT_EQUAL_STRING("muthu", person2.name);
	TEST_ASSERT_EQUAL(23, person2.age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 80.12, person2.weight);
}

void test_compareAndSwap_should_swap_2_persons_according_to_their_weight() {
	Person person1 = {.name = "muthu", .age = 23, .weight = 80.12};
	Person person2 = {.name = "ali", .age = 12, .weight = 42.50};
	
	compareAndSwap(&person1, &person2, comparePersonWeight, swapPerson);
	
	TEST_ASSERT_EQUAL_STRING("ali", person1.name);
	TEST_ASSERT_EQUAL(12, person1.age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 42.50, person1.weight);
	
	TEST_ASSERT_EQUAL_STRING("muthu", person2.name);
	TEST_ASSERT_EQUAL(23, person2.age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 80.12, person2.weight);
}

void test_compareAndSwap_should_not_swap_2_persons_according_to_their_weight() {
	Person person1 = {.name = "ali", .age = 12, .weight = 42.50};
	Person person2 = {.name = "muthu", .age = 23, .weight = 80.12};
	
	compareAndSwap(&person1, &person2, comparePersonWeight, swapPerson);
	
	TEST_ASSERT_EQUAL_STRING("ali", person1.name);
	TEST_ASSERT_EQUAL(12, person1.age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 42.50, person1.weight);
	
	TEST_ASSERT_EQUAL_STRING("muthu", person2.name);
	TEST_ASSERT_EQUAL(23, person2.age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 80.12, person2.weight);
}

void test_sortLargestToRight_person_name_should_swap_2_persons() {
	Person persons[] = {
						{.name = "muthu", .age = 23, .weight = 80.12},
						{.name = "ali", .age = 12, .weight = 42.50}
					   };
					   
	sortLargestToRightMost(persons, 
							2, 
							sizeof(Person),
							comparePersonName, 
							swapPerson);
							
	TEST_ASSERT_EQUAL_STRING("ali", persons[0].name);
	TEST_ASSERT_EQUAL(12, persons[0].age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 42.50, persons[0].weight);
	
	TEST_ASSERT_EQUAL_STRING("muthu", persons[1].name);
	TEST_ASSERT_EQUAL(23, persons[1].age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 80.12, persons[1].weight);
}

void test_sortLargestToRight_person_name_should_not_swap_2_persons() {
	Person persons[] = {
						{.name = "ali", .age = 23, .weight = 80.12},
						{.name = "muthu", .age = 12, .weight = 42.50}
					   };
					   
	sortLargestToRightMost(persons, 
							2, 
							sizeof(Person),
							comparePersonName, 
							swapPerson);
							
	TEST_ASSERT_EQUAL_STRING("ali", persons[0].name);
	TEST_ASSERT_EQUAL(23, persons[0].age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 80.12, persons[0].weight);
	
	TEST_ASSERT_EQUAL_STRING("muthu", persons[1].name);
	TEST_ASSERT_EQUAL(12, persons[1].age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 42.50, persons[1].weight);
}

void test_bubbleSort_person_name_should_swap_to_ascending_order() {
	Person persons[] = {
						{.name = "muthu", .age = 12, .weight = 42.5},
						{.name = "abu", .age = 56, .weight = 61.3},
						{.name = "steven", .age = 98, .weight = 56.73},
						{.name = "leong", .age = 1, .weight = 2.1},
						{.name = "ali", .age = 23, .weight = 80.12},
					   };
					   
	bubbleSortPersonByName(persons, 5);
	
	// Verify persons[0]
	TEST_ASSERT_EQUAL_STRING("abu", persons[0].name);
	TEST_ASSERT_EQUAL(56, persons[0].age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 61.3, persons[0].weight);
	
	// Verify persons[1]
	TEST_ASSERT_EQUAL_STRING("ali", persons[1].name);
	TEST_ASSERT_EQUAL(23, persons[1].age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 80.12, persons[1].weight);
	
	// Verify persons[2]
	TEST_ASSERT_EQUAL_STRING("leong", persons[2].name);
	TEST_ASSERT_EQUAL(1, persons[2].age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 2.1, persons[2].weight);
	
	// Verify persons[2]
	TEST_ASSERT_EQUAL_STRING("muthu", persons[3].name);
	TEST_ASSERT_EQUAL(12, persons[3].age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 42.5, persons[3].weight);
	
	// Verify persons[2]
	TEST_ASSERT_EQUAL_STRING("steven", persons[4].name);
	TEST_ASSERT_EQUAL(98, persons[4].age);
	TEST_ASSERT_FLOAT_WITHIN(0.0001, 56.73, persons[4].weight);
}

















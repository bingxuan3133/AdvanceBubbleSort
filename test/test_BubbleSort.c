#include "BubbleSort.h"
#include "unity.h"

void setUp() {}
void tearDown() {}

void test_compareAndSwap_should_not_swap_if_in_order() {
	int array[] = {1, 2};
	compareAndSwap(&array[0], &array[1]);
	TEST_ASSERT_EQUAL(1, array[0]);
	TEST_ASSERT_EQUAL(2, array[1]);
}

void test_compareAndSwap_should_swap_if_not_in_order() {
	int array[] = {8, 4};
	compareAndSwap(&array[0], &array[1]);
	TEST_ASSERT_EQUAL(4, array[0]);
	TEST_ASSERT_EQUAL(8, array[1]);
}

void test_compareAndSwap_should_not_swap_if_in_order_for_negative_numbers() {
	int array[] = {-10, -5};
	compareAndSwap(&array[0], &array[1]);
	TEST_ASSERT_EQUAL(-10, array[0]);
	TEST_ASSERT_EQUAL(-5, array[1]);
}

void test_compareAndSwap_should_swap_if_not_in_order_for_negative_numbers() {
	int array[] = {-11, -22};
	compareAndSwap(&array[0], &array[1]);
	TEST_ASSERT_EQUAL(-22, array[0]);
	TEST_ASSERT_EQUAL(-11, array[1]);
}
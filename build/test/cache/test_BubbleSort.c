#include "unity.h"
#include "BubbleSort.h"


void setUp() {}

void tearDown() {}



void test_compareAndSwap_should_not_swap_if_in_order() {

 int array[] = {1, 2};

 compareAndSwap(&array[0], &array[1]);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)10, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)11, UNITY_DISPLAY_STYLE_INT);

}



void test_compareAndSwap_should_swap_if_not_in_order() {

 int array[] = {8, 4};

 compareAndSwap(&array[0], &array[1]);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)17, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)18, UNITY_DISPLAY_STYLE_INT);

}



void test_compareAndSwap_should_not_swap_if_in_order_for_negative_numbers() {

 int array[] = {-10, -5};

 compareAndSwap(&array[0], &array[1]);

 UnityAssertEqualNumber((_U_SINT)((-10)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)24, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-5)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)25, UNITY_DISPLAY_STYLE_INT);

}



void test_compareAndSwap_should_swap_if_not_in_order_for_negative_numbers() {

 int array[] = {-11, -22};

 compareAndSwap(&array[0], &array[1]);

 UnityAssertEqualNumber((_U_SINT)((-22)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)31, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-11)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)32, UNITY_DISPLAY_STYLE_INT);

}



void test_sortLargestToRightMost_should_move_largest_to_the_end_for_2_elements() {

 int array[] = {13, 9};

 sortLargestToRightMost(array, 2);

 UnityAssertEqualNumber((_U_SINT)((9)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)38, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((13)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)39, UNITY_DISPLAY_STYLE_INT);

}



void test_sortLargestToRightMost_should_move_largest_to_the_end_for_3_elements() {

 int array[] = {6, 3, 5};

 sortLargestToRightMost(array, 3);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)45, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)46, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)47, UNITY_DISPLAY_STYLE_INT);

}



void test_sortLargestToRightMost_should_move_largest_to_the_end_for_4_elements() {

 int array[] = {10, 5, 2, 1};

 sortLargestToRightMost(array, sizeof(array)/sizeof(int));

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)53, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)54, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)55, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((10)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)56, UNITY_DISPLAY_STYLE_INT);

}

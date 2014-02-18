/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_compareAndSwapIfLarger_should_not_swap_if_in_ascending_order(void);
extern void test_compareAndSwapIfLarger_should_swap_if_not_in_ascending_order(void);
extern void test_compareAndSwapIfLarger_should_not_swap_if_in_ascending_order_for_negative_numbers(void);
extern void test_compareAndSwapIfLarger_should_swap_if_not_in_ascending_order_for_negative_numbers(void);
extern void test_sortLargestToRightMost_should_move_largest_to_the_end_for_2_elements(void);
extern void test_sortLargestToRightMost_should_move_largest_to_the_end_for_3_elements(void);
extern void test_sortLargestToRightMost_should_move_largest_to_the_end_for_4_elements(void);
extern void test_bubbleSort_should_sort_2_elements_correctly(void);
extern void test_bubbleSort_should_sort_3_elements_correctly(void);
extern void test_bubbleSort_should_sort_5_elements_ascendingly(void);
extern void test_compareAndIfSmaller_should_not_swap_if_in_descending_order(void);
extern void test_compareAndSwapIfSmaller_should_swap_if_not_in_descending_order(void);
extern void test_compareAndSwapIfSmaller_should_not_swap_if_in_descending_order_for_negative_numbers(void);
extern void test_compareAndSwapIfSmaller_should_swap_if_not_in_descending_order_for_negative_numbers(void);
extern void test_sortSmallestToRightMost_should_move_smallest_to_the_end_for_2_elements(void);
extern void test_sortSmallestToRightMost_should_move_smallest_to_the_end_for_3_elements(void);
extern void test_sortSmallestToRightMost_should_move_smallest_to_the_end_for_4_elements(void);
extern void test_bubbleSortDescendingly_should_sort_5_elements_descendingly(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_BubbleSort.c";
  UnityBegin();
  RUN_TEST(test_compareAndSwapIfLarger_should_not_swap_if_in_ascending_order, 7);
  RUN_TEST(test_compareAndSwapIfLarger_should_swap_if_not_in_ascending_order, 14);
  RUN_TEST(test_compareAndSwapIfLarger_should_not_swap_if_in_ascending_order_for_negative_numbers, 21);
  RUN_TEST(test_compareAndSwapIfLarger_should_swap_if_not_in_ascending_order_for_negative_numbers, 28);
  RUN_TEST(test_sortLargestToRightMost_should_move_largest_to_the_end_for_2_elements, 35);
  RUN_TEST(test_sortLargestToRightMost_should_move_largest_to_the_end_for_3_elements, 42);
  RUN_TEST(test_sortLargestToRightMost_should_move_largest_to_the_end_for_4_elements, 50);
  RUN_TEST(test_bubbleSort_should_sort_2_elements_correctly, 59);
  RUN_TEST(test_bubbleSort_should_sort_3_elements_correctly, 66);
  RUN_TEST(test_bubbleSort_should_sort_5_elements_ascendingly, 74);
  RUN_TEST(test_compareAndIfSmaller_should_not_swap_if_in_descending_order, 85);
  RUN_TEST(test_compareAndSwapIfSmaller_should_swap_if_not_in_descending_order, 92);
  RUN_TEST(test_compareAndSwapIfSmaller_should_not_swap_if_in_descending_order_for_negative_numbers, 99);
  RUN_TEST(test_compareAndSwapIfSmaller_should_swap_if_not_in_descending_order_for_negative_numbers, 106);
  RUN_TEST(test_sortSmallestToRightMost_should_move_smallest_to_the_end_for_2_elements, 113);
  RUN_TEST(test_sortSmallestToRightMost_should_move_smallest_to_the_end_for_3_elements, 120);
  RUN_TEST(test_sortSmallestToRightMost_should_move_smallest_to_the_end_for_4_elements, 128);
  RUN_TEST(test_bubbleSortDescendingly_should_sort_5_elements_descendingly, 137);

  return (UnityEnd());
}

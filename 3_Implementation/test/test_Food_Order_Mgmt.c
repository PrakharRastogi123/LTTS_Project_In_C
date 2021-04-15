#include "unity.h"
#include "Utilities.h"

/* Modify these two lines according to the project */

#define PROJECT_NAME    "Food Management"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}
void test_insert1(){
  head startorder;
  startorder.start=NULL;
  TEST_ASSERT_EQUAL(SUCCESS,insertend(&startorder,1.1,"Cola",1,20));
}

void test_FoodList(){
  head foodstart;
  foodstart.start=NULL;
  TEST_ASSERT_EQUAL(ERROR_NULL_PTR,foodlist(&foodstart));
}

void test_FoodList2(){
  head startorder;
  startorder.start=NULL;
  insertend(&startorder, 1.1, "Samosa", 2, 50);
  insertend(&startorder, 1.2, "Grilled Cheese Sandwich", 1, 100);
  TEST_ASSERT_EQUAL(SUCCESS,foodlist(&startorder));
}

void test_Insert2(){
  head foodstart;
  foodstart.start=NULL;
  TEST_ASSERT_EQUAL(SUCCESS,insertend(&foodstart,1.0,"Aloo Paratha",2,50));
}
void test_getBill1(){
      head startorder;
      startorder.start=NULL;
      insertend(&startorder, 1.1, "Samosa", 2, 50);
      insertend(&startorder, 1.2, "Grilled Cheese Sandwich", 1, 100);
      //printf("\n%d\n",foodlist(&startorder));
      TEST_ASSERT_EQUAL(200,getbill(&startorder));
}

void test_getBill2(){
      head startorder;
      startorder.start=NULL;
      insertend(&startorder, 2.1, "IceCream", 2, 50);
      insertend(&startorder, 2.2, "Grilled Cheese Wrap", 1, 200);
      //printf("\n%d\n",foodlist(&startorder));
      TEST_ASSERT_EQUAL(300,getbill(&startorder));
}
    


int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_FoodList);
    RUN_TEST(test_Insert2);
    RUN_TEST(test_getBill1);
    RUN_TEST(test_getBill2);
    RUN_TEST(test_insert1);
    RUN_TEST(test_FoodList2);
    
    /* Close the Unity Test Framework */
    return UNITY_END();
}

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


void test_FoodList(){
  head foodstart;
  foodstart.start=NULL;
  TEST_ASSERT_EQUAL(ERROR_NULL_PTR,foodlist(&foodstart));
}
void test_Order(){
  head foodstart,orderstart;
  foodstart.start=NULL;
  orderstart.start=NULL;
  TEST_ASSERT_EQUAL(ERROR_NULL_PTR,order(&foodstart,&orderstart,1.0,2));
}
void test_Insert(){
  head foodstart;
  foodstart.start=NULL;
  TEST_ASSERT_EQUAL(SUCCESS,insertend(&foodstart,1.0,"Aloo Paratha",2,50));
}
void test_getBill(){
      head startorder;
      startorder.start=NULL;
      insertend(&startorder, 1.1, "Samosa", 2, 50);
      insertend(&startorder, 1.2, "Grilled Cheese Sandwich", 1, 100);
      //printf("\n%d\n",foodlist(&startorder));
      TEST_ASSERT_EQUAL(200,getbill(&startorder));
}

    


int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_FoodList);
    RUN_TEST(test_Order);
    RUN_TEST(test_Insert);
    RUN_TEST(test_getBill);
    
    /* Close the Unity Test Framework */
    return UNITY_END();
}

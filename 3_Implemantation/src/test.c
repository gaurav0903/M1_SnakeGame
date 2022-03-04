#include "game.h"
#include "unity.h"

void test_searchrecords(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_searchrecords);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_searchrecords(void)
{
  int i=10;
    
    TEST_ASSERT_EQUAL(10,i);
    

   
}
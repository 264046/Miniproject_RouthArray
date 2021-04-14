#include "unity.h"
#include<stdlib.h>
#include "source_1.h"

#include "routh_array.h"
#define PROJECT_NAME "Routh_Array"

int len=8;
float coeff[]={1,9,24,24,24,24,23,15};

/* Prototypes for all the test functions */
void test_start_routh_array(void);
void test_complete_routh__array(void);
void test_auxiliary_equation(void);
void test_sign_changes(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  int i;
  RUN_TEST(test_start_routh_array);
  RUN_TEST(test_complete_routh__array);
  RUN_TEST(test_auxiliary_equation);
  RUN_TEST(test_sign_changes);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_start_routh_array(void) 
{
  TEST_ASSERT_EQUAL(1.9,*start_routh_array(coeff));
}

void test_complete_routh__array(void) 
{ 
  TEST_ASSERT_EQUAL(3, complete_routh__array(start_routh_array(coeff),3));
}

void test_auxiliary_equation(void) {
  int i;
  float *rth=start_routh_array(coeff);
  rth,i=complete_routh__array(rth,0);
  rth=auxiliary_equation(rth,i+1);
  TEST_ASSERT_EQUAL(60, *(rth+4*4));
  free(rth);
}

void test_sign_changes(void) {
  int i;
  float *rth=start_routh_array(coeff);
  rth,i=complete_routh__array(rth,0);
  rth=auxiliary_equation(rth,i+1);
  rth,i=complete_routh__array(rth,i);
  TEST_ASSERT_EQUAL(2, sign_changes(rth));
}


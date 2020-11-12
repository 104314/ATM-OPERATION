
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <atmoperations.h>
#define PROJECT_NAME    "ATM-OPERATION"

/* Prototypes for all the test functions */
void test_credit(void);
void test_debit(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_atm_test(suite, "credit", test_credit);
  CU_add_test(suite, "debit", test_debit);
  


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_credit(void) {
  CU_ASSERT(100 == atm('c',100));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == atm('c', 150));
}

void test_debit(void) {
  CU_ASSERT(100 == atm('d', 150));
  
  /* Dummy fail*/
  CU_ASSERT(50== atm('d', 100));
}



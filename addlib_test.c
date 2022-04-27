#include "unity.h"
#include "addlib.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_add(void) {
    int expected = 3;
    int actual = add(1, 2);
    TEST_ASSERT_EQUAL_INT(expected, actual);
}

void test_string_equal(void) {
    char first[10] = "testing";
    char second[10] = "sike";

    TEST_ASSERT_EQUAL_STRING(first, second);
}


// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_string_equal);
    return UNITY_END();
}

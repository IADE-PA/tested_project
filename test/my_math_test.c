#include "../src/my_math.h"
#include "unity/unity.h"

void setUp(void) {}

void tearDown(void) {}

void test_square_root(void) {
    TEST_ASSERT_EQUAL_FLOAT(
        3.162478,
        square_root(10.0));
}

void test_gcd() {
    TEST_ASSERT_EQUAL(4, gcd(12, 9));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_square_root);
    RUN_TEST(test_gcd);
    return UNITY_END();
}

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
    TEST_ASSERT_EQUAL(3, gcd(12, 9));
}

void test_is_prime() {
    TEST_ASSERT_FALSE(is_prime(1));
    TEST_ASSERT_TRUE(is_prime(2));
    TEST_ASSERT_TRUE(is_prime(3));
    TEST_ASSERT_FALSE(is_prime(4));
    TEST_ASSERT_TRUE(is_prime(5));
    TEST_ASSERT_FALSE(is_prime(6));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_square_root);
    RUN_TEST(test_gcd);
    RUN_TEST(test_is_prime);
    return UNITY_END();
}

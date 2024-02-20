#include "my_math.h"

float square_root(float n) {
    float x = 10000;
    float s = n / x;
    while (x - s >= 0.05) {
        x = (x + s) / 2;
        s = n / x;
    }
    return x;
}

int gcd(int a, int b) {
    int c = a - b;
    while (c > 0) {
        if (c > b) {
            a = c;
        } else {
            a = b;
            b = c;
        }
        c = a - b;
    }
    return a;
}

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
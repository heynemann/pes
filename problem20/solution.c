#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "../aux.h"

// project euler problem number 20 - http://projecteuler.net/index.php?section=problems&id=20
// All problem data is copyright of http://projecteuler.net

// Copyright (C) 2011 by Bernardo Heynemann <heynemann@gmail.com>

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN

#define DIGIT_COUNT 256

// good ol' paper carry multiply. Can do as many digits as we want this way.
void multiply(int* digits, int factor) {
    int carry = 0;
    for (int i = 0; i < DIGIT_COUNT; i++) {
        int digit = digits[i];
        digit *= factor;
        digit += carry;
        digits[i] = digit % 10;
        carry = digit / 10;
    }
}

int factorial_digits(int number) {
    int digits[DIGIT_COUNT];
    digits[0] = 1;
    for (int i = 1; i < DIGIT_COUNT; i++) { digits[i] = 0; }

    for (int i = 2; i < number; i++) { multiply(digits, i); }

    int digit_sum = 0;
    for (int i = 0; i < DIGIT_COUNT; i++) { digit_sum += digits[i]; }

    return digit_sum;
}

int main() {
    int digits = factorial_digits(100);
    printf("%d is the sum of digits for 100!.\n\n", digits);
    return 0;
}

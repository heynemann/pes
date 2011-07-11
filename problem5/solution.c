#include<stdio.h>

// project euler problem number 6 - http://projecteuler.net/index.php?section=problems&id=6
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

int divisible_by_all(int divisor, int number) {
    if (number == 0) return 1;
    for (int i=1; i<=divisor; i++) {
        if (number % i != 0) {
            return 1;
        }
    }

    return 0;
}
int smallest_divisible_number(int divisor) {
    int number = 0;
    while(divisible_by_all(divisor, number) == 1) {
        number += divisor;
    }

    return number;
}

int main() {
    printf("The smallest number is %d", smallest_divisible_number(20));
    printf("\n\n");
    return 0;
}

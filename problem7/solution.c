#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// project euler problem number 7 - http://projecteuler.net/index.php?section=problems&id=7
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

long square_root(long number);
int is_prime(long number);

int main() {
    int primes_found = 0;
    int number = 0;
    int last_prime = 0;
    while(primes_found < 10001) {
        if (is_prime(number)) {
            last_prime = number;
            primes_found++;
        }
        number++;
    }
    printf("The 10001st prime number is %d", last_prime);
    printf("\n\n");
    return 0;
}

long square_root(long number) {
    return ceil(sqrt(number));
}

int is_prime(long number) {
    if (number < 2) return 0;
    if (number == 2) return 1;
    for (int i=2; i <= square_root(number); i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

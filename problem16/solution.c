#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include "../aux.h"

// project euler problem number 11 - http://projecteuler.net/index.php?section=problems&id=11
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

long digit_sum(double number) {
    char number_characters[1024];
    sprintf(number_characters, "%.0f", number);

    long acc = 0;
    for (int i=0; i < strlen(number_characters); i++) {
        char c = number_characters[i];
        int num = c - '0';
        acc += num;
    }

    return acc;
}

int main() {
    int result = 0;
    double number = pow(2, 1000);
    long sum = digit_sum(number);

    printf("%ld\n\n", sum);
    return 0;
}

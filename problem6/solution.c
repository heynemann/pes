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

int square_of_sum_minus_sum_of_squares(int max) {
    int sum = 0, squares=0;
    for (int i=1; i<=max; i++) {
        sum += i;
        squares += i * i;
    }

    return sum * sum - squares;
}

int main() {
    printf("The result is %d", square_of_sum_minus_sum_of_squares(100));
    printf("\n\n");
    return 0;
}

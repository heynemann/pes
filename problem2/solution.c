#include<stdio.h>

// project euler problem number 2 - http://projecteuler.net/index.php?section=problems&id=2
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

int sum_even_fibonacci_terms_up_to(int max) {
    int acc = 0, last=0, aux=1, even=0;

    while (acc < max) {
        acc = last + aux;
            last = aux;
        aux = acc;
        if (acc % 2 == 0) {
            even += acc;
        }
    }
    return even;
}

int main() {
    printf("The sum of the numbers is %d", sum_even_fibonacci_terms_up_to(4000000));
    printf("\n\n");
    return 0;
}

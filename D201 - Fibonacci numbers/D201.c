// Copyright (c) 2021 ivantam04

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

// The following task description belongs to Hong Kong Olympiad in Informatics 
// Organizing Committee and made available under the Creative Commons
// Attribution-ShareAlike 4.0 International licence:

// <p>In mathematics, the Fibonacci sequence is defined as 
// $F_n = F_{n-1} + F_{n-2}$ with $F_0 = 0$ and $F_1 = 1$.
// The first few Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, ....</p>
// <p>Write a program to find $F_x$.</p>
// 
// <h1>Input and Output</h1>
// 
// <p>The input consists of an integer $x$. ($0 \le x \le 40$)</p>
// 
// <p>Output $F_x$</p>

#include <stdio.h>
int fib(int n){
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
  
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d", fib(n));
    return 0;
}
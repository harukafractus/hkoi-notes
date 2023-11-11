// Copyright (c) 2020 ivantam04

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

// <p>In Hong Kong, children under the age of 12 can ride the bus with half fare.
// The amount is rounded up to the nearest ten cents. For example, if the full 
// fare is \$9.3, the half fare would be \$4.7.
// Write a program to display the half fare.</p>
// 
// <h1>Input and Output</h1>
// 
// <p>The input is the full fare. It starts with the dollar symbol \texttt{\$},
// followed by a number between 0.1 and 20.0 with one decimal place.</p>
// 
// <p>Output the child fare using the same format as the input.</p>

#include <stdio.h>
#include <math.h>
int main()
{
    float fare,half;
    scanf("%*c%f",&fare);
    int tmp = fare/2*10;
    float truncated = tmp/10.0;
    fare = fare- truncated;
    printf("$%.1lf",fare);
    return 0;
}

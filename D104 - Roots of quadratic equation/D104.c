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

// <p>The root(s) of a quadratic equation withone variable
// $ax^2 + bx + c = 0$ are $x = \cfrac{{ - b \pm \sqrt {b^2 - 4ac} }}{{2a}}$</p>
// <p>Write a program to solve for the real roots of a quadratic equation.</p>
// 
// <h1>Input and Output</h1>
// 
// <p>The input consists of three integers $a$,
// $b$ and $c$ in a line separated by spaces.
// <br>You may assume that $-100 \le a, b, c \le 100$ and $a \ne 0$.</p>
// 
// <p>If there are no real roots, output \texttt{None}.
// <br>If there is one real root, output the root in 3 decimal places.
// <br>If there are two real roots,
// output the roots in 3 decimal places separated by space or line.
// Output the lesser root first.</p>

#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminant, root1, root2;
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        if (root1 < root2){
            printf("%.3lf %.3lf", root1, root2);
        }
        else{
            printf("%.3lf %.3lf", root2, root1);
        }
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("%.3lf", root1);
    }
    else {
        printf("None");
    }

    return 0;
} 

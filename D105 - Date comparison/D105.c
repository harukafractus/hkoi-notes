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

// <p>Write a program to compare two dates:
// $y_1-m_1-d_1$ and $y_2-m_2-d_2$.</p>
// 
// <h1>Input and Output</h1>
// 
// <p>The input consists of two lines.
// The first line contains $y_1$, $m_1$ and $d_1$ separated by spaces.
// The second line contains $y_1$, $m_1$ and $d_1$ separated by spaces.</p>
// <p>$1000 \le y_1, y_2 \le 9999$,
// and the dates are guaranteed to be valid.</p>
// 
// <p>If $y_1-m_1-d_1$ is earlier, output \texttt{Before}.</p>
// <p>If $y_2-m_2-d_2$ is earlier, output \texttt{After}.</p>
// <p>If the two dates are the same, output \texttt{Same}.</p>

#include <stdio.h>
int main() {
    int y1,m1,d1,y2,m2,d2;
    scanf("%d %d %d", &y1, &m1, &d1);
    scanf("%d %d %d", &y2, &m2, &d2);
    int c1= y1*1000000+100*m1+d1;
    int c2= y2*1000000+100*m2+d2;
    if (c1<c2) {
        printf("Before");
    }
    else if (c1==c2) {
        printf("Same");
    }
    else {
        printf("After");
    }
    return 0;
}

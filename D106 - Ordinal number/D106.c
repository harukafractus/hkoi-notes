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

// <p>Write a program to the ordinal form of a number.</p>
// 
// <h1>Input and Output</h1>
// 
// <p>The input consists of only one positive integer $N$.
// ($1 \le N \le 9999$)</p>
// 
// <p>Output the ordinal form of the number $N$ by adding the suitable suffix.
// Do not add spaces between the number and the suffix.</p>

#include <stdio.h>
int main(void)
{
    int input;
    scanf("%d", &input);
    if (input/10%10==1 || input%10 == 0 || input%10 >=4 && input%10 <= 9)
    {
        printf("%dth",input);
    }else
    {
        if(input%10 == 3){
            printf("%drd",input);
        }
        if(input%10 == 2){
            printf("%dnd",input);
        }
        if(input%10 == 1)
        {
            printf("%dst",input);
        }
        
    }
    return 0;
}
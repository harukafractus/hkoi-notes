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

// <p>A palindrome is a string that is same as itself reversed.
// \texttt{abcdcba} and \texttt{xyzzyx} are examples of palindromes.</p>
// <p>Write a program to reverse a string and subsequently check
// if the string is a palindrome.</p>
// 
// <h1>Input and Output</h1>
// 
// <p>The only line in the input contains the string in question.
// The string contains only lowercase English letters (no spaces)
// and its length is between 1 and 50 (inclusive).</p>
// 
// <p>On the first line, output the reversed string.
// On the second line, output \texttt{Yes} if the string is a palindrome.
// Output \texttt{No} otherwise.</p>

#include<stdio.h>

void revAString(char strg[])
{
    int g, numb;
    int tmpry = 0;

    for(numb=0; strg[numb] != 0; numb++);
    for(g = 0; g <numb/2; g++)
    {
        tmpry = strg[g];
        strg[g]=strg[numb - 1 - g];
        strg[numb - 1 - g] = tmpry;
    }
    for(g = 0; g < numb; g++)
        putchar(strg[g]);
    printf(" \n");
}

int main(void)
{
    char strg[60]; 
    char dummy[60];
    scanf("%s", strg); 
    strcpy(dummy, strg);
    revAString(strg);
    if(strcmp(dummy,strg)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
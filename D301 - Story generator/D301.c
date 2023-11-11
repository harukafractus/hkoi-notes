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

// <p>In this section, you will learn about <b>strings</b>.
// A string a sequence of characters. Examples of strings 
// are \texttt{apple}, \texttt{Chan Tai Man} and \texttt{123.456}
// (textual representation of numbers). As the first exercise,
// let's learn how to input and output strings.</p>
// <p>Write a program to input several English words,
// and compose (output) a story using those words.</p>
// 
// <h1>Input and Output</h1>
// 
// <p>The input consists of 5 lines,
// each contains an English noun for you to compose a story.
// Please note that the nouns may contain spaces.
// <ul><li>Line 1: A name<li>
// Line 2: Another name<li>Line 3: A food<li>
// Line 4: A transportation<li>Line 5: A place.</ul></p>
// 
// <p>Output the generated story.
// Your output will be accepted as long as
// you have used all the 5 given words.</p>

#include <stdio.h>
int main()
{
    char name1[256], name2[256], food[256], transport[256], place[256];
    fgets(name1,256,stdin);
    fgets(name2,256,stdin);
    fgets(food,256,stdin);
    fgets(transport,256,stdin);
    fgets(place,256,stdin);
    printf("My name is %s.\nI study at %s Secondary School.\n",name1,place);
    printf("I go to school by %s with my classmate %s.\nWe both like %s.",transport,name2,food);
    return 0;
}

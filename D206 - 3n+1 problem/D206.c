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

// <p>"Clap 7" is a simple but fun social game. 
// Players take turns to call out numbers from 1 to 100.
// If the number to be called is a multiple of 7, or contains 7,
// the player should clap the hands instead of the calling the number.
// You are not very good at the game. Write a program to help you.</p>
// <p>Here we are going to generalize the game to "Clap $N$",
// which means that we should clap instead of calling it if
// the number is a multiple of $N$, or contains $N$ in its
// decimal representation.</p>
// 
// <p>The Collatz conjecture, also called the $3n + 1$ conjecture, 
// states that: Given a starting positive integer $N$, 
// we can eventually obtain $N = 1$ 
// after carrying out the following operation repeatedly:<br>
// $N \leftarrow \begin{cases} N/2 &\text{if } N \equiv 0 \pmod{2}\\ 3N+1 & \text{if } N\equiv 1 \pmod{2} .\end{cases}$</p>
// <p>For example, if we start from $N = 13$, 
// the sequence would be: $13, 40, 20, 10, 5, 16, 8, 4, 2, 1$.</p>
// <p>Write a program to print out the sequence.</p>
// 
// <h1>Input and Output</h1>
// 
// <p>The input consists of an integer $N$. 
// ($1 \le N \le 100000$)</p>
// <p>Output the sequence which starts from 
// $N$ and ends at 1, in separated lines.</p>

#include <stdio.h>
int main(){
  int input_int;
  scanf("%d",&input_int);
  if (input_int == 1){
    printf("%d\n",input_int);
  }
  else{
    printf("%d\n",input_int);
    while(input_int != 1){
      if ( (input_int % 2) != 1){
        input_int = input_int/2;
        printf("%d\n",input_int);
      }
      else{
        input_int = (3 * input_int) + 1;
        printf("%d\n",input_int);
      }
    }
  }
  return 0;
}
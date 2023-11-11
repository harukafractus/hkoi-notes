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
// <p>You are a trainee of the Heung Shing Bank. 
// You are learning how to process withdrawals. 
// For the convenience of the customers, 
// you should always use the minimum possible number of currencies. 
// Write a program to assist you.</p>
// <ul>
//   <li>You are provided with infinitely many
//    \$1000, \$500, \$100, \$50, \$20 and \$10 notes.</li>
//   <li>Use the minimum number of notes to produce the exact amount.</li>
// </ul>
// <h1>Input and Output</h1>
// 
// <p>The input consists of an integer $N$, the amount to withdraw.
// <br>$10 \le N \le 10000$ and $N$ is a multiple of 10.</p>
// <p>Output the notes used on separate lines in any order. 
// Do not include the dollar sign.</p>

#include <stdio.h>
int main(){
  short int_input, indict;
  scanf("%hd",&int_input);
  indict = int_input;
  while (indict != 0){
    while (indict >= 1000){
      printf("1000\n");
      indict -= 1000;
    }
    while (indict >= 500){
      printf("500\n");
      indict -= 500;
    }
    while (indict >= 100){
      printf("100\n");
      indict -= 100;
    }
    while (indict >= 50){
      printf("50\n");
      indict -= 50;
    }
    while (indict >= 20){
      printf("20\n");
      indict -= 20;
    }
    while (indict >= 10){
      printf("10\n");
      indict -= 10;
    }
  }
  return 0;
}
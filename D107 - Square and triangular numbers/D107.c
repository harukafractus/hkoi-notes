// Copyright (c) 2022 ivantam04

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
// <p>Write a program to determine whether $N$ is a square number and/or a triangular number.</p>
// 
// <h1>Input and Output</h1>
// 
// <p>The input consists of the integer $N$. $1 \le N \le 10^{18}$.</p>
// 
// <p>If $N$ is both a square number and a triangular number, output \texttt{Both}.</p>
// <p>If $N$ is a square number only, output \texttt{Square}.</p>
// <p>If $N$ is a triangular number only, output \texttt{Triangular}.</p>
// <p>If $N$ is neither a square number nor a triangular number, output \texttt{Neither}.</p>

#include <stdio.h>
#include <math.h>

int ifsq(long long in){
  long double float_sqrt_root = sqrtl(in);
  long long int_sqrt_root = float_sqrt_root;
  return int_sqrt_root == float_sqrt_root;
}

int iftri(long long in){
  return ifsq(8 * in + 1);
}

int main(void){
  long long in_value;
  scanf("%lld", &in_value);

  if(iftri(in_value) && ifsq(in_value)){
    printf("Both");
  } else if(iftri(in_value)){
    printf("Triangular");
  } else if(ifsq(in_value)){
    printf("Square");
  } else{
    printf("Neither");
  }
  return 0;

}

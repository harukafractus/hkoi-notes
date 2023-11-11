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
// <p>Queue is a data structure that allows data to be accessed "First-in-first-out" efficiently. Specifically, it supports the following operations.</p>
// <ul>
// 	<li>\texttt{PUSH} $x$: Insert $x$ to the end of the queue.</li>
// 	<li>\texttt{FRONT}: Returns the element at the front of the queue if there is any.</li>
// 	<li>\texttt{POP}: Remove an element from the front of the queue if there is any. </li>
// 	<li>\texttt{SIZE}: Returns the number of the elements in the queue currently.</li>
// </ul>
// <p>In this exercise, we will implement a queue that handles integers.</p>
// 
// <h1>Input</h1>
// 
// <p>The first line contains integer $N$, the number of operations. ($1 \le N \le 1000$)</p>
// <p>Each of the next $N$ lines describe an operation: \texttt{PUSH}, \texttt{FRONT}, \texttt{POP} or \texttt{SIZE}.<br>If the operation is \texttt{PUSH}, it will be followed by an integer $x$ ($1 \le x \le 10^9$).</p>
// 
// <h1>Output</h1>
// <p>When the operation is \texttt{FRONT}, output the integer at the front of the queue if there is any, otherwise output \texttt{Empty} if the queue is currently empty.
// </p>
// <p>When the operation is \texttt{POP} and the queue is current empty, output \texttt{Cannot pop}.<br>
// <p>When the operation is \texttt{SIZE}, output an integer -- the number of elements in the queue currently.</p>
#include <stdio.h>
int main() {
  int qs=0;
  int qe=0;
  int q[1000];
  int n,i,x;
  int count=0;
  char s[10];
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%s",&s);
    if(strcmp(s, "PUSH")==0){
      scanf("%d",&x);
      q[qe]=x;
      qe++;
      count++;
    }else if(strcmp(s, "FRONT")==0){
      if(count==0){
        printf("Empty\n");
      }else{
        printf("%d\n",q[qs]);
      }
 
    }else if(strcmp(s, "POP")==0){
      if(count==0){
        printf("Cannot pop\n");
      }else{
        count--;
        qs++;
      }
    }else if(strcmp(s, "SIZE")==0){
      printf("%d\n",count);
    }
  }
    return 0;
}
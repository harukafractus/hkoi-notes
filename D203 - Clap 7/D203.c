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
// <h1>Input and Output</h1>
// 
// <p>The input consists of the integer $N$. ($2 \le N \le 9$)</p>
// 
// <p>Output the sequence from 1 to 100 in ten rows.
// Each row consists of 10 integers or \texttt{Clap} separated by spaces.
// <p>The first row should represent 1 to 10 and
// the second row should represent 11 to 20, etc.</p>
// <p>There must not be any trailing whitespace at the end of each row.</p>

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i<101 ;i++){
        if( i%n==0 ){
            printf("Clap");
        }else if(n%10==i%10){
            printf("Clap");
        }else if((i-n*10)>0&&(i-n*10)<10){
            printf("Clap");
        }else{
            printf("%d",i);
        }
        if(i%10==0){
            printf("\n");
        }else{
            printf(" ");
        }
    }
    return 0;
}

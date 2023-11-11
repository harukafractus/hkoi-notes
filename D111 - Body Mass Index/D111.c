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
// <p>Write a program to calculate the Body Mass Index (BMI) and determine the person's weight status.</p>
// 
// <p>The Body Mass Index can be calculated by the formula $BMI = \cfrac{W}{H^2}$, where $W$ is the weight (in kg) and $H$ is the height (in m) of a person.</p>
// 
// <table class="table table-bordered" style="width: auto">
// 	<tr><th></th><th>Weight Status Classification</th>
// 	<tr><td>$BMI \lt 18.5$</td><td>\texttt{Underweight}</td>
// 	<tr><td>$18.5 \le BMI \lt 23.0$</td><td>\texttt{Normal}</td>
// 	<tr><td>$23.0 \le BMI \lt 25.0$</td><td>\texttt{Overweight}</td>
// 	<tr><td>$BMI \ge 25.0$</td><td>\texttt{Obese}</td>
// </table>
// 
// <h1>Input and Output</h1>
// 
// <p>The input consists of two numbers with one decimal place, $W$ and $H$, in a line separated by spaces.
// <br>You may assume that $40 \le W \le 160$, $1.5 \le H \le 2.0$.</p>
// 
// <p>On the first line, output the Body Mass Index rounded to three decimal places. You must output exactly 3 digits after the decimal point.<br>On the second line, output the weight status classified.</p>
#include <stdio.h>
#include <math.h>

int main() {
  float weight, height, bmi;
  scanf("%f %f",&weight,&height);
  bmi = (weight / (height * height))*1000;
  bmi = round(bmi)/1000;
  printf("%.3lf\n",bmi);

  if (bmi<18.5){
    printf("Underweight");
  }
  else if (18.5<=bmi && bmi<23.0){
    printf("Normal");
  }
  else if (23.0<=bmi && bmi<25.0){
    printf("Overweight");
  }
  else{
    printf("Obese");
  }
  
  return 0;
}

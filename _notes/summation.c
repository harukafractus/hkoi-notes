// Copyright (c) 2022 ivantam04.

// This work is licensed under the terms of the MIT license.  
// For a copy, see <https://opensource.org/licenses/MIT>.

// Demo program for "An introduction to recursion"
// Stdin a number, Stdout the summation of the number
// i.e. stdin 9 -> stdout 25

#include <stdio.h>

int summation(unsigned int input){
  if(input != 0){
    return(input+summation(input-1));
  } else{
    return 0;
  }
}

void main() {
  int inputInt;
  scanf("%d", &inputInt);
  printf("%u",summation(inputInt));
}

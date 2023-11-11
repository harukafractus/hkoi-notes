// Copyright (c) 2022 ivantam04.

// This work is licensed under the terms of the MIT license.  
// For a copy, see <https://opensource.org/licenses/MIT>.

// Demo program for "Sorting: Bubble sort"
// Generate an array with a size of 5
// then sort it with sinking sort

#include <stdio.h>
#include <stdlib.h>

int main() {

  int array_size = 10;
  int num[array_size];
  int swap_count = 0;
  printf("Generated Array:");
  for (int i = 0; i < array_size; i++){
      num[i] = rand()%100+1; //Generate 5 numbers
    printf("%d ", num[i]);
    
  }
  printf("\nAfter sorting:");
  for (int i = 0; i < array_size; i++){
      for(int j = 0; j < array_size-1; j++ ){
          if (num[j] > num[j+1]){
              int bigger = num[j];
              int smaller = num[j+1];
              num[j+1] = bigger;
              num[j] = smaller;
              swap_count++;
            
          }
      }
  }

    for (int i = 0; i < array_size; i++){
      printf("%d ", num[i]); //Generate 5 numbers
  }
  printf("\nSwap Count: %d", swap_count);
}
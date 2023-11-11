// Copyright (c) 2022 ivantam04.

// This work is licensed under the terms of the MIT license.  
// For a copy, see <https://opensource.org/licenses/MIT>.

// Demo program for "Sorting: Selection sort"
// Generate an array with a size of 5
// then sort it with selection sort

#include <stdio.h>
#include <stdlib.h>

int main() {

  int array_size = 5;
  int num[array_size];
  int swap_count = 0;

	printf("Unsorted Array:");
  	for (int i = 0; i < array_size; i++){
		num[i] = rand()%100+1; 
    	printf("%d ", num[i]);
  	}
	
	printf("\n\nSorted Array:");
	for (int i = 0; i < (array_size - 1); i++) {
		int position = i;
		for (int j = i + 1; j < array_size; j++) {
			if (num[position] > num[j])
				position = j;
		}
		if (position != i) {
			int swap;
			swap = num[i];
			num[i] = num[position];
			num[position] = swap;
		}
	}
	for (int i = 0; i < array_size; i++){
		printf("%d ", num[i]); 
	}
}
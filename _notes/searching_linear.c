// Copyright (c) 2022 ivantam04

// This work is licensed under the terms of the MIT license.  
// For a copy, see <https://opensource.org/licenses/MIT>.

// Demo program for "Searching: Linear search"
// Generate an array with a size of 10
// then search the give number via stdin 
// 9 -> [Array] -> 
// Maybe "The num %d is in the array" or
// "Not exist"

#include <stdio.h>
#define size 10

int main()
{
  int pass, i;
  // Generate a List of 10 random items
  srand(time(0));
  int List[size];
  for (i=0; i<size; i++){
    List[i] = (rand()%20)+ 1;
  }
  // List the items in the array
  for (i=0; i<size; i++){
    if (i == size-1)
      printf("%d\n", List[i]);
    else
      printf("%d, ", List[i]);  
  }
  // Linear Search
	int target;
	scanf("%d", &target);

	int flat = 0;
	int p = 0;
	
	int F[size];
	for(i=0; i<size; i++)
		F[i] = 0;
		
	for(i=0; i<size; i++){
	  	if(target == List[i]){
	  		flat = 1;
	  		p = i;
	  		F[i] = 1; 
	  	}	
	}
	if(flat == 1){
		printf("The num %d is in the array, its in ", target);
		for(i=0; i<size; i++){
			if(F[i] == 1)
				printf("F[%d] ", i);
		}
	}	
	else
	  printf("Not exist");
  return 0;
}
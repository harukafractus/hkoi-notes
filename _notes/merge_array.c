// Copyright (c) 2022 ivantam04.

// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

// Merge two sorted array

#include <stdio.h>

void print_array(int *array, int size){
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  } puts("\n");
}

int *merge_list(int array_a[], int array_b[], size_t sizeof_a, size_t sizeof_b){
  int indexof_a = 0, indexof_b = 0, indexof_c = 0;
  int array_c[] = {};
  while(indexof_a < sizeof_a && indexof_b < sizeof_b){
    if(array_a[indexof_a] < array_b[indexof_b]){
      array_c[indexof_c] = array_a[indexof_a];
      indexof_a++;
    } else{
      array_c[indexof_c] = array_b[indexof_b];
      indexof_b++;
    }
    indexof_c++;
  }
  if(indexof_a != sizeof_a){
    for(int x = indexof_a, tempindexof_c = indexof_c; indexof_a < sizeof_a; x++, tempindexof_c++){
      array_c[tempindexof_c] = array_a[x];
    }
  }else{
      for(int x = indexof_b, tempindexof_c = indexof_c; indexof_a < sizeof_a; x++, tempindexof_c++){
        array_c[tempindexof_c] = array_b[x];
      }
    }
  return array_c;
}

int main(void){
  int number_array_a[5] = {30,624,700,3062,4770};
  int size_array_a = sizeof(number_array_a)/sizeof(number_array_a[0]);
  int number_array_b[6] = {5,34,202,13942,43140,62430};
  int size_array_b = sizeof(number_array_b)/sizeof(number_array_b[0]);
  int *y = merge_list(number_array_a, number_array_b, size_array_a, size_array_b);
  printf("%d",y[11]);
}
// Copyright (c) 2022 ivantam04.

// This work is licensed under the terms of the MIT license.  
// For a copy, see <https://opensource.org/licenses/MIT>.

// Demo program for "Sorting: Merger sort"
// Generate an array with a size of 10
// then sort it with merge sort

#include <stdio.h>
#define size 10

void Merge(int A[], int temp[], int left, int middle, int right){
  int AP, BP, CP, i, Blength;
  AP = left;
  BP = middle + 1;
  CP = left;
 
  do {
    if (A[AP] < A[BP]){
      temp[CP] = A[AP];
      AP++;
    } else {
      temp[CP] = A[BP];
      BP++;    
    } 
    CP++;
    compare++;
  } while (!((AP > middle)||(BP > right)));
  
  Blength = right - middle;

  if (AP > middle){
    for (i = BP;i<= right; i++) 
      temp[i] = A[i];
  } else {
    for (i = AP;i<= middle; i++) 
      temp[i+Blength] = A[i];  
  }
    for (i=left; i<=right; i++)
    A[i] = temp[i];
}

void MergeSort(int A[], int temp[], int left, int right){
  //Implement mergesort algorithm in here
}

int main(){ 
  int TempList[size];  
  int j;
  
  printf("Before Merge Sort: {");
  int List[size] = {2, 0, 3, 7, 5, 1, 6, 4, 8, 9}; 
  for (j=0; j<size; j++){
    if (j == size-1)
      printf("%d}\n", List[j]);
    else
      printf("%d, ", List[j]);  
  }
  
  MergeSort(List, TempList, 0, size-1);
  
  printf("After Merge Sort:  {");
  for (j=0; j<size; j++){
    if (j == size-1)
      printf("%d}\n", List[j]);
    else
      printf("%d, ", List[j]);  
  }
  
  return 0;
}
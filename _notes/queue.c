// Copyright (c) 2022 ivantam04.

// This work is licensed under the terms of the MIT license.  
// For a copy, see <https://opensource.org/licenses/MIT>.


// Demo program for "Abstract data type: queuing"

#include<stdio.h>
#define arr_size 5

char S[arr_size];
int index_first = 0, index_last = 0;

void reset_quete(){
    index_first = 0, index_last = 0;
}

void queue(char alphabet){
	if (index_first % (arr_size + 1) == (index_last + 1) % (arr_size + 1)){
		puts("Array Full.");
	} else{
		S[index_last] = alphabet;
		index_last++;
		printf("%c added to queue\n", alphabet);
	}
}

void dequeue(){
    if (index_first == (index_last - 1)){
        puts("Cannot POP (List Empty)");
    } else{
    	index_first++;
		puts("Dequeued.");
    }
}

void size(){
    printf("%d", (index_last - 1 )- index_first);
}

void showqueue(){
	for(int x = index_first; x != index_last; x++){
		printf("Queue in Line: %c, at index %d\n", S[x], (x - index_first));
	}
}

void front(){
    if (index_first == (index_last - 1)){
        puts("empty");
} else{
    printf("%d", S[index_first]);
    }
}

int main(void){
	queue('A');
	queue('B');
	showqueue();
	dequeue();
	showqueue();
	queue('C');
	queue('D');
	queue('E');
	showqueue();
	queue('F');
	dequeue();
	showqueue();
	queue('G');
	showqueue();
	queue('H');
    return 0;
}

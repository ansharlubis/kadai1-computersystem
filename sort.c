#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort_int_array(int *ary, int ary_size){
	int i, j;
	int temp;

	for (i = 0; i < ary_size; i++){
		int k = ary_size - 1;

		for (j = 0; j < k; j++){
			if (ary[j+1] < ary[j]){
				temp = *(ary+j);
				*(ary+j) = *(ary+j+1);
				*(ary+j+1) = temp;
			} 
		}

		k = k - 1;		
	}
}

int main(){
	int size = 20;
	int rand_array[size];
	time_t t;

	srand((unsigned) time(&t));

	for (int k = 0; k < 10; k++){
		
		for (int j = 0; j < size; j++){
			rand_array[j] = rand() % 1000 + 1;
		}

		sort_int_array(rand_array, size);
	
		printf("array: ");
		for (int i = 0; i < size; i++){
			printf("%d ", *(rand_array+i));
		}
		printf("\n");
	}

	return 0;
}
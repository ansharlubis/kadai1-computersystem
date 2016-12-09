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
	int size = 10;
	int rand_array[size];
	time_t t;

	srand((unsigned) time(&t));

	for (int k = 0; k < 5; k++){
		
		for (int j = 0; j < size; j++){
			rand_array[j] = rand() % 100 + 1;
		}

		printf("initial array: ");
		for (int i = 0; i < size; i++){
			printf("%d ", *(rand_array+i));
		}
		printf("\n");

		sort_int_array(rand_array, size);
	
		printf("sorted array: ");
		for (int i = 0; i < size; i++){
			printf("%d ", *(rand_array+i));
		}
		printf("\n");		
	}

	return 0;
}
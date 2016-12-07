#include <stdio.h>
#include <stdlib.h>

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
	int ary[] = {1, 6, 7, 8, 2, 3, 2, 1, 5, 7, 2, 13, 253, 2, 2, 3, -3, -233, 934, 2, 334, 97};
	int ary_size = 22;

	sort_int_array(ary, ary_size);

	printf("array: ");
	for (int i = 0; i < ary_size; i++){
		printf("%d ", *(ary+i));
	}
	printf("\n");

	return 0;
}
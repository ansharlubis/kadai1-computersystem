#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pi(int n, double *pi){
	int i;
	int m = 0;
	time_t t;

	srand((unsigned) time(&t));

	for (i = 0; i < n; i++){
		int x = rand() % 1000 + 1;
		int y = rand() % 1000 + 1;

		if ((x*x)+(y*y) < 1000000){
			m = m+1;
		}
	}

	if (m > 0){
		*pi = 4*((double)m)/n;
		return 0;
	} else {
		return -1;
	}
}

int main(){
	int n = 100000;
	double *b;

	printf("initial: %f\n", *b);
	pi(n, b);
	printf("result: %f\n", *b);	
	
	return 0;
}
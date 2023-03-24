/**
 * WAP that will take n integers into an array A, and then copy all numbers in reverse order
 * from array A to another array B. Finally show all elements of both array A and B.
 * 
 * Solve (No issue remains) - @mrasadatik
 * 
*/

#include <stdio.h>

int main() {

	int term;

	scanf("%d", &term);

	int arrayA[term], arrayB[term];

	for (int i = 0; i < term; i++) {
		scanf("%d", &arrayA[i]);
	}

	for (int i = term; i >= 0; i--) {
		arrayB[i] = arrayA[term - i - 1];
	}

	printf("\n");

	printf("Array A : ");
	for (int i = 0; i < term; i++) {
		printf("%d ", arrayA[i]);
	}

	printf("\nArray B : ");
	for (int i = 0; i < term; i++) {
		printf("%d ", arrayB[i]);
	}

	return 0;

} //main

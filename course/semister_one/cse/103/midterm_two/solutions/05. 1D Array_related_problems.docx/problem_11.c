/**
 * WAP that will take n positive integers into an array A. Now find all the integers that are
 * divisible by 3 and replace them by -1 in array A. Finally show all elements of array A.
 * 
 * Solved (No issue remains) by @mrasadatik
 * 
*/

#include <stdio.h>

int main() {

	int size;

	scanf("%d", &size);

	int integers[size];

	for (int i = 0; i < size; i++) {
		scanf("%d", &integers[i]);
		if (integers[i]%3 == 0) {
			integers[i] = -1;
		}
	}

	printf("\n");

	for (int i = 0; i < size; i++) {
		printf("%d ", integers[i]);
	}

	return 0;

} //main

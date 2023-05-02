#include <stdio.h>

int extractEvens(int primary[], int *secondary, int size);

int main() {
	int n;
	scanf("%d", &n);
	int integers[n], evenIntegers[n];
	for (size_t i = 0; i < n; ++i) {
		scanf("%d", &integers[i]);
	}
	size_t j = extractEvens(integers, evenIntegers, n);
	for (size_t i = 0; i < j; ++i) {
		printf("%d", evenIntegers[i]);
		if (i != j){
			printf(" ");
		}
	}
	return 0;
}

int extractEvens(int primary[], int *secondary, int size) {
	size_t j = 0;
	for (size_t i = 0; i < size; ++i) {
		if (primary[i]%2 == 0) {
			secondary[j++] = primary[i];
		}
	}
	return j;
}

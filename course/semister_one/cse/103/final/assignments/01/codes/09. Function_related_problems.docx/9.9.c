#include <stdio.h>

int *multiplyBy2(int target[], int size);

int main() {
    int n;
    scanf("%d", &n);
    int integers[n];
    for (size_t i = 0; i < n; ++i) {
		scanf("%d", &integers[i]);
    }
    int *integers2x = multiplyBy2(integers, n);
	for (size_t i = 0; i < n; ++i){
		printf("%d", integers2x[i]);
		if (i != n-1) {
			printf(" ");
		}
	}
    return 0;
}


int *multiplyBy2(int target[], int size) {
    for (size_t i = 0; i < size; ++i) {
        target[i] = target[i] * 2;
    }
    return target;
}

#include <stdio.h>

int find_minimum(int target[], int size);

int main() {
	int n;
	scanf("%d", &n);
    int integers[n];
    for (size_t i = 0; i < n; ++i) {
		scanf("%d", &integers[i]);
    }
    printf("Minimum Value: %d\n", find_minimum(integers, n));
    return 0;
}

int find_minimum(int target[], int size) {
    int minimum = target[0];
    for (int i = 1; i < size; i++) {
        if (target[i] < minimum) {
            minimum = target[i];
        }
    }
    return minimum;
}

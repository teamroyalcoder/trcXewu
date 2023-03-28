#include <stdio.h>

int main() {
	int number;
	scanf("%d", &number);

	if (number > 70) {
		printf("70");
	} else if (number > 60) {
		printf("60");
	} else if (number > 50) {
		printf("50");
	}

	return 0;
}

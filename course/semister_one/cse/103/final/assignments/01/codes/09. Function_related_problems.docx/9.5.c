#include <stdio.h>

void swap(int n1, int n2);

int main(int argc, char *argv[]) {
	int x, y;
	scanf("%d %d", &x, &y);
	swap(x, y);
	printf("Value in main: %d %d\n", x, y);
	return 0;
}

void swap(int n1, int n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;

	printf("Value in func: %d %d\n", n1, n2);

	return;
}

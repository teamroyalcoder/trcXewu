#include <stdio.h>

void swap(int *n1, int *n2);

int main(int argc, char *argv[]) {
	int tempX, tempY, x, y, *xp, *yp;
	scanf("%d %d", &tempX, &tempY);
	x = tempX;
	y = tempY;
	xp = &tempX;
	yp = &tempY;
	swap(xp, yp);
	printf("Value in main: %d %d\n", x, y);
	return 0;
}

void swap(int *n1, int *n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;

	printf("Value in func: %d %d\n", *n1, *n2);

	return;
}

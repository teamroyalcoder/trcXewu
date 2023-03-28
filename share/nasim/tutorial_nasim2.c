#include <stdio.h>

int main() {

	double inch;
	int actualFeet, remainingInch;

	scanf("%lf", &inch);

	actualFeet = (int)inch/12;
	remainingInch = (int)inch%12;

	printf("%d feet %d inch", actualFeet, remainingInch);

	return 0;

}

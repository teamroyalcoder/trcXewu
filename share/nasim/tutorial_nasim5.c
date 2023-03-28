#include <stdio.h>
#include <math.h>

int main() {
	float a, b, aTOb;
	scanf("%f %f", &a, &b);
	aTOb = pow(a, b); // using pow() method or function
	printf("%0.2f", aTOb);
	return 0;
}

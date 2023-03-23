/**
 * 	WAP that will calculate following mathematical function for the input of x. Use only the series to solve the problem.
 * sin⁡x=x-  x^3/3!+  x^5/5!-x^7/7!+⋯…….∞
 * 
 * ----------------------------------------------------------------
 * Sample input:                | 1
 *                              |--------------------------------
 *                              | 2
 *                              |--------------------------------
 * 								              | 3
 * ----------------------------------------------------------------
 * Sample output:               | 0.841
 *                              |--------------------------------
 *                              | 0.909
 *                              |--------------------------------
 * 								              | 0.141
 * ----------------------------------------------------------------
 * 
 * Solved (Issue remains) - @mrasadatik
 * 
*/

#include <stdio.h>
#include <math.h>

int main() {
	char mode;
	double x, sin_x = 0.0;
	int n;

	scanf("%c", &mode);

	scanf("%lf", &x);

	scanf("%d", &n);

	if (mode == 'd') {
		x = x * M_PI / 180.0;
	}

	for (int i = 0; i <= n; i++) {
		int factorial = 1;
		for (int j = 2*i+1; j > 0; j--) {
			factorial *= j;
		}
		sin_x += pow(-1, i) * pow(x, 2 * i + 1) / factorial;
	}

	printf("%.3g\n", sin_x);

	return 0;

} //main

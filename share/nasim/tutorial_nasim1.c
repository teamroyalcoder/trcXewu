#include <stdio.h>

int main() {
	double u, a, t, s;
	scanf("%lf %lf %lf", &u, &a, &t);
	s = (u*t) + ((1.0/2.0)*a*(t*t));
	printf("s = %g", s);
	return 0;
}

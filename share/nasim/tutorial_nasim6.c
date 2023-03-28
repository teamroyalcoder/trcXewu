#include <stdio.h>
#include <math.h>

int main() {

	float a, b, c, discriminant, root1, root2;
	scanf("%f %f %f", &a, &b, &c);
	discriminant = pow(b, 2) - 4*a*c;

	if (discriminant > 0) {
		root1 = (-b + sqrt(discriminant)) / (2*a);
		root2 = (-b - sqrt(discriminant)) / (2*a);
		printf("x1 = %.2f\n"
				"x2 = %.2f\n", root1, root2);
	} else if (discriminant == 0) {
		root1 = root2 = -b / (2*a);
		printf("x1 = %.2f\n"
				"x2 = %.2f\n", root1, root2);
	}else {
		printf("Imaginary\n");
	}

	return 0;

} //main

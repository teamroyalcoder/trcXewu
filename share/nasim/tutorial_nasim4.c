#include <stdio.h>
#include <math.h>

int main() {
	float number;
	int _floor, _ceil;
	scanf("%f", &number);
	_floor = floor(number);
	_ceil = ceil(number);
	printf("Floor = %d\n"
			"Ceiling = %d\n", _floor, _ceil);
	return 0;
}

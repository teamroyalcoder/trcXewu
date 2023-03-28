#include <stdio.h>

int main() {

	int numberOne, numberTwo, numberThree;
	scanf("%d %d %d", &numberOne, &numberTwo, &numberThree);
	if(numberOne > numberTwo) {
		if (numberOne > numberThree) {
			printf("%d", numberOne);
		} else {
			printf("%d", numberThree);
		}
	} else {
		if (numberTwo > numberThree) {
			printf("%d", numberTwo);
		} else {
			printf("%d", numberThree);
		}
	}
	return 0;

}

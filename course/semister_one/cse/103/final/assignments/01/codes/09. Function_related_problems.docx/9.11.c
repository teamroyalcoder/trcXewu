#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int target);

int main(int argc, char *argv[]) {
	int x;
	scanf("%d", &x);
	if (IsPrime(x)) {
		printf("Prime");
	} else {
		printf("Not Prime");
	}

	return 0;
}

bool IsPrime(int target) {
	bool flag = true;
	if (target > 1) {
		for (size_t i = 2; i <= target/2; ++i) {
			if (target%i == 0) {
				flag = false;
			}
		}
	} else {
		flag = false;
	}

	return flag;
}

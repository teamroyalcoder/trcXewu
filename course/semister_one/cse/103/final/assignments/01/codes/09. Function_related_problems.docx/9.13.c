#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int target);
void GenNthPrime(int pos);

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	GenNthPrime(n);
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

void GenNthPrime(int pos) {
	if (pos < 1) {
		printf("None\n");
		return;
	}
	printf("%dth Prime: ", pos);
	for (size_t i = 0, count = 1;; ++i) {
		if (IsPrime(i)) {
			if (count++ == pos) {
				printf("%d", i);
				break;
			}
		}
	}
	printf("\n");
	return;
}

#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int target);
void GeneratePrime(int term);

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	GeneratePrime(n);
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

void GeneratePrime(int term) {
	printf("Prime less than %d: ", term);
	for (size_t i = 0, count = 0; i < term; ++i) {
		if (IsPrime(i)) {
			printf("%s%d", count++ == 0 ? "" : ", ",i);
		}
	}
	printf("\n");
	return;
}

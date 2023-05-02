#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
    int num1, num2;
    while (1) {
        scanf("%d%d", &num1, &num2);
        int gcd_val = gcd(num1, num2);
        int lcm_val = lcm(num1, num2);
        printf("GCD: %d\n", gcd_val);
        printf("LCM: %d\n", lcm_val);
    }
    return 0;
}

int gcd(int a, int b) {
    if (b == 0) {
		return a;
    } else {
		return gcd(b, a % b);
    }
}

int lcm(int a, int b) {
    int gcd_val = gcd(a, b);
    return (a / gcd_val) * b;
}

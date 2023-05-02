#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool Get_Number_And_Base(int *n, int *b);
void Convert_Number(int n, int b, char *result);
void Show_Converted_Number(int n, int b);

int main(int argc, char *argv[]) {
    int n, b;
    if (Get_Number_And_Base(&n, &b)) {
		Show_Converted_Number(n, b);
    }
    return 0;
}

bool Get_Number_And_Base(int *n, int *b) {
    scanf("%d", n);
    scanf("%d", b);
    if (*b < 2 || *b > 16) {
        printf("Base not within proper range!\n");
        return false;
    } else {
		return true;
    }
}

void Convert_Number(int n, int b, char *result) {
    int i = 0;
    while (n != 0) {
        int rem = n % b;
        if (rem < 10) {
            result[i] = rem + '0';
        } else {
            result[i] = rem - 10 + 'A';
        }
        i++;
        n /= b;
    }
    result[i] = '\0';
    return;
}

void Show_Converted_Number(int n, int b) {
    char result[100];
    Convert_Number(n, b, result);

    int len = strlen(result);

    for (int i = 0; i < len / 2; i++) {
        char temp = result[i];
        result[i] = result[len - i - 1];
        result[len - i - 1] = temp;
    }

    printf("%s\n", result);
    return;
}

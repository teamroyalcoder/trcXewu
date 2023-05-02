#include <stdio.h>

int str_length(char str[]);
int find_substr(char a[], char b[]);

int main() {
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    if (find_substr(str1, str2) == 1) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}

int str_length(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int find_substr(char a[], char b[]) {
    int len_a = str_length(a);
    int len_b = str_length(b);
    int i, j;
    for (i = 0; i <= len_a - len_b; i++) {
        for (j = 0; j < len_b; j++) {
            if (a[i + j] != b[j]) {
                break;
            }
        }
        if (j == len_b) {
            return 1;
        }
    }
    return -1;
}

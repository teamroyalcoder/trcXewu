#include <stdio.h>
#include <string.h>

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

int find_substr(char a[], char b[]) {
    int i, j, flag;
    int len_a = strlen(a);
    int len_b = strlen(b);
    for (i = 0; i <= len_a - len_b; i++) {
        flag = 1;
        for (j = 0; j < len_b; j++) {
            if (a[i+j] != b[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            return 1;
        }
    }
    return -1;
}

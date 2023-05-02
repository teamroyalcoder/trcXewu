#include <stdio.h>

void print_char(char c);

int main(int argc, char *argv[]) {
    
    char input;
    
    scanf("%c", &input);
    
    print_char(input);

    return 0;

}

void print_char(char c) {

    printf("Value received from main: %c\n", c);
    
    return;

}

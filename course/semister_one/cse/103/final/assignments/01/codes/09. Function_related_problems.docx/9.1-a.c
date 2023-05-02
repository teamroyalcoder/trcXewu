#include <stdio.h>

void custom_message(void);

int main(int argc, char *argv[]) {
    
    custom_message();

    return 0;

}

void custom_message(void) {

    printf("This is a function\n");
    
    return;

}

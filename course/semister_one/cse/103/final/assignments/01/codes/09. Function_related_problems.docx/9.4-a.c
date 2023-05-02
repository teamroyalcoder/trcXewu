#include <stdio.h>

void sum(int nIntegers[], int size);

int main(int argc, char *argv[]) {
    
    int n;
    int summation = 0;
    
    scanf("%d", &n);
    
    int integers[n];

    for (size_t i = 0; i < n; ++i) {
        scanf("%d", &integers[i]);
    }

    sum(integers, n);

    for (size_t i = 0; i < n; i++){
        summation += integers[i];
    }
    
    printf("Sum In Main: %d\n", summation);

    return 0;

}

void sum(int nIntegers[], int size){
    
    int totalSum = 0;

    for (size_t i = 0; i < size; i++){
        totalSum += nIntegers[i];
    }
    
    printf("Sum In Function: %d\n", totalSum);

    return;

};
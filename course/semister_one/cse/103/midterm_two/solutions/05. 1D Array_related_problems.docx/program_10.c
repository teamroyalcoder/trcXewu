/**
 * WAP that will first take n integers into an array A and then m integers into array B. Now
 * swap all elements between array A and B. Finally show all elements of both array A and B.
 * 
 * Solve (No issue remains) - @mrasadatik
 * 
*/

#include <stdio.h>

int main() {

    // Declare variables and initialize array sizes
    int sizeA = 0, sizeB = 0;
    
    // Input array sizes and elements
    scanf("%d", &sizeA);
    int tempA[sizeA];
    for (int i = 0; i < sizeA; i++) {
        scanf("%d", &tempA[i]);
    }

    scanf("%d", &sizeB);
    int tempB[sizeB];
    for (int i = 0; i < sizeB; i++) {
        scanf("%d", &tempB[i]);
    }
    
    // Determine maximum array size
    int maxSize = (sizeB > sizeA) ? sizeB : sizeA;
    
    // Declare and initialize actual arrays
    int arrayA[maxSize], arrayB[maxSize];
    for (int i = 0; i < sizeA; i++) {
        arrayA[i] = tempA[i];
    }
    for (int i = 0; i < sizeB; i++) {
        arrayB[i] = tempB[i];
    }

    // Swap array A and B
    for (int i = 0; i < sizeB; i++) {
        arrayA[i] = arrayB[i];
    }
    for (int i = 0; i < sizeA; i++) {
        arrayB[i] = tempA[i];
    }

    // Print swapped arrays
    printf("\nArray A : ");
    for (int i = 0; i < sizeB; i++) {
        printf("%d ", arrayA[i]);
    }

    printf("\nArray B : ");
    for (int i = 0; i < sizeA; i++) {
        printf("%d ", arrayB[i]);
    }
    printf("\n");

    return 0;

} //main

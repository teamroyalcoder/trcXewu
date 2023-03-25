/**
 * WAP that will take n integers into an array A. Now remove all duplicates numbers from
 * that array. Finally print all elements from that array.
 * 
 * Solved (No issue remains) by @mrasadatik
 * 
*/

#include <stdio.h>
#include <stdbool.h>

int main() {

    int size = 0;

    scanf("%d", &size);

    int integers[size], uniqueSize = size;

    for (int i = 0; i < size; i++) {
        scanf("%d", &integers[i]);
    }

    printf("\n");
    
    // removing duplicates from the array
    for (int i = 0; i < uniqueSize; i++) {
        for (int j = i + 1; j < uniqueSize;) {
            if(integers[j] == integers[i]) {
                for (int k = j; k < size; k++) {
                    integers[k] = integers[k + 1];
                }
                uniqueSize--;
            } else {
                j++;
            }
        }
    }

    for (int i = 0; i < uniqueSize; i++) {
        printf("%d ", integers[i]);
    }

    return 0;
    
} // end of main

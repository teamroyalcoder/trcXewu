/**
 * WAP that will take n integers into an array A. Now sort them in ascending order within that array.
 * Finally show all elements of array A.
 * Reference: http://en.wikipedia.org/wiki/Bubble_sort
 * 
 * Solved (No issue remains) by @mrasadatik
 * 
*/

#include <stdio.h>
#include <stdbool.h>

int main() {

    int size = 0;

    scanf("%d", &size);

    int integers[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &integers[i]);
    }

    // Sorting

    // using bubble sort (optimized version)
    bool swapped = false;
    int temp;

    for (int i = 0; i < size - 1; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (integers[j] > integers[j + 1]) {
                temp = integers[j];
                integers[j] = integers[j + 1];
                integers[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }

    printf("\n");

    for (int i = 0; i < size; i++) {
        printf("%d ", integers[i]);
    }

    return 0;

} //main
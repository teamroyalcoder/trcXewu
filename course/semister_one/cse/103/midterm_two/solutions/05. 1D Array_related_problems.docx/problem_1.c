/**
 * WAP that will take n integer numbers into an array, and then print all the integers into
 * reverse order (from the last valid index to index 0).
 * 
 * ----------------------------------------------------------------
 * Sample input:                | 5
 *                              | 1 2 3 4 5
 *                              |
 *                              |
 * ----------------------------------------------------------------
 * Sample output:               | 5 4 3 2 1
 *                              |
 *                              |
 *                              |
 * ----------------------------------------------------------------
 * 
 * Solve - @mrasadatik
 * 
*/

#include <stdio.h>

int main() {

    int term;

    scanf("%d", &term);

    int integers[term];

    for(int i = 0; i < term; i++) {
        scanf("%d", &integers[i]);
    }

    printf("\n");

    for(int i = (term - 1); i >= 0; i--) {
        printf("%d ", integers[i]);
    }

    return 0;

} //main
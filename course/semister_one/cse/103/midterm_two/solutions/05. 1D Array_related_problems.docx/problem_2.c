/**
 * WAP that will take n integer numbers into an array, and then sum up all the integers in
 * that array.
 * 
 * Solve (No issue remains) - @mrasadatik
 * 
*/

#include <stdio.h>

int main() {

    int term, sum = 0;

    scanf("%d", &term);

    int integers[term];

    for(int i = 0; i < term; i++) {
        scanf("%d", &integers[i]);
        sum += integers[i];
    }

    printf("\n");

    printf("%d ", sum);

    return 0;

} //main
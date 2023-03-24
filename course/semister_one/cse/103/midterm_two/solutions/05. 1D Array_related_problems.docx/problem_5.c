/**
 * WAP that will take n integer numbers into an array, and then reverse all the integers
 * within that array. Finally print them all from 0 index to last valid index.
 * 
 * Solve (No issue remains) - @mrasadatik
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
    
    // Reversing the integers within the array

    // Using temporary array
    int tempIntegers[term];

    for(int i = term; i >= 0; i--) {
        tempIntegers[i] = integers[term - i - 1];
    }

    for(int i = 0; i < term; i++) {
        integers[i] = tempIntegers[i];
    }
    
    /*
    // Using temporary variable
    int tempInteger;
    for(int i = 0; i < term / 2; i++) {
        tempInteger = integers[i];
        integers[i] = integers[term - i - 1];
        integers[term - i - 1] = tempInteger;
    }


    // Using XOR swap or Bitwise Manipulation
    for (int i = 0; i < term / 2; i++) {
        integers[i] ^= integers[term - i - 1];
        integers[term - i - 1] ^= integers[i];
        integers[i] ^= integers[term - i - 1];
    }
    */

    printf("\n");

    for(int i = 0; i < term; i++) {
        printf("%d ", integers[i]);
    }

    return 0;

} //main

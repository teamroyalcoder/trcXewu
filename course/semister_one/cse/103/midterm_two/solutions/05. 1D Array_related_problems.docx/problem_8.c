/**
 * WAP that will take n integers into an array, and then search a number into that array. If
 * found then print its index. If not found then print “NOT FOUND”.
 * 
 * Solve (No issue remains) - @mrasadatik
 * 
*/

#include <stdio.h>

int main() {

    int term, target, counter = 0;

    scanf("%d", &term);

    int integers[term];

    for (int i = 0; i < term; i++) {
        scanf("%d", &integers[i]);
    }

    scanf("%d", &target);

    // Finding target value into the array

    // Using linear search
    int indexes[term];

    for (int i = 0; i < term; i++){
        if (integers[i] == target) {
            indexes[counter] = i;
            ++counter;
        }
    }

    printf("\n");
    
    if(counter) {
        printf("FOUND at index position(s): ");

        for (int i = 0; i < counter; i++) {
            if(i == (counter - 1)) {
                printf("%d", indexes[i]);
            }else {
                printf("%d, ", indexes[i]);
            }
        }
    } else {
        printf("NOT FOUND\n");
    }

    return 0;

} //main

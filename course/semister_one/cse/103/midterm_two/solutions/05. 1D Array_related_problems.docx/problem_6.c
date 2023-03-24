/**
 * WAP that will take n integer numbers into an array, and then find the maximum -
 * minimum among them with its index position.
 * 
 * Solve (No issue remains) - @mrasadatik
 * 
*/

#include <stdio.h>

int main() {

    int term, max_i = 0, min_i = 0;

    scanf("%d", &term);

    int integers[term];

    for(int i = 0; i < term; i++) {
        scanf("%d", &integers[i]);
    }

    // Finding MIN and MAX
    
    // Using Linear search (for small array)
    for(int i = 1; i < term; i++){
        if(integers[i] > integers[max_i]){
            max_i = i;
        } else if(integers[i] < integers[min_i]) {
            min_i = i;
        }
    }

    /*
    // Using divide and conquer (for large array)
    // Divide the array into two halves and compare the minimum and maximum values of each half
    for (int i = 1; i < term; i += 2) {
        if (i == term - 1) {
            // If the array has an odd number of elements, handle the last element separately
            if (integers[i] < integers[min_i]) {
                min_i = i;
            }
            if (integers[i] > integers[max_i]) {
                max_i = i;
            }
        } else {
            // Compare the minimum and maximum values of the two elements in the current pair
            if (integers[i] < integers[i + 1]) {
                if (integers[i] < integers[min_i]) {
                    min_i = i;
                }
                if (integers[i + 1] > integers[max_i]) {
                    max_i = i + 1;
                }
            } else {
                if (integers[i + 1] < integers[min_i]) {
                    min_i = i + 1;
                }
                if (integers[i] > integers[max_i]) {
                    max_i = i;
                }
            }
        }
    }
    */

    printf("\n");
    
    printf("Max: %d, Index: %d\n"
            "Min: %d, Index: %d\n", integers[max_i], max_i, integers[min_i], min_i);

    return 0;

} //main

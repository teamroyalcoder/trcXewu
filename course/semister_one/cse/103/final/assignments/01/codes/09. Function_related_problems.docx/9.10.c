#include <stdio.h>

/*!
 * @brief Function for sorting
 * @details This function is a standard algorithm
 * (bubble sort) of sorting
 * that takes an array of integers and returns
 * the sorted array of integers
 * 
 * @param target The target array
 * @param n The number of elements
 * @param order The order of the sorted array
 * elements. If order is ascending pass 'a', pass
 * 'd' if order is descending
 * 
 * @return Sorted array
 */
int *sortArray(int target[], int n, char order);

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int integers[n];
    for (size_t i = 0; i < n; ++i) {
        scanf("%d", &integers[i]);
    }
    int *sortedArray = sortArray(integers, n, 'a');
    for (size_t i = 0; i < n; i++) {
        printf("%d ", sortedArray[i]);
    }
    return 0;
}

/*!
 * @brief Function for sorting
 * @details This function is a standard algorithm
 * (bubble sort) of sorting
 * that takes an array of integers and returns
 * the sorted array of integers
 * 
 * @param target The target array
 * @param n The number of elements
 * @param order The order of the sorted array
 * elements. If order is ascending pass 'a',
 * pass 'd' if order is descending
 * 
 * @return Sorted array
 */
int *sortArray(int target[], int n, char order) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (order == 'd' ? target[j] < target[j+1] : target[j] > target[j+1]) {
                temp = target[j];
                target[j] = target[j+1];
                target[j+1] = temp;
            }
        }
    }
    return target;
}

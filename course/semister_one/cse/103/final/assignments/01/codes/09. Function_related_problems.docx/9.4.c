/*!
 * @file 9.4.c
 * 
 * @brief This file contains the solution of problem 4 of the assignment User Defined Functions
 * @details Problem: Function to calculate the sum of n numbers coming from the console and stored in an array.
 * Difficulty level: ★
 * 
 * @note No issue remains in this code
 * 
 * @author Md Asaduzzaman Atik (https://asadatik.dev/)
 * @date Monday, 1 May, 2023
 * @version 1.0
 * @license MIT
 */

// includes
#include <stdio.h>

// function prototypes
/*!
 * @brief This function calculates the sum of the n numbers inside an array
 * 
 * @param nIntegers[] The array to calculate the sum of the n numbers inside the array
 * @param size the size of the array
 */
void sum(int nIntegers[], int size);

/*!
 * @brief The entry point of the program.
 *
 * This function is called when the program is started.
 *
 * @param argc The number of command-line arguments passed to the program.
 * @param argv An array of strings containing the command-line arguments.
 * @return 0 if the program executed successfully, non-zero otherwise.
 */
int main(int argc, char *argv[]) {
    // command-line parsing
    
    /// number of integers to calculate
    int n;
    /// Sum of n numbers inside main function
    int summation = 0;

    // Prompt the user for the value of n
    scanf("%d", &n);

    /// Integers to calculate
    int integers[n];

    for (size_t i = 0; i < n; ++i) {
        scanf("%d", &integers[i]);
    }

    /// call the @ref sum() function to calculate the sum
    sum(integers, n);

    for (size_t i = 0; i < n; i++){
        summation += integers[i];
    }

    // Printing from the main
    printf("Sum In Main: %d\n", summation);

    return 0;

} // main

// function declarations
/*!
 * @brief This function calculates the sum of the n numbers inside an array
 * 
 * @param nIntegers[] The array to calculate the sum of the n numbers inside the array
 * @param size the size of the array
 */
void sum(int nIntegers[], int size){

    /// Sum of n numbers
    int totalSum = 0;

    for (size_t i = 0; i < size; i++){
        totalSum += nIntegers[i];
    }

    // Printing from the definition
    printf("Sum In Function: %d\n", totalSum);

    return;

} // sum;
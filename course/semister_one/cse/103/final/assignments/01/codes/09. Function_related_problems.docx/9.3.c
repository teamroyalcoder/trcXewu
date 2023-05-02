/*!
 * @file 9.3.c
 * 
 * @brief This file contains the solution of problem 3 of the assignment User Defined Functions
 * @details Problem: Function to calculate the sum of n numbers coming from the console.
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
 * @brief Prints sum of n numbers coming from the console and returns the final sum of n numbers
 * 
 * @param numberOfElements The number of element to be summed
 * @return The sum of n numbers
 */
int sum_n_numbers(int numberOfElements);

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

    /// The number of element to be summed
    int n;

    // Prompt the user for the value of the number of elements
    scanf("%d", &n);

    /// Call the @ref sum_n_numbers() function assigned to self
    int totalSum = sum_n_numbers(n);

    // Printing inside main function
    printf("Sum In Main: %d\n", totalSum);

    return 0;

} // main

// function declarations
/*!
 * @brief Prints sum of n numbers coming from the console and returns the final sum of n numbers
 * 
 * @param numberOfElements The number of element to be summed
 * @return The sum of n numbers
 */
int sum_n_numbers(int numberOfElements) {

    /// The sum of n numbers
    int sum = 0;

    for (size_t i = 0; i < numberOfElements; i++) {
        int number;
        scanf("%d", &number);
        sum += number;
    }

    // printing inside the declaration
    printf("Sum In Function: %d\n", sum);
    
    return sum;

} // sum_n_numbers

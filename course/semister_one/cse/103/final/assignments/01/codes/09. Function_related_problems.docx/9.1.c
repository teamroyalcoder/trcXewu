/*!
 * @file 9.1.c
 * 
 * @brief This file contains the solution of problem 1 of the assignment User Defined Functions
 * @details Problem: Function to print a custom message (This is a function).
 * Difficulty level: ★
 * 
 * @note No issue remains in this code
 * 
 * @author Md Asaduzzaman Atik (https://asadatik.dev/)
 * @date Sunday, 30 April, 2023
 * @version 1.0
 * @license MIT
 */

/// includes
#include <stdio.h>

/// function prototypes
/*!
 * @brief Prints a predefined message
 */
void custom_message(void);

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
    /// command-line parsing

    custom_message();

    return 0;

} // main

/// function declarations
/*!
 * @brief Prints a predefined message
 */
void custom_message(void) {
    
    printf("This is a function\n");
    
    return;

} // custom_message

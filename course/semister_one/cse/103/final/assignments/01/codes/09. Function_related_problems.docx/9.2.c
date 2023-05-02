/*!
 * @file 9.2.c
 * 
 * @brief This file contains the solution of problem 2 of the assignment User Defined Functions
 * @details Problem: Function to print an input character value.
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
 * @brief Prints an input character value
 * 
 * @param c The character to print
 */
void print_char(char c);

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

    /*!
     * @brief  Store the character value coming from the command line
     */
    char input;

    /// Prompt the user for the character input
    scanf("%c", &input);

    /// Call the @ref print_char() function
    print_char(input);

    return 0;

} // main

/// function declarations
/*!
 * @brief Prints an input character value
 * 
 * @param c The character to print
 */
void print_char(char c) {

    printf("Value received from main: %c\n", c);

    return;

} // print_char

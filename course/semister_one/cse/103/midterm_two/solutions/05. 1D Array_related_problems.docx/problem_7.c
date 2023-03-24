/**
 * WAP that will take n alphabets into an array, and then count number of vowels in that
 * array.
 * 
 * Solve (No issue remains) - @mrasadatik
 * 
*/

#include <stdio.h>
#include <ctype.h>

int main() {

    int term, vowelsCount = 0;
    char vowels[5] = {'A', 'E', 'I', 'O', 'U'}, tempAlphabet;

    scanf("%d", &term);

    char alphabets[term];

    for(int i = 0; i < term; i++) {
        scanf(" %c", &alphabets[i]);
    }

    // Counting the number of vowels

    /*
    // Using Linear search (usually for short array)
    for(int i = 0; i < term; i++) {
        tempAlphabet = toupper(alphabets[i]);
        for(int j = 0; j < 5; j++) {
            if(tempAlphabet == alphabets[j]) {
                ++vowelsCount;
                break;
            }
        }
    }
    */

    // Using Hash Table
    int hashTable[26] = {0};

    // Building hash table for vowels (usually for long array)
    hashTable['A' - 'A'] = 1;
    hashTable['E' - 'A'] = 1;
    hashTable['I' - 'A'] = 1;
    hashTable['O' - 'A'] = 1;
    hashTable['U' - 'A'] = 1;

    for(int i = 0; i < term; i++) {
        tempAlphabet = toupper(alphabets[i]);
        if(hashTable[tempAlphabet - 'A'] == 1) {
            ++vowelsCount;
        }
    }

    printf("\n");

    printf("Count: %d\n", vowelsCount);

    return 0;

} //main

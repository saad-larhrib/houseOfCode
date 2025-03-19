#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function: swap
// --------------
// Swaps the values of two characters.
//
// Parameters:
// - a: A pointer to the first character.
// - b: A pointer to the second character.
//
// Returns:
// - This function does not return a value; it modifies the values in memory.
//
// Note:
// - Uses a temporary variable (`tmp`) to hold one value during the swap.
//
// Example Usage:
//   char x = 'A', y = 'B';
//   swap(&x, &y);  // x becomes 'B', y becomes 'A'
//


void swap(char *a,char *b){
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

// Function: my_strlen
// -------------------
// Calculates the length of a given string.
//
// Parameters:
// - str: A pointer to the input string (char array).
//
// Returns:
// - The length of the string (number of characters before the null terminator).
// - If the input string is NULL, an error message is printed to stderr,
//   and the function returns -1.
//
// Note:
// - The function iterates through the string character by character
//   until it encounters the null terminator ('\0').
//
// Example Usage:
//   int len = my_strlen("saad");  // len will be 4
//

int my_strlen(const char *str) {
    if(str == NULL){
        fprintf(stderr, "Error: NULL string provided.\n");
        return -1;
    }
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function: reverse_string
// ------------------------
// Reverses the characters of a given string in place.
//
// Parameters:
// - str: A pointer to the input string (char array) to be reversed.
//
// Returns:
// - This function does not return a value; it modifies the input string in place.
//
// Note:
// - The function first calculates the string length using `my_strlen`.
// - It then swaps characters from the start and end, moving toward the middle.
// - If the input string is empty or has only one character, no changes are made.
//
// Example Usage:
//   char str[] = "Hello";
//   reverse_string(str);  // str becomes "olleH"
//

void reverse_string(char *str) {
    int len = my_strlen(str);
    int i, j;
    char temp;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        swap(&str[i],&str[j]);
    }
}

// Function: reverse_words
// ------------------------
// Reverses the words in a given string while maintaining their original order.
//
// Parameters:
// - str: A pointer to the input string (char array) whose words should be reversed.
//
// Returns:
// - This function does not return a value; it modifies the input string in place.
//
// Algorithm:
// 1. First, the entire string is reversed using `reverse_string`.
// 2. Then, each word within the string is reversed individually to restore the correct word order.
//
// Example Usage:
//   char str[] = "Hello world";
//   reverse_words(str);  // str becomes "world Hello"
//

void reverse_words(char *str) {
    int len = my_strlen(str);
    reverse_string(str);

    int start = 0, end;
    for (end = 0; end <= len; end++) {
        if (str[end] == ' ' || str[end] == '\0') {
            int i = start, j = end - 1;
            while (i < j) {
                swap(&str[i],&str[j]);
                i++, j--;
            }
            start = end + 1;
        }
    }
}


int main()
{
    char test1 [] = "The dragons are coming";
    char test2 [] = "code love I";
    char test3 [] = "G";

    printf ( " Before : %s\n" , test1 );
    reverse_words ( test1 ) ;
    printf ( " After : %s\n\n" , test1 );

    printf ( " Before : %s\n" , test2 );
    reverse_words ( test2 ) ;
    printf ( " After : %s\n\n" , test2 );

    printf ( " Before : %s\n" , test3 );
    reverse_words ( test3 ) ;
    printf ( " After : %s\n\n" , test3 );
    return 0;
}

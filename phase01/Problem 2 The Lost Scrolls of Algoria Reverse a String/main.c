#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}



int main()
{
     char test1 [] = "edoc fo esuoH oT emocleW";
     char test2 [] = "uoy pleh lliw ti ;3 melborp ni noitcnuf siht esU";
     char test3 [] = "The dragons are coming";
     char test4 [] = "G";

     printf ( " Before : %s\n " , test1 );
     reverse_string ( test1 ) ;
     printf ( " After : %s\n\n " , test1 );

     printf ( " Before : %s\n " , test2 );
     reverse_string ( test2 ) ;
     printf ( " After : %s\n\n " , test2 );

     printf ( " Before : %s\n " , test3 );
     reverse_string ( test3 ) ;
     printf ( " After : % s\n\n " , test3 );

     printf ( " Before : %s\n " , test4 );
     reverse_string ( test4 );
     printf ( " After : %s\n\n " , test4 );
    return 0;
}

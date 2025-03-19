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

int main()
{
    const char * test1 = "IAE CLUB";
    const char * test2 = "House Of Code";
    const char * test3 = "G";
    const char * test4 = "";
    const char * test5 = NULL;

    printf ( " Test 1: %s\n " , test1 ) ;
    printf ( " Length : %d\n\n " , my_strlen ( test1 ) ) ;

    printf ( " Test 2: %s\n " , test2 ) ;
    printf ( " Length : %d\n\n" , my_strlen ( test2 ) ) ;

    printf ( " Test 3: %s\n " , test3 ) ;
    printf ( " Length : %d\n\n" , my_strlen ( test3 ) ) ;

    printf ( " Test 4: %s\n " , test4 ) ;
    printf ( " Length : %d\n\n" , my_strlen ( test4 ) ) ;

    printf ( " Test 5: %s\n " , test5 ) ;
    printf ( " Length : %d\n\n" , my_strlen ( test5 ) ) ;
    return 0;
}

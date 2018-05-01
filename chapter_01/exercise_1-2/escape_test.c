#include <stdio.h>

// Exercise 1-2 - Experiment to find out what happens when printf's argument contains \c, where
// c is some character not listed above.

int main()
{
    // \c won't compile because it's not a supported escape character
    //printf("Something\c");

    // Section 2.3 - Escape Characters - I've included the newline character \n in each example
    printf("Bell Character \a \n");
    printf("Backspace Character\b \n");
    printf("Form Feed \f \n");
    printf("Carriage Return\r \n");
    printf("\tHorizontal\tTab\n");
    printf("vertical\vtab\n");
    printf("Backslash Character \\ \n");
    printf("Question Mark: \? \n");
    printf("Single Quote \' \n");
    printf("Double Quote\" \n");
    printf("Octal Vertical:\013Tab\n");
    printf("Hexadecimal Vertical:\xbTab\n");
}

#include <stdio.h>

// Exercise 1-1 Run the "hello, world" program on your system.
//  Experiment with leaving out parts of the program, to see what error messages you get.

int main()
{
    // Regular "hello, world" program
    printf("hello, world\n");

    /*
     * "Forgetting" the semi-colon
     *
     * Error:
     *
     * hello.c: In function ‘main’:
     * hello.c:13:1: error: expected ‘;’ before ‘}’ token
     *  }
     *  ^
     */
    //printf("hello, world\n")

    /*
     * "Forgetting" the terminating double quote
     *
     * Warning:
     *
     * hello.c: In function ‘main’:
     * hello.c:24:12: warning: missing terminating " character
     *      printf("hello, world\n);
     *             ^
     *
     * Error:
     *
     * hello.c:24:12: error: missing terminating " character
     * printf("hello, world\n);
     *        ^~~~~~~~~~~~~~~~~
     *
     * hello.c:25:1: error: expected expression before ‘}’ token
     * }
     * ^
     * hello.c:25:1: error: expected ‘;’ before ‘}’ token
     */
    //printf("hello, world\n);
}
#include <stdio.h>

// Exercise 1-4 - Write a program to print the corresponding Celsius to Farhrenheit table.

/*print Celsius-Fahrenheit Table
    for celsius = 0, 20, ..., 300 */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0.0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    printf("%s %s\n", "Celsius", "Farenheit");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0 * celsius) + 32.0;
        printf("%6.1f %7.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}

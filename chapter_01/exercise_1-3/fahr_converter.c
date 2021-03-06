#include <stdio.h>

// Exercise 1-3 - Modify the temperature conversion program to print a heading
//   above the table

/*print Fahrenheit-Celsius Table
    for fahr = 0, 20, ..., 300 */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    printf("%s %s\n", "Farenheit", "Celsius");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%5.0f %9.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

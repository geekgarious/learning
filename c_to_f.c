#include <stdio.h>
/* print Celcius-Fahrenheit table for = 0, 20, 300 */
main( )
{
float fahr, Celsius;
int lower, upper, step;
lower = 0; /* lower limit of temperature table */
upper = 300; /* upper limit */
step = 20;
Celsius = lower;
printf("Celsius  to Fahrenheit");
while (Celsius <= upper)
{
fahr = Celsius * (9.0/5.0) + 32;
printf("%3.0f %6.1f \n", Celsius, fahr);
Celsius = Celsius + step;
}
}

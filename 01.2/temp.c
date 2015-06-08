#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */
main(){
 float fahr, celsius;
 float lower, upper, step;

 lower = -20;      /* lower limit of temperatuire scale */
 upper = 100;    /* upper limit */
 step = 10;      /* step size */

 celsius = lower;
 while (celsius <= upper) {
     celsius = (5.0/9.0) * (fahr-32.0);
     printf("%3.0f %6.1f\n", fahr, celsius);
     celsius = celsius + step;
 }
}
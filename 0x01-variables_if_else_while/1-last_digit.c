#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* imported the librabries I need to run the program */

/**
*i main - program function starts here
*
* Return: 0 (when no error)
*/
int main(void)
{
int n;
int lastdigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* conditional statements starts here */

int lastDigit = n % 10;

printf("Last digit of %d is %d\n", n, lastDigit);

if (lastDigit > 5)
{
printf("lastdigit of %d and is greater than 5\n", n, lastdigit);
}
else if (lastDigit == 0)
{
printf("lastdigit of %d and is %d 0\n", n, lastdigit);
}
else if (lastDigit < 6)
{
printf("lastdigit of %d and is %d less than 6 and not 0\n", n, lastdigit);
return (0);
}

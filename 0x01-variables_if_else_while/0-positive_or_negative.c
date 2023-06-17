#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Prints numbers from 0 to 9.
*
*Return: Always 0 (indicating successful execution)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes here */
if (n > 0)
{
rintf("%d is positive\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
if (n == 0)
{
return (0);
}


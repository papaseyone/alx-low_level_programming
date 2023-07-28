#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function initializes an integer array 'a', sets the value of its third
 * element to 1024, and then prints the modified value after setting its third
 * element to 98 using pointer arithmetic.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
* Write your line of code here...
* Remember:
* - You are not allowed to use 'a'
* - You are not allowed to modify 'p'
* - Only one statement allowed
* - You are not allowed to code anything else than this line of code
*/
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}

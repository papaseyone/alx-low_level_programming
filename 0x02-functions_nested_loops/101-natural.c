#include <stdio.h>

/*
* File: 101-natural.c
* Auth: charles Ntim
*/

int main(void)
{
int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}

printf("%d\n", sum);

return (0);
}


#include <stdio.h>

/**
* program that displays an infinite loop as long as i<10
*/

int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 0;
while (i < 10)
{
putchar(i);
}
printf("Infinite loop avoided! \\o/\n");
return (0);
}

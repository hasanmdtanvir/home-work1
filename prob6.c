#include <stdio.h>
int main()
{
    int num, i, fact = 1;
    scanf("%d", &num);
    for (i = num; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("Factorial of %d = %d", num, fact);
}
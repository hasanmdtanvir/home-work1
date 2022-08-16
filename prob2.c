#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && a && b > c)
    {
        printf("a and b are equal and greater than c, Enter three different numbers: ");
    }
    else if (b == c && b && c > a)
    {
        printf("b and c are equal and greater than a, Enter three different numbers");
    }
    else if (a == c && a && c > b)
    {
        printf("a and c are equal and greater than b, Enter three different numbers");
    }
    else if (a == b && a == c && b == c)
    {
        printf("Numbers are equal, Enter three different numbers");
    }
    else
    {
        if (a > b && a > c)
        {
            printf("Largest number is a = %d", a);
        }
        else if (b > a && b > c)
        {
            printf("Largest number is b = %d", b);
        }
        else if (c > b && c > a)
        {
            printf("Largest number is c = %d", c);
        }
    }
}
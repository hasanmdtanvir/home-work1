#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num > 0)
    {
        printf("positive number");
    }
    else if (num == 0)
    {
        printf("neither positive nor negative");
    }
    else
    {
        printf("negative number");
    }
}
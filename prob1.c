#include <stdio.h>
int main()
{
    int a = 5, b = 10, temp;
    printf("Before swapping:\n a = %d and b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping:\n a = %d and b = %d", a, b);
}
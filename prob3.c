#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, discriminant, root1, root2;
    printf("Enter a b and c : ");
    scanf("%lf%lf%lf", &a, &b, &c);
    discriminant = sqrt(b * b - 4 * a * c);
    root1 = (-b + discriminant) / (2 * a);
    root2 = (-b - discriminant) / (2 * a);
    printf("root1 = %lf\n", root1);
    printf("root2 = %lf\n", root2);
}
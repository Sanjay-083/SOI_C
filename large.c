#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter the three numbers");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
        printf("A is greater");
    else if (b > a && b > c)
        printf("B is greater");
    else
        printf("C is greater");
}

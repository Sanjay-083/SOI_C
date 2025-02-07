#include <stdio.h>
void main()
{
    int n, res = 0, rem, count = 0;
    printf("Enter the number to be reversed:");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        res = res * 10 + rem;
        count++;
        n = n / 10;
    }
    printf("the rev number is %d\n", res);
    printf("the tot number is %d\n", count);
}
#include <stdio.h>
#include <math.h>
void main()
{
    int n, pow;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter pow: ");
    scanf("%d", &pow);

    int res = 1;
    while (pow > 0)
    {
        res = res * n;
        pow--;
    }
    printf("The Answer is :%d", res);
}

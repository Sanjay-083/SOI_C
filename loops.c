#include <stdio.h>
// display roll no using aloops
void main()
{
    int r, sum = 0;
    for (r = 1; r <= 10; r++)
    {

        sum += r;
        printf("The roll no is %d\n", sum);
    }
}

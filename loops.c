#include <stdio.h>
// display roll no using aloops
int main()
{
    int r, sum = 0;
    for (r = 1; r <= 10; r++)
    {
        // sum += r;
        // printf("The roll no is %d\n", sum);

        if (r % 2 == 0)
        {
            printf("the number is:%d\n", r);
        }
    }
    return 0;
}

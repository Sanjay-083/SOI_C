#include <stdio.h>
/*void main()
{ // squre pattern

* * * *
* * * *
* * * *
* * * *
    int i, j, n = 4;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
*/
/*void main()
{   1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
int i, j, n = 4;
for (i = 1; i <= n; i++)
{
    for (j = 1; j <= n; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
}
}*/
/* void main()
{
*
* *
* * *
* * * *
    int i, j, n = 4;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
*/
/*void main()
{
1
0 1
1 0 1
0 1 0 1
    int i, j, n = 4,intialval=1;
    for (i = 1; i <= n; i++)//rows
    {
        intialval = i % 2 == 0 ? 0 : 1;//even or odd
        for (j = 1; j <= i; j++)
        {
            printf("%d ", intialval);
            intialval =! intialval;
        }
        printf("\n");
    }
}
*/
/*void main()
{1
2 3
4 5 6
7 8 9 10
    int i, j, n = 4, intialval = 1;
    for (i = 1; i <= n; i++) // rows
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", intialval++);
        }
        printf("\n");
    }
}
*/
/*void main()
{
+ + + +
+ + +
+ +
+
    int i, j, n = 4, intialval = 1;
    for (i = 1; i <= n; i++) // rows
    {
        for (j = 1; j <= n-(i-1); j++)
        {
            printf("+ ");
        }
        printf("\n");
    }
}
*/
/*void main()
{
 *
 *  *
 *  *  *
 *  *  *  *
 *  *  *
 *  *
 *
    int i, j, n = 4;
    for (i = 1; i <= n*2-1; i++) // rows
    {int rowchange = i <= n ? i : n*2-i;
        for (j = 1; j <= rowchange; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}*/
/*void main()
{---*
--* *
-* * *
* * * *
    int i, j, n = 4;
    for (i = 1; i <= n; i++) // rows
    {
        for (int space = 1; space <= n - i; space++)
        {
            printf("-");
        }

        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}*/
/*void main()
{ * * * * 
    * * * 
      * * 
        * 
    int i, j, n = 4;
    for (i = 1; i <= n; i++) // rows
    {
        for (int space = 1; space <= i; space++)
        {
            printf("  "); 
        }
        for (j = 1; j <= n - i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
*/
void main()
{     * 
    * * *
  * * * * *
* * * * * * *
    int i, j, n = 4;
    for (i = 1; i <= n; i++) // rows
    {
        for (int space = 1; space <= n-i; space++)
        {
            printf("  ");
        }
        for (j = 1; j <= (i*2)-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

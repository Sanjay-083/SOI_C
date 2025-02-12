#include <stdio.h>
// Function prototype with argument but no return type
void sum(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum(n); 
    return 0;
}
void sum(int n)
{
    int total = 0;
    for (int i = 0; i <= n; i++)
    {
        total += i;
    }
    printf("The sum of numbers is: %d\n", total);
}

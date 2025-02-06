#include <stdio.h>
void main()
{
    int in1, in2, res, choice;
    printf("Enter the two inputs");
    scanf("%d%d", &in1, &in2);
    printf("Enter your choice");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        res = in1 + in2;
        printf("The Sum is %d", res);
        break;
    case 2:
        res = in1 - in2;
        printf("The Sub is %d", res);
        break;
    case 3:
        res = in1 * in2;
        printf("The Mul is %d", res);
        break;
    case 4:
        res = in1 / in2;
        printf("The div is %d", res);
        break;
    default:
        printf("Enter a integer");
        break;
    }
}
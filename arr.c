#include <stdio.h>
void main()
{

    int size;
    printf("Enter the size::");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i <= size; i++)
    {
        printf("enter the arr %d::\n", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= size; i++)
    {
        printf("enter the arr ::%d\n", arr[i]);
    }
}
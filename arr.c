#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];
    // Input elements for the array
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element arr %d: ", i);
        scanf("%d", &arr[i]);
    }
    // Display elements of the array
    printf("The elements in the array are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    // Calculate the sum of the elements in the array
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}

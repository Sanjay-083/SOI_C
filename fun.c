#include <stdio.h>
/*// without arg and return value
void add()
{
    int a = 10, b = 20; // defintion
    int c = a + b;
    printf("%d\n", c);
} // declaration
void sub()
{
    int a = 10, b = 20; // defintion
    int c = a - b;
    printf("%d\n", c);
} // declaration
int main()
{
    add(); // function call
    sub();
    return 0;
}*/

// function defn with parameter and no return type
/*void add(int m, int n)
{
    int c = m + n;
    printf("%d", c);
}
int main()
{
    int a = 12, b = 13;
    add(a, b); // func call
    return 0;
}
*/

// With arg and return type
/*int add(int m, int n)
{
    int c = m + n;
    printf("%d",c);
    return c;
}
int main()
{
    int a = 10, b = 20;
    int c = add(a, b);
    return 0;
}*/
/// Function declaration with return type
int add();

int main()
{
    // Call the add function and store the result
    int result = add();
    printf("The sum is: %d\n", result);
    return 0;
}

// Function definition that returns the sum of a and b
int add()
{
    int a = 23, b = 43; // Declare variables
    int c = a + b;      // Calculate sum

    // Return the result
    return c;
}
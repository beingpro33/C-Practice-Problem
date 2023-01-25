#include <stdio.h>
int main()
{
    int x = 400, y, z;
    if (x >= 500)
        y = 400;
    z = 300;
    printf("%d %d %d \n", x, y, z);
    return 0;
}

/* This C program will output "400 Garbage 300" and exit immediately after execution.

The if statement's condition is "x >= 500", which is false because the value of x is 400. Therefore, the program skips the if statement's block and the value of y is not assigned. Since y is not initialized, it will contain an undefined value.

Then the program executes the line z = 300, which assigns the value 300 to z.

Finally, the program prints the values of x, y, and z using the printf statement, where y will be undefined value and the output will be "400 Garbage 300".

It's important to note that in C, variables that are not explicitly initialized will contain an undefined value.

In summary, the program will output "400 Garbage 300" because the if statement's condition is false and y is not initialized. */
/* Question no. : 3.5 */

#include <stdio.h>

int main()
{
  int x = 10, y = 20, z = 5;

  int i = x < y < z;
  printf("%d", i);
}

/* This C program will output "1" and exit immediately after execution.

The statement int i = x < y < z; uses the less-than operator in a chain of comparison. In C, the less-than operator has lower precedence than the assignment operator, so the comparison is evaluated from left to right, first x < y is evaluated which is true, then the result of x<y is used as the left operand in the comparison x<y<z.

The result of the comparison x<y<z is a boolean value, in this case true which is represented as 1 in C.

Finally, the program prints the value of i using the printf statement, where i is assigned the value of 1.

It's important to note that the x < y < z is not equivalent to x < y && y < z

In summary, the program will output "1" which is the result of the comparison x < y < z in this program. */
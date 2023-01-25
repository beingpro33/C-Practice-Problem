/* Question no. : 3.1 */

#include <stdio.h>

int main()
{
  static int a[20];
  int i = 0;
  a[i] = i++;
  printf("\n%d %d %d", a[0], a[1], i);
}

/* Your Options are :
1. 0  0  0
2) 0  0  1
3) 1  0  1
4) Error */

/* This C program will output "0 0 1" and exit immediately after execution.

The statement a[i] = i++; is using the post-increment operator which increments the value of the operand by 1 after the expression is evaluated.

The program defines a static array a of size 20 and an integer i with an initial value of 0.

The statement will be evaluated as follows:

The value of i is 0, which is assigned to the element of array a at index i
The value of i is incremented by 1, making it 1.
Finally, the program prints the value of a[0], a[1], and i using the printf statement. where a[0] is assigned the original value of i which is 0, a[1] is uninitialized and contains an undefined value, and i is 1.

It's important to note that the statement a[i] = i++; is not useful, as it doesn't change the value of i and also assigns the same value to the same index of an array.

In summary, the program will output "0 0 1" which are the values of a[0], a[1] and i respectively. */
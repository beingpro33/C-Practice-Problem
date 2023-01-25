/* Question no. : 3.2 */

#include <stdio.h>

int main()
{
  int i = 3;
  i = i++;
  printf("%d", i);
  // printf("%d",i);
}

/* This C program will output "3" and exit immediately after execution.

The statement i = i++; is using the post-increment operator which increments the value of the operand by 1 after the expression is evaluated. The value of the post-increment operator is the original value of the operand before it was incremented. So the statement will be evaluated as follows:

The value of i is 3, which is assigned to i
The value of i is incremented by 1, making it 4.
Finally, the program prints the value of i using the printf statement, where i is assigned the original value of i which is 3.

It's important to note that this statement is not useful, as it doesn't change the value of i.

In summary, the program will output "3" which is the value of i before it was incremented. */

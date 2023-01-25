/* Question no. : 2.10 */

#include <stdio.h>

int main()
{
  int a = 10, b;

  a >= 5 ? b = 100 : (b = 200);
  printf("\n%d", b);
}

/* This C program will output "100" and exit immediately after execution.

The statement a >= 5 ? b = 100 : (b = 200); is a ternary operator, also known as the conditional operator. It is a shorthand way of writing an if-else statement. The general syntax is:


condition ? value_if_true : value_if_false;
In this program, the condition is a >= 5, which is true because the value of a is 10. So, the program assigns the value 100 to b.

Finally, the program prints the value of b using the printf statement, where b is assigned the value of 100.

In summary, the program will output "100" as the value of b when the condition a >= 5 is true. */
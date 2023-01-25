/* Question no. : 2.11 */

#include <stdio.h>

int main()
{
  char str[] = "Hello";
  int a = 5;
  printf(a > 1 ? "World" : "%s", str);
}

/* This C program will output "World" and exit immediately after execution.

The statement printf(a > 1 ? "World" : "%s", str); is using the ternary operator. The first argument is a conditional expression that evaluates the condition a > 1, which is true because the value of a is 5. So, the program will print "World".

Since "World" is a string literal, it does not require a format specifier. The second argument "%s" and str are not used in this case.

In summary, the program will output "World" as the ternary operator condition is true and the second argument "%s" and str are not used. */
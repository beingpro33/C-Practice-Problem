#include <stdio.h>

int main()
{
  int a;
  a = (5, 4);
  printf("%d ", a);
}

/* This C program will output "4" and exit immediately after execution.

The program defines an integer variable a and assigns the value of expression (5,4) to it. The expression (5,4) uses the comma operator to separate the expressions 5 and 4. The expressions are evaluated from left to right, the left expression 5 is ignored and the right expression 4 is returned.

Finally, the program prints the value of a using the printf statement, where a is assigned the value of 4.

It's important to note that the comma operator can be used to evaluate multiple expressions in a single statement, but the value of the entire expression is the value of the rightmost expression.

In summary, the program will output "4" which is the value of the rightmost expression in the comma operator expression (5,4). */
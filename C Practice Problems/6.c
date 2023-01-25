#include <stdio.h>

int main()
{
  int x = 10;
  {
    int x = 20;
    printf("%d\n", x);
  }
  printf("%d", x);
}

/* This C program will output "20 10" and exit immediately after execution.

The program defines an integer variable x with an initial value of 10, and then defines another integer variable x within a block. The inner variable x is initialized with a value of 20.

The program then uses the printf statement within the inner block to print the value of inner variable x, which is 20.

The program then exits the inner block and uses another printf statement to print the value of the outer variable x, which is still 10.

It's important to note that variables defined within a block are only visible within that block, and are said to have block scope. This means that the inner variable x is not visible outside the inner block and the outer variable x is not affected by the inner variable x.

In summary, the program will output "20 10" which are the values of inner and outer variables x respectively, because the inner variable x is only visible within the inner block and the outer variable x is not affected by the inner variable x. */

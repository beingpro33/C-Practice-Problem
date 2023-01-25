#include <stdio.h>

int main()
{
  int i = 2;
  printf("\n%d %d", ++i, ++i);
  // printf("\n%d %d",i++, ++i);

  /* int i = 2;
  i = (++i,++i);
  printf("%d",i); */

  // printf("\n%d %d",i,++i);  /* 3,3 */
  // printf("\n%d %d",i,4);  /* 2,4 */
  // printf("\n%d %d",4,4);

  // printf("\n%d %d",++i,++i);
  // printf("\n%d %d",i++,++i);
}

/*Comma operator is also working in this program. The comma operator (,) in C is used to separate multiple expressions in the same statement. The expressions are evaluated from left to right and the value of the rightmost expression is returned. In this case, the program uses the comma operator to separate the expressions ++i and ++i in the printf statement. */

/* The program defines an integer variable i with an initial value of 2. Then the program uses the printf statement to print the values of ++i and ++i.

The pre-increment operator ++i increments the value of i before it is returned.

The statement printf("\n%d %d",++i, ++i); will be evaluated as follows:

The value of i is incremented by 1, making it 3.
The value of i is incremented by 1 again, making it 4.
The value of i is 4 for both printf arguments, so the program prints "4 4"
It's important to note that modifying a variable more than once in the same statement without a clear sequence of operation can lead to confusion, and it's best practice to split them into multiple statements.

In summary, The program will output "4 4" which are the values after incrementing i twice by pre-increment operator, it's due to the unspecified order of evaluation of the arguments in the printf statement. */
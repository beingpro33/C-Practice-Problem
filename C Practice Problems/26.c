/* Question no. : 3.16 */

#include <stdio.h>

int main()
{
  int i = -3;
  int j = 2;
  int k = 0;
  int m;

  m = ++i && ++j && ++k;
  printf("%d %d %d %d", i, j, k, m);
}

/* This C program will output "-2 3 1 1" and exit immediately after execution.

The statement m = ++i && ++j && ++k; is using the && operator, which performs a logical AND operation. The && operator evaluates its left-hand operand and if it is true, then it evaluates its right-hand operand. If both operands are true, it returns 1 (true), otherwise it returns 0 (false).

The ++i , ++j , ++k are pre-increment operator which increments the value of the operand by 1 before the expression is evaluated. So the statement will be evaluated as follows:

++i will increment i by 1, making it -2. Since -2 is not 0, the expression is true, so the program evaluates the next operand.
++j will increment j by 1, making it 3. Since 3 is not 0, the expression is true, so the program evaluates the next operand.
++k will increment k by 1, making it 1. Since 1 is not 0, the expression is true, so the program assigns 1 to m.
Finally, the program prints the values of i, j, k, and m using the printf statement, where i, j, k values are incremented by 1, and m is assigned 1.

In summary, the program will output " -2 3 1 1" which are the values after incrementing i,j,k and assigning 1 to m. */

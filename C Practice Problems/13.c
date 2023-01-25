#include <stdio.h>

int main()
{
  /* int a;
  a = printf("AK"), 5, 3;
  printf("%d", a); */

  // int a = 8, b;
  // b = (a++,++a);
  // // b = a++, ++a;
  // printf("%d %d ",b,a);

  int var;
  int num;
  num = (var = 15, var + 35);
  printf("%d", num);
}

/*
  int a;
  a = printf("AK"), 5, 3;
  printf("%d", a);

  ANS:
  This C program will output "AK2" and the value of the variable a will be the number of characters written by the printf statement, in this case, 2, and exit immediately after execution.

The program defines an integer variable a and assigns the value of the expression printf("AK"), 2, 3 to it. The expression uses the comma operator to separate the expressions. The expressions are evaluated from left to right, the leftmost expression printf("AK") is a function call to the printf() function which writes the string "AK" to the standard output and returns the number of characters written, which is 2.

The next two expressions 2 and 3 are ignored, and the value of the leftmost expression is returned, which is 2 and assigned to the variable a.

Finally, the program prints the value of a using the printf statement, where a is assigned the value of 2.

In summary, the program will output "AK2" and the value of the variable a will be the number of characters written by the printf statement, which is 2.*/

/*
  int var;
  int num;
  num = (var = 15, var + 35);
  printf("%d", num);

  ANS:This C program will output "50" and exit immediately after execution.

The program defines two integer variables var and num. The statement num = (var = 15, var + 35) uses the comma operator to separate the expressions var = 15 and var + 35. The expressions are evaluated from left to right:

the left expression var = 15 assigns the value 15 to var
the right expression var + 35 evaluates to 15 + 35 which is 50
Finally, the program assigns the value of the expression var + 35 to num and uses the printf statement to print the value of num which is 50.

It's important to note that the comma operator can be used to evaluate multiple expressions in a single statement, and the value of the entire expression is the value of the rightmost expression.

In summary, the program will output "50" which is the value of the rightmost expression in the comma operator expression (var = 15, var + 35) where var is assigned with 15 and 35 is added to that value.
  */
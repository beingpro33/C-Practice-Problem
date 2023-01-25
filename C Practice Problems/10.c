#include <stdio.h>

int main()
{
  int i = 4;
  switch (i)
  {
  default:
    printf("\nHuman");
  case 1:
    printf("\nCat");
  case 2:
    printf("\nElephant");
  case 3:
    printf("\nRabbit");
  }
}

/* This C program will output "Human Cat Elephant Rabbit" and exit immediately after execution.

The program defines an integer variable i with an initial value of 4. Then it uses a switch statement to test the value of i against the different case labels.

Since the value of i is 4, none of the case labels (1, 2, 3) match the value of i, so the program executes the code following the default label. The default label is used to specify the code that will be executed if none of the case labels match the value of the expression in the switch statement.

The default label has a printf statement that prints "Human"

The program then continues to execute the code following the default label, including the code following the case labels 1, 2 and 3, which are the printf statements that print "Elephant", "Cat" and "Rabbit".

It's important to note that when a break statement is not used at the end of a case, the program will continue to execute the code following the next case until it encounters a break statement or the end of the switch statement.

In summary, the program will output "Human Cat Elephant Rabbit" because the value of i is 4, and the default case will be executed and the program will continue to execute the code following the default case and the case 1,2,3. */
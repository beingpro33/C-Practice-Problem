#include <stdio.h>
int main ( )
 {
       float a = 4.2, b = 4.22;
       if (a = b)
             printf ("equal\n");
       else
             printf ("Not equal\n");
       return 0;
}

/* This C program will output "equal" and exit immediately after execution.

The if statement's condition is "a = b", which assigns the value of b to a and returns the value of a (which is 4.22) as the result of the expression. Since the value of a is not equal to 0, the if statement will evaluate to true and the program will execute the first printf statement, printing "equal".

It's important to note that the comparison should be with double equals == instead of single equal = sign. The program should be like

if (a == b)
Also, the program is not checking the equality of two float variables, it's only assigning the value of b to a, which is not the intended behavior.

In summary, the program will output "equal" but it's not checking the equality of two float variables correctly. */
// point out the error

/* #include<stdio.h>

int main()
{
  int i = 1;
  while()
  {
    printf("%d\n",i++);
    if(i>10)
    break;
  }
} */

/*
The error in the program is that the while loop does not have a condition specified. The correct syntax for the while loop is while(condition), where condition is an expression that evaluates to either true or false.

The condition is missing in this program and the while loop does not know when to stop executing. This will result in an infinite loop and the program will not exit.

To fix this error, you need to add a condition in the while loop. For example, you could add the condition while(i <= 10) to make the loop stop executing when the value of i is greater than 10.

The correct version of the code should be like this:


#include<stdio.h>
int main()
{
  int i = 1;
  while(i <= 10)
  {
    printf("%d\n",i++);
  }
}
In summary, the error in the program is that the while loop does not have a condition specified and this will result in an infinite loop. */
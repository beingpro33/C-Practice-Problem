#include <stdio.h>

int main()
{
  int i = 4;
  switch (i)
  {
    printf("hello");
  case 1:
    printf("India");
    break;
  case 2:
    printf("Bihar");
    break;
  }
}

/* This C program will not compile because of an error in the switch statement.

In the switch statement, there is a printf statement before the first case label. The printf statement is not associated with any case label and so it will be executed regardless of the value of the switch expression. This is not allowed in C and will result in a compile error.

The correct version of the code should be like this:


#include<stdio.h>

int main()
{
  int i = 1;
  switch(i)
  {
    case 1:
    printf("India");
    break;
    case 2:
    printf("Bihar");
    break;
  }
}
In summary, the program will not compile because of an error in the switch statement, where the printf statement is not associated with any case label, it should be inside the case label only. */
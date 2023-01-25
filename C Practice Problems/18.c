/* Question 2.6 */

#include<stdio.h>

int main()
{
  int i = 6;
  switch (i)
  {
  case 1:
    printf("\nPLEASE");
    break;
  case 1*2+4:
    printf("SUBSCRIBE");
  }
}

/* No Error, Constant expression like 1*2+4 are acceptable in cases of a switch */
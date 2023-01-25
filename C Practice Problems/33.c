#include <stdio.h>
int main()
{
  short i;
  for (i = 1; i >= 0; i++)
    printf("%d\n", i);
}

/* The program uses a short integer variable "i" and assigns it the value of 1. The for loop then continues to execute as long as "i" is greater than or equal to 0, incrementing the value of "i" by 1 each time. Since a short integer can hold values between -32768 and 32767, the maximum value that "i" can hold is 32767. When "i" reaches 32767, the for loop condition is still true (i >= 0) and the loop continues to execute. On the next iteration, the value of "i" will overflow and become -32768.  When the value of i becomes -32768, the condition i >= 0 becomes false and the loop terminates. */
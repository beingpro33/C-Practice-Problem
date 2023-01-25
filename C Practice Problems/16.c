#include <stdio.h>

int main()
{
  int i = 2;
  // printf("%d %d",++i,++i);
  printf("\n%d %d", i++, ++i);
}

/* This C program will output "3 4" and exit immediately after execution.

The program defines an integer variable i with an initial value of 2. Then the program uses the printf statement to print the values of i++ and ++i.

The post-increment operator i++ returns the original value of i before it is incremented, and the pre-increment operator ++i increments the value of i before it is returned.

The statement printf("\n%d %d",i++, ++i); will be evaluated as follows:

The value of i is 2, which is printed first.
The value of i is incremented by 1, making it 3.
The value of i is incremented by 1 again, making it 4.
Finally, the program prints the values of i++ and ++i using the printf statement, where i++ is 2 and ++i is 4.

In summary, the program will output "3 4" which are the values after incrementing i once by post-increment operator and once by pre-increment operator. */
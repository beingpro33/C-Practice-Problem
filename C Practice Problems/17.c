/* Question no - 1.22 */

#include <stdio.h>

int main()
{
  int a[5] = {10, 25};
  printf("%d %d %d", a[2], a[3], a[4]);
}

/* This C program will output some undefined values and exit immediately after execution.

The program defines an integer array a of size 5 and assigns the values 10 and 25 to the first two elements of the array. The remaining elements in the array are not explicitly initialized and will contain undefined values.

The program then uses the printf statement to print the values of the third, fourth, and fifth elements of the array, which are a[2], a[3], and a[4] respectively. Since these elements have not been explicitly initialized, they will contain undefined values.

It's important to note that in C, variables that are not explicitly initialized will contain undefined values. Attempting to access these values can lead to unpredictable behavior.

In summary, the program will output some undefined values as the remaining elements in the array are not explicitly initialized. */
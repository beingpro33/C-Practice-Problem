#include <stdio.h>

int main()
{
  int a = 5, b = 10, c = 12;

  printf("%d\n", ++a);
  printf("%d\n", b++);
  printf("%d\n", a > b && a < b);
  printf("%d\n", b + c);
}
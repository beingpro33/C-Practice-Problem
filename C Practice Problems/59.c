#include <stdio.h>
void printSize(int arr[])
{
  printf("%lu", sizeof(arr));
}

int main()
{
  int a[10];
  printSize(a);
  return 0;
}

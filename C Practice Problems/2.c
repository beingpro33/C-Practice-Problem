#include<stdio.h>

int main()
{
  int i = 3;
  int j = i++;
  printf("%d ",j);
  i = i++;
  printf("%d ",i);
  i = i++;
  printf("%d ",i);
  
}
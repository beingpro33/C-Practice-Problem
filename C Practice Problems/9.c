#include<stdio.h>
void fun1();
void fun2();

int main()
{
  extern int a;
  fun1();
  printf("%d ",a);
  fun2();
}

void fun1()
{
  int a = 2;
  printf("%d ",a);
}

void fun2()
{
  printf("Hello from fun2");
}

int a = 10;
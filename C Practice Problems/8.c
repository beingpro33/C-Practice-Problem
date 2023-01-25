#include <stdio.h>

int main()
{
  extern int a;
  a = 10;
  printf("%d", sizeof(a));
}

/* The above code defines a variable 'a' as extern, which means that it is declared in another file and is being used in the current file. The code then assigns a value of 10 to 'a' and uses the sizeof operator to print the size of 'a' in bytes. However, this program will not compile successfully because 'a' is not defined in the same file and the program is trying to access the variable 'a' which is not defined. The error message is "undefined reference to `a'" */
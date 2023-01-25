#include <stdio.h>
    int main()
    {
      int k = 0, L = 0;
      while (k < 2)
     {
        Read: k++;
        while (L < 3)
        {
           printf("Hello");
           goto Read;
        }
     }
   }

  //  "Interview Mania" is printed infinite time
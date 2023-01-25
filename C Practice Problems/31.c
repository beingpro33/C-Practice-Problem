#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 1;
    for (b = 0; b < 10; b++)
    {
        a++;
        c++;
        continue;
    }
    printf("%d, %d", a, c);
}

/* This C program will output "10, 11". Inside the for loop, the variable "a" is incremented by 1 and the variable "c" is incremented by 1 in each iteration. The continue statement is used, which causes the program to skip any code below it and return to the top of the loop. The loop runs 10 times, so "a" will be incremented 10 times and "c" will be incremented 10 times. Therefore, at the end of the program, the value of "a" will be 10 and the value of "c" will be 11. */
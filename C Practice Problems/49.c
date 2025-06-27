#include <stdio.h>
void update(int a)
{
  a = a + 10;
}
int main()
{
  int x = 5;
  update(x);
  printf("%d", x);
  return 0;
}
/* ❓ What will be the output?
A. 5
B. 15
C. Error
D. Garbage

✅ Correct Answer: A. 5

📘 Detailed Explanation:
In C, all function arguments are passed by value.

This means the function update() gets a copy of x, not the original.

Inside the function, a becomes 5, adds 10, becomes 15, but this does not affect x in main().

🧠 Concepts to Learn:

Call by value: Function receives a copy of the data, not the original.

To modify the original variable, you must use pointers (pass the address).

✅ Output: 5 */
#include <stdio.h>
int x = 10;

int main()
{
  int x = 5;
  printf("%d", x);
  return 0;
}
/* ❓ What will be the output?
A. 10
B. 5
C. Compilation error
D. Undefined

✅ Correct Answer: B. 5

📘 Detailed Explanation:
There are two variables named x:

One global (x = 10)

One local inside main() (x = 5)

In C, local variables shadow global ones.

So the printf uses the local value.

🧠 Concepts to Learn:

Variable scope: Local > Global in visibility within a function.

Avoid naming conflicts to improve code clarity.

✅ Output: 5 */
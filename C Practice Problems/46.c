#include <stdio.h>
int mystery(int n)
{
  if (n <= 0)
    return 0;
  return n + mystery(n - 2);
}
int main()
{
  printf("%d", mystery(5));
  return 0;
}
/* ❓ What will be the output?
A. 5
B. 9
C. 15
D. 6

✅ Correct Answer: B

📘 Detailed Explanation:
This program uses recursion, a function calling itself.

Let’s trace the steps:

c
Copy
Edit
mystery(5) = 5 + mystery(3)
mystery(3) = 3 + mystery(1)
mystery(1) = 1 + mystery(-1)
mystery(-1) = 0  // base case
So:

Copy
Edit
mystery(1) = 1 + 0 = 1
mystery(3) = 3 + 1 = 4
mystery(5) = 5 + 4 = 9
🧠 Concepts used:

Recursion

Base condition in recursion (n <= 0)

Function return values

Call stack (functions wait for others to finish)

✅ Output: 9 */
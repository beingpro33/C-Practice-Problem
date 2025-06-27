#include <stdio.h>
int main()
{
  int x = (1, 2, 3);
  printf("%d", x);
  return 0;
}

/* ❓ What will be the output?
A. 1
B. 2
C. 3
D. Compilation error

🟩 Correct Answer: C

📘 Detailed Explanation:
This line:

c
Copy
Edit
int x = (1, 2, 3);
may look strange. Let’s break it down:

The expression (1, 2, 3) uses the comma operator.

In C, the comma operator evaluates each expression from left to right, but it only returns the result of the last expression.

So:

1 → evaluated, discarded

2 → evaluated, discarded

3 → evaluated and returned

So x = 3.

Then printf("%d", x); prints 3.

🧠 Concepts used:

Comma operator (not just a comma between variables!)

Expression evaluation order

Assignment and return value behavior

✅ Output: 3 */
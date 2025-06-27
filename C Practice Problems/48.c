#include <stdio.h>
#define square(x) x *x
int main()
{
  int a = 3;
  printf("%d", square(a + 1));
  return 0;
}
/* ❓ What will be the output?
A. 16
B. 10
C. 7
D. Compilation error

✅ Correct Answer: C

📘 Detailed Explanation:
This line:

c
Copy
Edit
#define square(x) x*x
is a macro, not a function. When the compiler sees:

c
Copy
Edit
square(a+1)
It replaces it literally as:

c
Copy
Edit
a+1*a+1
Because * has higher precedence than +, it becomes:

c
Copy
Edit
a + (1 * a) + 1 = 3 + 3 + 1 = 7
So:

c
Copy
Edit
square(a+1) → 7
✅ Output: 7

📌 How to fix this?
Use parentheses in macro definitions:

c
Copy
Edit
#define square(x) ((x)*(x))
🧠 Concepts used:

Macro substitution (preprocessor)

Operator precedence

The danger of not using parentheses in macros */
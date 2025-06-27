#include <stdio.h>
int main()
{
  int x;
  printf("%d", x);
  return 0;
}

/* ❓ What will be the output?
A. 0
B. Garbage value
C. Compilation error
D. Runtime error

➡️ Correct Answer: B (Garbage value)

📘 Detailed Explanation:
In C, if you declare a local variable like int x; but don’t assign a value, it contains whatever was in that memory location before. This is called a garbage value.

int x; → creates a variable x, but doesn't initialize it.

printf("%d", x); → tries to print its value.

Since it's not set, the output is unpredictable — it could be any random number.

🧠 Concepts to Learn:

Local variables in C are not automatically initialized.

Unlike global/static variables (which are initialized to 0 by default), automatic (stack) variables must be initialized manually.

✅ Output: Garbage value (like 32767, -12345, etc.) */
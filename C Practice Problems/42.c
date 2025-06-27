#include <stdio.h>
int main()
{
  int a = 5;
  printf("%d %d", a++, ++a);
  return 0;
}
/* ❓ What will be the output?
A. 5 7
B. 6 6
C. Undefined behavior
D. 5 6

✅ Correct Answer: C. Undefined behavior

📘 Detailed Explanation:
This line:

c
Copy
Edit
printf("%d %d", a++, ++a);
Modifies a twice in the same expression without a sequence point, which causes undefined behavior in C.

Why?

a++ → uses value of a (5), then increments (to 6).

++a → increments a first (to 7), then uses the value.

But because you’re modifying a more than once without a clear order, C doesn’t guarantee what happens. The result might vary depending on the compiler or optimization.

🧠 Concepts to Learn:

Undefined behavior: C doesn’t define what should happen. It might seem to “work” sometimes, but it's unreliable.

Avoid modifying a variable more than once in a single statement.

✅ Output: Unpredictable — undefined behavior */
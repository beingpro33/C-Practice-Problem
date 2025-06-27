#include <stdio.h>
int main()
{
  int a = -13 % 5;
  printf("%d", a);
  return 0;
}
/* ❓ What will be the output?
A. 2
B. -2
C. 3
D. -3

✅ Correct Answer: D. -3

📘 Explanation:
In C, the sign of the result of the % operator is the same as the dividend (first operand).

-13 % 5 = -3
Because: -13 = (-3 × 5) + 2 → remainder = -3

🧠 Concepts to Learn:

% is the remainder operator, not modulo.

Sign of result = sign of the numerator (left-hand operand).

✅ Output: -3 */
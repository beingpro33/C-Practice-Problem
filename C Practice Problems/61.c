#include <stdio.h>
int main()
{
  int x = 5;
  int y = x++ + x;
  printf("%d", y);
  return 0;
}
/* ❓ What will be the output?
A. 10
B. 11
C. 12
D. Undefined

✅ Correct Answer: B. 11

📘 Explanation:
x++ + x is evaluated left to right, but the side-effect (increment) happens after evaluation of x++.

So:

x++ evaluates to 5, but now x = 6

Then + x → now x = 6, so 5 + 6 = 11

🧠 Concepts to Learn:

x++: Use current value, then increment.

Be cautious using x++ multiple times in the same expression.

✅ Output: 11 */
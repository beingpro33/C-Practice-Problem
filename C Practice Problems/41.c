#include <stdio.h>
int main()
{
  float x = 10 / 4;
  printf("%.2f", x);
  return 0;
}

/* ❓ What will be the output?
A. 2.50
B. 2.00
C. 2.25
D. 2.6667

✅ Correct Answer: B. 2.00

📘 Detailed Explanation:
The key part is:

float x = 10 / 4;
Even though x is a float, 10 and 4 are both integers. In C:

Integer division happens before assigning the result to the float.

10 / 4 = 2 (not 2.5, because both are integers).

Then 2 is stored as a float: 2.0.

So the final result printed is 2.00.

🧠 Concepts to Learn:

Integer division truncates the decimal (doesn’t round).

Type matters! If one operand is a float:
10.0 / 4 = 2.5 ✅
10 / 4.0 = 2.5 ✅
But 10 / 4 = 2 ❌

✅ Output: 2.00 */
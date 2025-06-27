#include <stdio.h>
int main()
{
  char c = 255;
  printf("%d", c);
  return 0;
}
/* ❓ What will be the output?
A. 255
B. -1
C. 0
D. Compilation error

✅ Correct Answer: B (on most systems)

📘 Detailed Explanation:
Here, you're storing the number 255 into a char variable.

Let’s break it down:

char is a 1-byte (8-bit) type.

It can be either signed or unsigned, depending on the compiler.

Signed char range: -128 to +127

255 is outside this range.

So when you store 255 in a signed char, it wraps around to:

Copy
Edit
255 - 256 = -1
This is called integer overflow in a signed type.

🧠 Concepts used:

char vs int

Signed and unsigned ranges

Overflow behavior

2’s complement representation

✅ Output: -1 */
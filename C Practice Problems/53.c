#include <stdio.h>
int main()
{
  char ch = 'A';
  printf("%d", ch);
  return 0;
}
/* ❓ What will be the output?
A. A
B. 65
C. Error
D. Garbage value

✅ Correct Answer: B. 65

📘 Explanation:
In C, characters are stored as ASCII values.

'A' has an ASCII value of 65.

So, when you print it as an integer using %d, it prints 65.

🧠 Concepts to Learn:

char is essentially a small integer (1 byte).

Format specifier %d interprets the value numerically.

✅ Output: 65 */
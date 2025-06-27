#include <stdio.h>
int main()
{
  int a = 0;
  if (a && printf("Hello"))
    ;
  else
    printf("World");
  return 0;
}
/* ❓ What will be the output?
A. Hello
B. World
C. HelloWorld
D. Nothing

✅ Correct Answer: B. World

📘 Explanation:
a && printf("Hello") uses the logical AND (&&) operator.

a is 0 (false), so the second part (printf("Hello")) is not evaluated (short-circuited).

So only "World" is printed.

🧠 Concepts to Learn:

Short-circuit evaluation: If first condition is false in &&, second is skipped.

Works similarly with || — skips second if first is true.

✅ Output: World */
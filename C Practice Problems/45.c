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

✅ Correct Answer: B

📘 Detailed Explanation:
Let’s look at the condition:

c
Copy
Edit
if (a && printf("Hello"))
Here:

a = 0

&& is the logical AND operator

In C, logical AND (&&) has a behavior called short-circuiting.

🔍 What does short-circuit mean?

If the first part of && is false (i.e., zero), the second part is never executed.

So printf("Hello") is not run at all.

Then the code goes to the else block and prints "World".

✅ Output: World

🧠 Concepts used:

Logical AND (&&)

Short-circuit evaluation

Zero means false

Non-zero means true */
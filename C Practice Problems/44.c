#include <stdio.h>
int main()
{
  int i = 0;
  while (i++ < 5)
    printf("%d", i);
  return 0;
}
/* ❓ What will be the output?
A. 01234
B. 12345
C. 123456
D. 012345

✅ Correct Answer: B. 12345

📘 Detailed Explanation:
Let’s break it down:

while(i++ < 5) → condition uses i before incrementing.

Inside the loop, we print i after increment.

Step-by-step:

ini
Copy
Edit
i = 0 → condition: 0 < 5 → true → i becomes 1 → print 1
i = 1 → condition: 1 < 5 → true → i becomes 2 → print 2
i = 2 → condition: 2 < 5 → true → i becomes 3 → print 3
i = 3 → condition: 3 < 5 → true → i becomes 4 → print 4
i = 4 → condition: 4 < 5 → true → i becomes 5 → print 5
i = 5 → condition: 5 < 5 → false → exit
🧠 Concepts to Learn:

i++ → post-increment: use first, then increase

How loops work step by step

Understanding loop control variables

✅ Output: 12345 */
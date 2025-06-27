#include <stdio.h>
int test()
{
  return 5;
  return 10;
}

int main()
{
  printf("%d", test());
  return 0;
}
/* ❓ What will be the output?
A. 5
B. 10
C. Compilation error
D. Nothing

✅ Correct Answer: A. 5

📘 Explanation:
In the test() function, the first return 5 is executed.

The second return 10; is unreachable code — never runs.

🧠 Concepts to Learn:

Once a return is hit, function exits immediately.

Code after return is ignored (though some compilers may warn you).

✅ Output: 5 */
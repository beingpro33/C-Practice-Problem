#include <stdio.h>
int main()
{
  int arr[3] = {1, 2, 3};
  printf("%d", arr[5]);
  return 0;
}
/* ❓ What will be the output?
A. 0
B. 5
C. Garbage value
D. Compilation error

✅ Correct Answer: C. Garbage value

📘 Explanation:
Accessing arr[5] goes out of bounds (array has only 3 elements).

C does not check array bounds at runtime.

So, arr[5] gives garbage or may cause undefined behavior.

It might print any random value or cause a crash.

🧠 Concepts to Learn:

C arrays don't have automatic bounds checking.

Accessing beyond valid index = dangerous, undefined behavior.

✅ Output: Garbage value (or crash) */
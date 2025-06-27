#include <stdio.h>
int main()
{
  int arr[3] = {10, 20, 30};
  printf("%d", *(arr + 2));
  return 0;
}
/* ❓ What will be the output?
A. 10
B. 20
C. 30
D. Error

✅ Correct Answer: C. 30

📘 Detailed Explanation:
Arrays and pointers in C are closely related.

arr is an array of 3 integers: {10, 20, 30}

arr + 2 → moves 2 positions ahead from the beginning of the array

*(arr + 2) → means “value at index 2” → 30

So this is equivalent to:

arr[2]

🧠 Concepts to Learn:

arr[i] == *(arr + i)

Array name is a pointer to the first element.

Pointer arithmetic moves in units of the data type (here, int).

✅ Output: 30 */
#include <stdio.h>
int main()
{
  int arr[] = {100, 200, 300, 400};
  int *p = arr;
  printf("%d", *(p + 2));
  return 0;
}
/* ❓ What will be the output?
A. 200
B. 300
C. 400
D. Garbage

✅ Correct Answer: B. 300

📘 Detailed Explanation:
p = arr; → points to first element (arr[0])

p + 2 → move two int steps forward → points to arr[2] = 300

*(p + 2) → dereferences the pointer → gets the value at arr[2]

🧠 Concepts to Learn:

Pointer arithmetic is done in units of the data type.

*(p + i) is same as arr[i].

✅ Output: 300 */
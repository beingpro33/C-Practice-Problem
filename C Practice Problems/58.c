#include <stdio.h>
int main()
{
  char str[4] = {'C', 'o', 'd', 'e'};
  printf("%s", str);
  return 0;
}
/* ❓ What will be the output?
A. Code
B. Code and garbage
C. Compilation error
D. Nothing

✅ Correct Answer: B. Code and garbage

📘 Explanation:
Strings in C must end with null character '\0'.

'C', 'o', 'd', 'e' → no null terminator

printf("%s", str) keeps printing memory beyond 'e' until it accidentally finds a '\0'.

🧠 Concepts to Learn:

Strings = character array + null terminator.

char str[] = "Code"; is better, it auto-adds '\0'.

✅ Output: "Code<garbage>" */
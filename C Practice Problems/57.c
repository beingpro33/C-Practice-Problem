// #include <stdio.h>
// int sum(int, int);

// int main()
// {
//   printf("%d", sum(2));
//   return 0;
// }

// int sum(int a, int b)
// {
//   return a + b;
// }
/* ❓ What will be the output?
A. 2
B. 4
C. Compilation error
D. Runtime error

✅ Correct Answer: C. Compilation error

📘 Explanation:
You declared the function as int sum(int, int); → expects 2 arguments.

You called it with only 1 argument → sum(2)

Compiler throws an error: "too few arguments"

🧠 Concepts to Learn:

C requires matching number and type of arguments.

Function declarations are contracts: must follow exactly.

✅ Output: Compilation error */

#include <stdio.h>

int main()
{

  int grades[] = {85, 92, 76, 88, 95};

  int size = sizeof(grades) / sizeof(grades[0]);

  // a) Delete the value at the end of the array.
  size--;

  // b) Insert the value 80 at the beginning of the array.
  for (int i = size - 1; i >= 0; i--)
  {
    grades[i + 1] = grades[i];
  }
  grades[0] = 80;
  size++;

  // c) Insert the value 90 at index 3.
  for (int i = size - 1; i >= 3; i--)
  {
    grades[i + 1] = grades[i];
  }
  grades[3] = 90;
  size++;

  // d) Delete the value at index 1.
  for (int i = 1; i < size - 1; i++)
  {
    grades[i] = grades[i + 1];
  }

  size--;

  // Printing the final array
  for (int i = 0; i <= size - 1; i++)
  {
    printf("%d ", grades[i]);
  }
}

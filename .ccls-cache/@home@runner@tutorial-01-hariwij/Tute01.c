/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {
  int m1 = 0, m2 = 0;
  printf("Enter subject 01 marks : ");
  scanf("%d", &m1);
  printf("Enter subject 02 marks : ");
  scanf("%d", &m2);
  printf("Avarage mark : %.2f", (m1 + m2) / 2.0);
  return 0;
}

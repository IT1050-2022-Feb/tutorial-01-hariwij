/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int distance = 0;
  int fee = 0;
  printf("Enter distance traveled : ");
  scanf("%d", &distance);
  fee = distance <= 30 ? distance * 50 : (distance - 30) * 40 + 30 * 50;

  return 0;
}

/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int mark1, mark2;

  printf("Enter marks of first subject : ");
  scanf("%d",&mark1);
  printf("Enter marks of second subject : ");
  scanf("%d",&mark2);

  float tot,avg;

  tot=(mark1+mark2);
  avg=tot/2;
  printf("Average is : %.2f",avg);

  return 0;
}


/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int math,eng;
  float avg;

  printf("Enter math and eng marks\n");
  scanf("%d%d",&math,&eng);
  
  avg=(math+eng)/2.0;

  printf("Average = %.2f",avg);
  
  return 0;
}


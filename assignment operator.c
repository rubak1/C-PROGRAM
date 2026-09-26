#include <stdio.h>

int main() {
 int savings = 150;
 savings += 50;
  printf("total savings:%d",savings);
  printf("\n");
  
 int expense=50;
 expense -=20;
 printf("total savings:%d",expense);
 printf("\n");
 
 int bonus=50;
 bonus *=2;
 printf("bonus:%d",bonus);
 printf("\n\n");
 
 int total=savings-expense+bonus;
 printf("total savings= %d",total);
 return 0;
 }
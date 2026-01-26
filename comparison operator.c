#include <stdio.h>
int main()
{
int num,num2;

printf("enter the number: ");
scanf("%d",&num);
printf("\n");

printf("enter the number 2: ");
scanf("%d",&num2);
printf("\n");

int comp;
printf("%d",num<num2 && num>num2);


return 0;
}
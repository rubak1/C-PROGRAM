#include <stdio.h>
int main()
{
int num1,num2;
printf("num1: ");
scanf("%d",&num1);
printf("\n");

printf("num2: ");
scanf("%d",&num2);
printf("\n");

int add=num1+num2;
printf("Add %d",add);
printf("\n");

int sub=num1-num2;
printf("Sub %d", sub);
printf("\n");

int mul=num1*num2;
printf("mul %d", mul);
printf("\n");

return 0;
}
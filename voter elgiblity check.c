#include <stdio.h>

int main ()
{
    int age;
    int voterAge=18;
    
    printf("enter the age: ");
    scanf("%d",&age);
    
    if (age>voterAge){
        printf("eligible to vote");
    } else {
        printf("not eligible to vote");
    }
    return 0;
}
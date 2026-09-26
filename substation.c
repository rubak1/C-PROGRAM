#include <stdio.h>

int main ()
{
    int n;
    printf("enter the input value: ");
    scanf("%d",&n);
    printf("\n");
    
    if (n<150){
        printf("high voltage");
    } else {
        printf("normal voltage ");
    }
     printf("\n");
    
    int temp;
    printf("enter the temp: ");
    scanf("%d",&temp);
    printf("\n");
     printf("\n");
    
    if (temp < 95){
        printf("the temp is high");
         printf("\n");
    } else if (temp<1000) {
        printf("the temp is too high");
         printf("\n");
    } else  {
        printf("normal temp");
         printf("\n");
    }
    
    if (n<50){
        printf("step dowm");
         printf("\n");
    } else {
        printf("step up");
         printf("\n");
    }
     printf("\n");
    
    return 0;
    
}
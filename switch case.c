#include <stdio.h>

int main ()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    
    switch (n) {
        case 1:
        printf("sanjana");
        break;
        
        case 2:
        printf("kaviya");
        break;
        
        case 3:
        printf("gopika");
        break;
        
        case 4:
        printf("dharshini");
        break;
        
        default:
        printf("amma pakra ponnu");
        break;
        
    }
}
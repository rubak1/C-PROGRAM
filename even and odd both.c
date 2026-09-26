#include <stdio.h> 
int main ()
{
    int n,i,a[100],j;
    printf("Enter the Elements:  ");
    scanf("%d",&n);

    printf("\nElements Are:  ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<i;j++){
         if(a[j]%2==0){
        printf("\nEven Numbers Are: %d",a[j]);
    }
        else {
            printf("\nOdd Numbers: %d",a[j]);
        }
    }

    
    return 0;
}
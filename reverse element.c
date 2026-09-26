#include<stdio.h> 
int main (){
    int n,a[100],i,temp;
    printf("Enter the Elements:  ");
    scanf("%d",&n);

    printf("\nElements are: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++){
        temp = a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
     
    }
         printf("\nReverse elements:  %d",a[i-n-1]);
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
   
        return 0;
}
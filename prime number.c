#include <stdio.h> 
int main(){
    int n,i,flag=0;
    printf("Enter the element:  ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){  //it will do if the element is % by element if it is divides it will be an not prime 
//2%2=0 (prime) 4*2=1 not prime

            flag=1;
            break;
        }
    }
        if(flag==0){
            printf("\nPrime");
        }
        else{
            printf("\nNot prime");
        }
    
}
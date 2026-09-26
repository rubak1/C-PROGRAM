#include <stdio.h> 
int main(){
    int a[100],i=0,sum=0,j;  //initialize the sum=0 to start from zero else it will release the garbage values 
    printf("Enter the Elements:  ");
    while(1){
        scanf("%d",&a[i]);
        
         if(a[i]==-1){
        break;
    }
        
            sum=sum+a[i];    //sum = sum+a[i] will print the sum
        
          
    }
   printf("\nSums is: %d",sum);
  
    return 0;
    
}
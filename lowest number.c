#include <stdio.h> 
int main(){
    int a[100],i=0,j,temp =0;;
    printf("Enter the Elements:\nExit for -1:\n    ");
    while(1){
        scanf("%d",&a[i]);

        if(a[i]==-1){
            break;
        }

        for(j=0;j<i+1;j++){
            if(a[i]<a[j]){
               
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
          
        }
          i++;
           
    }
   printf("\n%d",a[1]); 
}
#include<stdio.h> 

int main(){
    int a[100],i=0,temp=0,count=0,j;
    printf("Enter the elements:  ");

    while(1){
        scanf("%d",&a[i]);
        
       
    
    if(a[i]==-1){
        break;
    }
        count++;
        i++;
    }
    for(j=0;j<count/2;j++){    //we need to swap to number of elements half so we use count/2
        temp = a[j];
        a[j]=a[count-1-j];     //for reverse first values to last values so that the count-1-j used 
        a[count-1-j]=temp;
       
    }
    printf("\nReverse elements are: ");
    for(j=0;j<count;j++){
        printf("\nElements are: %d",a[j]);
    }
}
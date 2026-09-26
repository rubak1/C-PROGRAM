#include<stdio.h> 
int main (){
    int a[100],i=0,num;
    printf("Enter the elements:  ");

    while(1){
        scanf("%d",&a[i]);

        if(a[i]==-1){
            break;
        }
        num = a[i];
    }
    printf("%d",num);
}
#include<stdio.h> 
int main (){
    int i=0,j,temp=0,a[100];
    printf("Enter the Elements:\nEnter -1 to Exit:\n ");
    while(1){
        scanf("%d",&a[i]);

        if(a[i]==-1){
            break;
        }
        for(j=0;j<i;j++){
            if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
            i++;
    }

    printf("\nElements Are: ");
    for(j=0;j<i;j++){
        printf("\n%d",a[j]);
    }
    return 0;
}
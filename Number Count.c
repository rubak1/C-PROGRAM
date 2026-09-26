#include <stdio.h> 
int main(){
    int a[100],i=0,count=0;   //initializing the a as 100 we dont know the users mindset so we set to 100,next i was going to increase the count for every iteration so its 0 and same count..
    printf("Enter the elements:\nExit to Enter -1\n");

    while(1){               //while loop for endless run 
        scanf("%d",&a[i]);  
        if(a[i]==-1){   //if -1 enter its exit 
            break;
        }
        count++;
        i++;
    }
    printf("\nCount: %d",count);
    return 0;
}
#include <stdio.h>

int main ()
{
    int n,j=1;
    printf("enter the number: ");
    scanf("%d",&n);
    
    for (int i=n;i>=1;i--) {
      j=j*i;
          printf("%d\n",j);
      }
    
}
#include <stdio.h>
int main (){
        int n, freq[n];
        scanf("%d",&n);
        int a[n];
        for (int i=0;i<n;i++){
                scanf("%d",&a[i]);
                freq[i]=0;
        }
        for(int i=0;i<n;i++){
                for (int j=0;j<n;j++){
                        if (a[i]==a[j]){
                                freq[i]++;
                        }
                }
        }
        int max=0;
        int min=0;
        
        for(int i=0;i<n;i++){
                if (freq[i]>max){
                        max = freq[i];
                        min=a[i];
                }
        }
        if(max>n/2){
                printf("no majority element");
        } else {
                printf("%d",max);
        }
        
}
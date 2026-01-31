#include <stdio.h> 
#include <string.h>
int main() {
    char s[20000];
    scanf("%s",s);
  
  int n=strlen(s);
    
  int freq[256]={0};
    for(int i=0;i<n;i++){
        freq[s[i]]++;
    }
        
        for(int i=0;i<n;i++){
            if(freq[s[i]] > n/3){
                printf("%c",s[i]);
                return 0;
            }
        }

        printf("-1");
        return 0;
}
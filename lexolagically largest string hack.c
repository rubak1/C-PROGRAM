#include <stdio.h>
#include <string.h>

int main (){
    char s[20000];
    scanf("%s",s);
    int freq[256]={0};
    
    for(int i=0;s[i]!='\0';i++){
        freq[s[i]]++;
    }
    
    for(char ch='z';ch>='a';ch--){
        while(freq[ch]>0){
            printf("%c",ch);
            freq[ch]--;
        
        }
        
    }
    return 0;
}
#include <stdio.h> 
int main (){
    char s[200000];
    scanf("%s",s);
    int freq[256]={0};
    
    for(int i=0;s[i]!='\0';i++){
        freq[s[i]]++;
    }
        
    for(int i=0;s[i]!='\0';i++){
       if(freq[s[i]]!=0){
           printf("%c %d\n",s[i],freq[s[i]]);
           freq[s[i]]=0;
       
    }
    }
          return 0;
}
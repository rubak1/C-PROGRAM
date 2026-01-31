#include <stdio.h>
#include <string.h>
int main (){
char s[2000];
scanf("%s",s);


for(char ch='a';ch<='z';ch++){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==ch){
        printf("%c",ch);
        }
    }
    }
    for(char ch='A';ch<='Z';ch++){
        for(int i=0;s[i]!='\0';i++){
            if(s[i]==ch){
            printf("%c",ch);
            }
        }
    }
    return 0;
}
#include <stdio.h>

int main(){

    char s[2000];
    scanf("%s", s);
    
    for(int i = 0; s[i] != '\0'; i++){
        if(i % 2 == 0){
            printf("%c", s[i]);
        }
    }

    for(int i = 0; s[i] != '\0'; i++){
        if(i % 2 != 0){
            printf("%c", s[i]);
        }
    }

    return 0;
}

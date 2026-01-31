#include <stdio.h> 
int main() {
    char s[2000];
    scanf("%s",s);
    
    int count;
    int maxcount,result = 0;
    for(int i=0;s[i]!='\0';i++){
        count=0;
        
        for(int j=0;s[j];j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count > maxcount){
            maxcount=count;
            result = s[i];
        }
    }
    if(maxcount > 1){
        printf("%c",result);
    } else {
        printf ("-1");
    }
    return 0;
}
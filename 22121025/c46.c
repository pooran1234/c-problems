#include <stdio.h>
#include<string.h>
int main() {
    char pass[100];
    int len;
    scanf("%s",&pass);
    len = strlen(pass);
    if(len>=8){
        printf("strong");
    }else if(len>=5){
        printf("medium");
    }else{
        printf("weak");
    }
    
    return 0;
}
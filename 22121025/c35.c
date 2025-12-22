#include <stdio.h>
#include<string.h>
int main() {
    char username[20];
    int p;
    scanf("%s",username);
    scanf("%d",&p);
    if(strcmp(username,"admin")==0 && p==1234){
        printf("login sucessful");
    }    else{
        printf("login failed");
    }
    return 0;
}
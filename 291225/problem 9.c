#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("upper case");
    }else{
        printf("lower case");
    }
    
    return 0;
}
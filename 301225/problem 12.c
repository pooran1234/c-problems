#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n>=0 && n<=9){
        printf("single digit number");
    }else{
        printf("not a single digit number");
    }
    
    return 0;
}
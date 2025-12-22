#include <stdio.h>
int main() {
    int balance,withdrawal;
    scanf("%d",&balance);
    if(balance>=withdrawal+500){
         printf("success");
    }else{
        printf("fail");
    }
    
    return 0;
}
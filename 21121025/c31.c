#include <stdio.h>
int main() {
    int m;
    scanf("%d",&m);
    if(m>=90){
        printf("A+");
    }else if(m>=80){
        printf("A");

    }else if(m>=70){
        printf("B");
    }else if(m>=60){
        printf("C");
    }else{
        printf("fail");
    }
    
    return 0;
}
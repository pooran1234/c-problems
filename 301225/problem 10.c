#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n<100 && n>=85 ){
        printf("grade a");
    }else if(n<85 && n>=55){
        printf("grade b");
    }else{
        printf("grade c");
    }
    
    return 0;
}
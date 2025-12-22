#include <stdio.h>
int main() {
    int r;
    scanf("%d",&r);
    if(r>=8){
        printf("excellent");
    }else if(r>=5){
        printf("average");
    }else{
        printf("poor");
    }
    
    return 0;
}
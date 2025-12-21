#include <stdio.h>
int main() {
    int salary,credit;
    scanf("%d %d",&salary,&credit);
    if(salary>=25000){
        if(credit>=700){
            printf("eligible");
        }
    }else{
        printf("not eligible");
    }
    
    return 0;
}
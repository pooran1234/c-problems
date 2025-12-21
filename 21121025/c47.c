#include <stdio.h>
int main() {
    int age,testscore;
    scanf("%d %d",&age,&testscore);
    if(age>=18){
        if(testscore>=60){
            printf("qualified");
        }else{
            printf("not qualified");
        }}
    else{
        printf("age is less");}
    

    
    return 0;
}
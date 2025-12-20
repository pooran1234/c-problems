#include <stdio.h>
int main() {
    int salary,add;
    scanf("%d",&salary);
    if(salary>20000){
        add=salary+2000;
    }else{
        add=salary+1000;
    }
    printf("%d",add);
    
    return 0;
}
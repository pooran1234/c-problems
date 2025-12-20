#include <stdio.h>
int main() {
    int units,cost;
    scanf("%d",&units);
    if(units<=100){
       cost=units*1;
    }else{
        cost=units*2;
    }
    printf("%d",cost);
    return 0;
}
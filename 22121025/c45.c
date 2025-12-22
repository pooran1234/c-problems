#include <stdio.h>
int main() {
    int hours,pay;
    scanf("%d",&hours);
    if(hours>40){
        pay=(hours-40)*200;
    }else{
        pay=hours;
    }printf("%d",pay);
    
    return 0;
}
#include <stdio.h>
int main() {
    int salary;
    int increase;
    scanf("%d",&salary);
    if(salary>=30000){
        increase=salary+(salary*10/100);
    }else{
        increase=salary+(salary*15/100);
    }printf("%d",increase);
    
    return 0;
}
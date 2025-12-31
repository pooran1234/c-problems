#include <stdio.h>
int main() {
    int n,m;
    
    int rev=0,rem;
    scanf("%d",&n);
    m=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }printf("%d\n",rev);
    if(rev == m){
        printf("palindrome");
    }else{
        printf("not a palindrome");
    }
    return 0;
}
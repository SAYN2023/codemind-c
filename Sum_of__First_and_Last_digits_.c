#include<stdio.h>
int main(){
    int n,r;
    scanf("%d ",&n);
    int l=n%10;
    while(n!=0)
    {
        r =n%10;
        n=n/10;
    }
    int sum =l+r;
    printf("%d",sum);
    
}
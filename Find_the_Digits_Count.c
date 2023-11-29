#include<stdio.h>
int main(){
    int n ,c=0;
    scanf("%d",&n);
    while(n>=1)
    {
        n=n/10;
        c++;
    }
    printf("%d",c);
}
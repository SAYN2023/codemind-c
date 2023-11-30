#include<stdio.h>
int main(){
    int n,ld,r=0;
    scanf("%d",&n);
    while(n!=0){
        ld=n%10;
        r=r*10+ld;
        n=n/10;
        
    }
    printf("%d",r);
}
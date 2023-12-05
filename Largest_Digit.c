#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int r;
    int lg=0;
    while(n>0){
        r=n%10;
        if(r>lg){
            lg=r;
            
        }
        n=n/10;
        
    }
    printf("%d",lg);
}
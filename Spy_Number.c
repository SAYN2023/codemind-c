#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum =0;
    int prod=1;
    while(n>0){
        int r=n%10;
        sum=sum +r;
        prod=prod*r;
        n=n/10;
        
    }
    if(sum==prod){
        printf("Spy Number");
        
    }
    else{
        printf("Not Spy Number");
    }
}
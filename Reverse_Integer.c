#include<stdio.h>
int main(){
    int a,k,rev=0;
    scanf("%d",&a);
    while(a!=0){
        k=a%10;
        a=a/10;
        rev=(rev*10)+k;
        
       
    }
     printf("%d",rev);
    
}
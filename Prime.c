#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    int i=1;
    while(i<=n){
        if(n%i==0){
            count=count+1;
        }
        i++;
    }
    if(count==2)
    printf("Prime");
    else
    printf("Not Prime");
}
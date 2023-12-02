#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count =0;
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0){
            count++;
            sum=sum+i;
        }
        
    }
    printf("%d",sum);
}
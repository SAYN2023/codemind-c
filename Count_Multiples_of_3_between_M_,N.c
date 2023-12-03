#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int i = x;
    int count =0;
    while(i<=y){
        if(i%3==0){
            count++;
        }
        i++;
    }
    printf("%d",count);
}
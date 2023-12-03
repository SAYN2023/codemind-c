#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int count =0;
    int i =x;
    while(i<=y){
        if(i%2==0 && i%3==0){
            count++;
        }
        i++;
    }
    printf("%d",count);
    
}
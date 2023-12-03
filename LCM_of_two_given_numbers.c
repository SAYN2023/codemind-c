#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int max = (x>y)? x : y ;
    while(1){
        if(max%x==0 && max%y==0){
            printf("%d",max);
            break;
        }
        max++;
    }
    
}
#include<stdio.h>
int main(){
    int n,a=1;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            if((row==col) || (row+col==n+1)){
                //if((row==col) || (row==1 && col==n) || (col==1&& row==1) || (row+col==n+1)){
                    printf("%d ",a);
                }
                else{
                    printf(" ");
                }
            }
            a++;
            printf("
");
        }
    }

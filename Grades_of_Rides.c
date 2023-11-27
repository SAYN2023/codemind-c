#include<stdio.h>
int main(){
    int hf,sp,Sp;
    scanf("%d %d %d ",&hf,&sp,&Sp);
    if(hf>50 && sp>60 && Sp>100)
    printf("10");
    else if(hf>50 && sp>60)
    printf("9");
    else if( sp>60 && Sp>100)
    printf("8");
    else if(hf>50 && Sp>100)
    printf("7");
     else if(hf>50|| sp>60|| Sp>100)
    printf("6");
    else
    printf("5");
}
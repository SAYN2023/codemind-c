#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("%c ",(64+a)+1-i);
        }
        printf("
");
    }
}
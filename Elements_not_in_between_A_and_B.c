#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++){
        if(arr[i]<a || arr[i]>b){
            count++;
        }
    }
    if(count>0){
        for(int i=0;i<n;i++){
            if(arr[i]<a || arr[i]>b){
                printf("%d ",arr[i]);
            }
        }
    }
    else{
        printf("-1");
    }
}
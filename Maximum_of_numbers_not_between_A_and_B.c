#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++){
        if(arr[i]<a||arr[i]>b){
            count++;
        }
    }
    int min=0;
    if(count>0){
        for(int i=0;i<n;i++){
            if(arr[i]<a || arr[i]>b){
                if(min<arr[i]){
                    min=arr[i];
                }
            }
        }
        printf("%d",min);
    }
    else{
        printf("-1");
    }
}
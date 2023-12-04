#include<stdio.h>
int main(){
    float salary,hra,da;
    scanf("%f %f %f",&salary,&hra,&da);
    float pf =(salary*12)/100;
    float gs=salary+hra+da+pf;
    printf("%.2f
",pf);
    printf("%.2f
",gs);
    
}
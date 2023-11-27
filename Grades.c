#include<stdio.h>
int main(){
    int p,c,b,m,cs;
    float percent;
    scanf("%d %d %d %d %d",&p,&c,&b,&m,&cs);
    percent=(float)((p+c+b+m+cs)/5);
    if (percent>=90)
    printf("Grade A");
    else if (percent>=80)
    printf("Grade B");
    else if (percent>=70)
    printf("Grade C");
    else if (percent>=60)
    printf("Grade D");
    else if (percent>=40)
    printf("Grade E");
    else 
    printf("Grade F");
    
}

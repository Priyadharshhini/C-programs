#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    switch (a>0,b>0)
    {
    case 1:
        a+b;
        printf("Result=%d",a+b);
        break;
    
    default:
        break;
    }
    return 0;
}
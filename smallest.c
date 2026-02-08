#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int value=a>b && b>a ? a:b;
    printf("%d is smallest",value);
    return 0;
}
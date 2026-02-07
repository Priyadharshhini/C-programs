#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b>c){
        printf("largest no:%d",a);
    }
    else if(b>c){
        printf("largest no:%d",b);
    }
    else{
        printf("largest no:%d",c);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=20){
        printf("heating mode\n");
    }
    else if(a>20 && a<=30){
        printf("normal mode\n");
    }
    else if(a>30){
        printf("cooling mode");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=3){
        printf("login allowed\n");
    }
    else if(a>=4){
        printf("Account locked\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=80){
        printf("Within speed limit\n");
    }
    else if(a>80){
        printf("Speed limit exceed\n");
    }
    return 0;
}
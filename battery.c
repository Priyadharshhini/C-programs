#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<20){
        printf("low battery\n");
    }
    else{
        printf("battery ok\n");
    }
    return 0;
}
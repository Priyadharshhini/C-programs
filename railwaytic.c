#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("Confirmed\n");
    }
    else if(a==0){
        printf("Waiting list\n");
    }
    return 0;
}
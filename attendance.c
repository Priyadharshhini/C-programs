#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=75){
        printf("Eligible for exam\n");
    }
    else{
        printf("Not Eligible\n");
    }
    return 0;
}
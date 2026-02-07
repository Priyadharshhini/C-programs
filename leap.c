#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if ((a%4==0 && a%100!=0)||(a%400==0)){
        printf("LEAP");
    }else{
        printf("NOT LEAP");
    }
    return 0;
}
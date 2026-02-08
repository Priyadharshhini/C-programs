#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%3==0 && a%7==0){
        printf("Divisible by both 3and7");
    }else{
        printf("Not divisible");
    }
    return 0;
}
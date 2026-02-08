#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<12){
        printf("Discount ticket\n");
    }
    else{
        printf("Regular ticket\n");
    }
    return 0;
}
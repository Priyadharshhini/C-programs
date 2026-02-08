#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>0 && a<=5){
        printf("Weekday");
    }
    else if(a>5&&a<8){
        printf("weekend");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=1000){
        printf("Discount applied");
    }
    else if(a<1000){
        printf("No discount");
    }
    return 0;
}
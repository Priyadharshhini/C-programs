#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=18 && a<=70){
        printf("Eligible\n");
    }
    else{
        printf("Not eligible\n");
    }
    return 0;
}